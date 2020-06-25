Pod::Spec.new do |spec|

  spec.name         = "accuraocrSDK"
  spec.version      = "1.0.0"
  spec.summary      = "A small framework to monitor face detection in Swift."
  spec.description  = "FaceMatchSDK is a small and lightweight Swift framework that allows to monitor and being notified for face detection in a super-easy way!"
  spec.homepage     = "https://accurascan.com"
  spec.license      = "MIT"
  spec.author       = { "technozer" => "technozer02@gmail.com" }
  spec.platform     = :ios, "9.0"
  spec.static_framework = true
  spec.source       = { :git => "https://github.com/technozer01/AccuraOCR.git"}
  spec.preserve_paths = 'AccuraOCR.framework'
  spec.vendored_frameworks = 'AccuraOCR.framework'
  spec.requires_arc = true
  spec.swift_version = "4.0"
  spec.exclude_files = "accuraocrSDK/*/.{plist,png}"
  spec.dependency 'OpenCV', '3.4.2'
  spec.dependency 'Firebase'
  spec.dependency 'Firebase/MLVision'
  spec.dependency 'Firebase/MLVisionTextModel'
  spec.dependency 'Firebase/MLVisionFaceModel'
  spec.dependency 'Firebase/MLVisionBarcodeModel'

end
