//
//  SceneDelegate.swift
//  connect-ios-demo
//

import UIKit
import PowensConnect

class SceneDelegate: UIResponder, UIWindowSceneDelegate {

    var window: UIWindow?

    func scene(_ scene: UIScene, openURLContexts URLContexts: Set<UIOpenURLContext>) {
        guard let url = URLContexts.first?.url else { return }
        
        NSLog("SceneDelegate openURLContexts – URL:")
        NSLog(url.absoluteString)

        // Handling app callback URL opened by the Webview
        do {
            try Powens.shared.handler.handleConnectCallback(url: url) { result in
                switch onEnum(of: result) {
                case .webviewConnectCallbackSuccess(let result): self.onConnectSuccess(result: result)
                case .webviewCallbackError(let error): self.onError(error: error)
                }
            }
            try Powens.shared.handler.handleManageCallback(url: url) { result in
                switch onEnum(of: result) {
                case .webviewManageCallbackSuccess(let result): self.onManageSuccess(result: result)
                case .webviewCallbackError(let error): self.onError(error: error)
                }
            }
            try Powens.shared.handler.handleReconnectCallback(url: url) { result in
                switch onEnum(of: result) {
                case .webviewCallbackError(let error): self.onError(error: error)
                default: break
                }
            }
        } catch {
            NSLog("Error while handling callback")
            NSLog(error.localizedDescription)
        }
    }
    
    func onConnectSuccess(result: WebviewConnectCallbackSuccess) {
        NSLog("Connection ID: \(result.connectionId)")
        (UIApplication.shared.delegate as? AppDelegate)?.connectionId = result.connectionId
        
        if result.connectionIds != nil {
            NSLog("Connection IDs: \(result.connectionIds!)")
        }
        
        if result.code != nil {
            NSLog("Access token: \(result.code!)")
            (UIApplication.shared.delegate as? AppDelegate)?.userToken = result.code
        }
    }
    
    func onManageSuccess(result: WebviewManageCallbackSuccess) {
        if result.connectionId != nil { NSLog("Connection ID: \(result.connectionId!)") }
        if result.connectionDeleted == true { NSLog("Connection was deleted") }
    }
    
    func onError(error: WebviewCallbackError) {
        NSLog("Callback contains an error")
        if error.errorCode != nil { NSLog("Error code: \(error.errorCode!)") }
        if error.errorDescription != nil { NSLog("Error description: \(error.errorDescription!)") }
    }

}
