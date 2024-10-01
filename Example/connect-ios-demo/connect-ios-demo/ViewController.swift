//
//  ViewController.swift
//  connect-ios-demo
//

import UIKit
import PowensConnect

class ViewController: UIViewController {

    @IBOutlet var connectButton: UIButton!
    @IBOutlet var manageButton: UIButton!
    @IBOutlet var reconnectButton: UIButton!
    @IBOutlet var connectActivityIndicator: UIActivityIndicatorView!
    @IBOutlet var manageActivityIndicator: UIActivityIndicatorView!
    @IBOutlet var reconnectActivityIndicator: UIActivityIndicatorView!

    let appDelegate = UIApplication.shared.delegate as? AppDelegate
    
    override func viewDidLoad() {
        super.viewDidLoad()
        title = "Powens Connect integration"
                
        // Registering for Webview callback notifications
        // Allows the automatic dismissal of the presented Webview controller from the source controller
        Powens.shared.handler.registerWebviewCallback(sourceViewController: self)
    }
    
    @IBAction func connect() {
        let token = appDelegate?.userToken
        
        // Setting optional Connect flow parameters
        // Please refer to https://docs.powens.com/api-reference/overview/webview
        // for further information on parameters and their usage
        let options = WebviewConnectOptions()
        options.maxConnections = 2
        /*options.connectorUuids = [
            "338178e6-3d01-564f-9a7b-52ca442459bf",
            "f5c29767-1bc8-5337-9e4e-68a0fbd91c9a"
        ]*/
        //options.connectorCapabilities = [ConnectorCapability.bank, ConnectorCapability.document]
        /*options.connectorFieldValues = [
            "338178e6-3d01-564f-9a7b-52ca442459bf": [
                "openapiwebsite": "par",
                "directaccesswebsite": "pro"
            ],
            "f5c29767-1bc8-5337-9e4e-68a0fbd91c9a": [
                "website": "pro"
            ]
        ]*/
        /*options.accountTypes = [
            BankAccountTypeName.card,
            BankAccountTypeName.checking,
            BankAccountTypeName.market,
            BankAccountTypeName.perco
        ]*/
        //options.accountUsages = [BankAccountUsage.privatePersonal, BankAccountUsage.community]
        
        Task {
            do {
                if token != nil { startAnimating(path: .connect) }
                
                // Building the Connect flow URL and generating a temporary auth code when provided with an access token
                let handle = try await Powens.shared.launcher.connectFlow(accessToken: token, state: nil, options: options)
                
                // Presenting the Webview controller from the current view controller
                handle.presentOn(sourceViewController: self)
                
                stopAnimating(path: .connect)
            } catch {
                NSLog(error.localizedDescription)
                stopAnimating(path: .connect)
            }
        }
    }
    
    @IBAction func manage() {
        let token = appDelegate?.userToken
        guard let token else {
            showMissingConnectionAlert(title: "Manage")
            return
        }
        
        // Setting optional Manage flow parameters
        // Please refer to https://docs.powens.com/api-reference/overview/webview
        // for further information on parameters and their usage
        let options = WebviewManageOptions()
        /*options.connectorUuids = [
            "338178e6-3d01-564f-9a7b-52ca442459bf",
            "f5c29767-1bc8-5337-9e4e-68a0fbd91c9a"
        ]*/
        //options.connectorCapabilities = [ConnectorCapability.bank, ConnectorCapability.document]
        /*options.connectorFieldValues = [
            "338178e6-3d01-564f-9a7b-52ca442459bf": [
                "openapiwebsite": "par",
                "directaccesswebsite": "pro"
            ],
            "f5c29767-1bc8-5337-9e4e-68a0fbd91c9a": [
                "website": "pro"
            ]
        ]*/
        /*options.accountTypes = [
            BankAccountTypeName.card,
            BankAccountTypeName.checking,
            BankAccountTypeName.market,
            BankAccountTypeName.perco
        ]*/
        //options.accountUsages = [BankAccountUsage.privatePersonal, BankAccountUsage.community]
        
        Task {
            do {
                startAnimating(path: .manage)
                
                // Building the Manage flow URL and generating a temporary auth code
                let handle = try await Powens.shared.launcher.manageFlow(accessToken: token, connectionId: nil, state: nil, options: options)
                
                // Presenting the Webview controller from the current view controller
                handle.presentOn(sourceViewController: self)
                
                stopAnimating(path: .manage)
            } catch {
                NSLog(error.localizedDescription)
                stopAnimating(path: .manage)
            }
        }
    }

    @IBAction func reconnect() {
        let token = appDelegate?.userToken
        let connectionId = appDelegate?.connectionId
        guard let token, let connectionId else {
            showMissingConnectionAlert(title: "Reconnect")
            return
        }
        
        // Please refer to https://docs.powens.com/api-reference/overview/webview
        // for further information on parameters and their usage
        let resetCredentials = true

        Task {
            do {
                startAnimating(path: .reconnect)
                
                // Building the Reconnect flow URL and generating a temporary auth code
                let handle = try await Powens.shared.launcher.reconnectFlow(accessToken: token, connectionId: connectionId, resetCredentials: resetCredentials, state: nil)
                
                // Presenting the Webview controller from the current view controller
                handle.presentOn(sourceViewController: self)
                
                stopAnimating(path: .reconnect)
            } catch {
                NSLog(error.localizedDescription)
                stopAnimating(path: .reconnect)
            }
        }
    }
        
    private func showMissingConnectionAlert(title: String) {
        let alert = UIAlertController(
            title: title,
            message: "Please add a connection first by clicking Connect",
            preferredStyle: .alert
        )
        alert.addAction(UIAlertAction(title: "OK", style: .default))
        
        self.present(alert, animated: true)
    }
    
    private func startAnimating(path: WebviewPath) {
        switch path {
        case .connect: connectActivityIndicator.startAnimating()
        case .manage: manageActivityIndicator.startAnimating()
        case .reconnect: reconnectActivityIndicator.startAnimating()
        }
        
        connectButton.isEnabled = false
        manageButton.isEnabled = false
        reconnectButton.isEnabled = false
    }
    
    private func stopAnimating(path: WebviewPath) {
        switch path {
        case .connect: connectActivityIndicator.stopAnimating()
        case .manage: manageActivityIndicator.stopAnimating()
        case .reconnect: reconnectActivityIndicator.stopAnimating()
        }
        
        connectButton.isEnabled = true
        manageButton.isEnabled = true
        reconnectButton.isEnabled = true
    }
    
}
