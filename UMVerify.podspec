Pod::Spec.new do |spec|
  spec.name          = 'UMVerify'
  spec.version       = '2.2.0'
  spec.license       = { :type => 'Copyright', :text => <<-LICENSE
                            Copyright 2011 - 2018 umeng.com. All rights reserved.\n
                            LICENSE
                       }
  spec.homepage      = 'https://developer.umeng.com/docs/143070/detail/143584'
  spec.authors       = { 'UMeng' => 'support@umeng.com' }
  spec.summary       = 'UMeng+ component SDK'
  spec.description   = <<-DESC
                    友盟的智能认证业务组件，简单、安全的多平台登录解决方案，一站式快速集成，提升注册转化。
                   DESC
  spec.source        = { :git => 'https://github.com/GithubGaoYang/UMVerify.git', :tag => spec.version.to_s }

  spec.ios.deployment_target  = '8.0'

  spec.requires_arc = true

  spec.vendored_frameworks = 'UMVerify.framework'
  spec.resource = 'ATAuthSDK.bundle'

  spec.frameworks = 'CoreTelephony', 'SystemConfiguration'
  spec.libraries  = 'sqlite3', 'z'

  spec.dependency 'UMCCommon'
end
