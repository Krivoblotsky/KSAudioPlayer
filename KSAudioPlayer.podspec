Pod::Spec.new do |s|
  s.name         = "KSAudioPlayer"
  s.version      = "0.0.1"
  s.summary      = "Drop-in iOS Audio Player built on top of BASS-library"
  s.homepage     = "https://github.com/Krivoblotsky/KSAudioPlayer"
  s.license      = { :type => 'MIT', :file => 'LICENSE.txt' }
  s.author       = { "Serg Krivoblotsky" => "krivoblotsky@me.com" }
  s.source       = { :git => "https://github.com/Alterplay/APAddressBook.git",
		                 :tag => s.version.to_s }
  s.source_files = 'KSAudioPlayer/**/*.{h,m}'
  s.ios.deployment_target = "6.0"
  s.requires_arc = true
  s.frameworks   = 'AVFoundation'
end