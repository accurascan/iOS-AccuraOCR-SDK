Pod::Spec.new do |spec|

  spec.name         = "AccuraOCRSDK"
  spec.version      = "3.0.0"
  spec.summary      = "Accura OCR is used for Optical character recognition."
  spec.description  = "Accura Scan mobile technology provides you with the ability to effectively use the device camera and quickly anboard a customer. Seamless Customer On-Boarding by scanning a Passport or ID card with 3D selfie technology. Verify and Authenticate your customer remotely in realtime. It can work offline or can be stored on cloud or use it your way using our SDK / API’s."
  spec.homepage     = "https://accurascan.com"
  spec.license      = "MIT"
  spec.author       = { "AccuraScan" => "connect@accurascan.com" }
  spec.platform     = :ios, "12.0"
  spec.static_framework = true
  spec.source       = { :git => "https://github.com/accurascan/iOS-AccuraOCR-SDK.git", :tag => "3.0.0" }
  spec.preserve_paths = 'AccuraOCR.framework'
  spec.vendored_frameworks = 'AccuraOCR.framework'
  spec.requires_arc = true
  spec.swift_version = "5.0"
  spec.exclude_files = "accuraocrSDK/*/.{png}"
  spec.dependency 'GoogleMLKit'
  spec.dependency 'SVProgressHUD'
  spec.pod_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

end
