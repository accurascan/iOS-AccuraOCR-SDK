Pod::Spec.new do |spec|

  spec.name         = "AccuraOCRSDK"
  spec.version      = "1.0.8"
  spec.summary      = "Accura OCR is used for Optical character recognition."
  spec.description  = "Accura Scan mobile technology provides you with the ability to effectively use the device camera and quickly anboard a customer. Seamless Customer On-Boarding by scanning a Passport or ID card with 3D selfie technology. Verify and Authenticate your customer remotely in realtime. It can work offline or can be stored on cloud or use it your way using our SDK / API’s."
  spec.homepage     = "https://accurascan.com"
  spec.license      = "MIT"
  spec.author       = { "AccuraScan" => "connect@accurascan.com" }
  spec.platform     = :ios, "9.0"
  spec.static_framework = true
  spec.source       = { :git => "https://github.com/accurascan/iOS-AccuraOCR-SDK.git", :tag => "1.0.8"}
  spec.source_files = 'accuraocrSDK/**/*.{swift}'
  spec.preserve_paths = 'AccuraOCR.framework'
  spec.vendored_frameworks = 'AccuraOCR.framework'
  spec.requires_arc = true
  spec.swift_version = "4.0"
  spec.exclude_files = "accuraocrSDK/*/.{png}"
  spec.resource = 'GoogleService-Info.plist'
  spec.dependency 'OpenCV', '3.4.2'
  spec.dependency 'Firebase'
  spec.dependency 'Firebase/MLVision'
  spec.dependency 'Firebase/MLVisionTextModel'
  spec.dependency 'Firebase/MLVisionFaceModel'
  spec.dependency 'Firebase/MLVisionBarcodeModel'

end
