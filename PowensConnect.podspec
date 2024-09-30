Pod::Spec.new do |spec|
    spec.name                     = 'PowensConnect'
    spec.version                  = '1.0.0-beta'
    spec.homepage                 = 'https://www.powens.com'
    spec.source                   = { :git => 'https://github.com/powenscompany/powens-connect-ios.git', :tag => '1.0.0-beta' }
    spec.authors                  = 'Powens'
    spec.license                  = { :type => 'LGPLv3' }
    spec.summary                  = 'Ready-made tools to connect with Powens APIs and easily implement aggregation journeys'
    spec.vendored_frameworks      = 'PowensConnect.xcframework'
    spec.libraries                = 'c++'
    spec.ios.deployment_target = '14.1'
end
