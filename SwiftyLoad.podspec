Pod::Spec.new do |spec|
  spec.name = 'SwiftyLoad'
  spec.version = '0.1.0'
  spec.license = { :type => 'MIT License',:file => 'LICENSE' }
  spec.homepage = 'https://github.com/PB-Tech/SwiftyLoad'
  spec.summary = 'An open-source make swift aviable load and initialize method'
  spec.authors = {'PB-Tech' => 'pbyte.technology@gmail.com'}
  spec.source = { :git => 'https://github.com/PB-Tech/SwiftyLoad.git',
                  :tag => "#{spec.version}" }
  spec.source_files = 'SwiftyLoad/*/*.{h,m}'
  spec.public_header_files = 'SwiftyLoad/*/*.{h}'

  spec.frameworks = 'Foundation'

  spec.platforms = { :ios => "9.0" }
end
