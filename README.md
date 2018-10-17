## SwiftyLoad

This is a source to make swift environment enable load and initialize method.

It's simple and easy to use.



## Usage

#### step 1 new a xxx.m file in your project

You can new a .m file anywhere of your project ,and reference in your project. 

#### step 2 write micros make your class enable load() and initialize() function

wtire the code Like this in the xxx.m file

```swift
#import <Foundation/Foundation.h>
#import <Swifty_Demo-Swift.h>

SWIFTY_LOAD_INITIALIZE(UIButton)//make UIKit class UIButton enable load() and initialize()
SWIFTY_LOAD_INITIALIZE(TestObject)//make custom class TestObject enable load() and initialize()
```

#### step 3 implementation of load() and initialize() method callback 

```swift
import SwiftyLoad//import the SwiftyLoad framework

//custom class must be define with @objc make the class can be hook in objective-c
@objc class TestObject: NSObject {
    
}

//comform the NSSwiftyLoadProtocol in the extension
extension TestObject : NSSwiftyLoadProtocol {
    public static func swiftyLoad() {
        print("TestObject--->swiftyLoad")
    }
}

//the system based class can be implementation NSSwiftyLoadProtocol directly
extension UIButton : NSSwiftyLoadProtocol {
    
    public static func swiftyInitialize() {
        print("UIButton--->swiftyInitialize")
    }
    
    public static func swiftyLoad() {
        print("UIButton--->swiftyLoad")
    }
    
}
```



Notes: If you feel confuse, you can read the sample code.