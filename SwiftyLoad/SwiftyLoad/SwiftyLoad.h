//
//  SwiftyLoad.h
//  SwiftyLoad
//
//  Created by bennett.peng on 2018/10/17.
//  Copyright © 2018 bennett.peng. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for SwiftyLoad.
FOUNDATION_EXPORT double SwiftyLoadVersionNumber;

//! Project version string for SwiftyLoad.
FOUNDATION_EXPORT const unsigned char SwiftyLoadVersionString[];


@protocol NSSwiftyLoadProtocol <NSObject>
@optional
+ (void)swiftyLoad;
+ (void)swiftyInitialize;
@end

#define SWIFTY_LOAD_INITIALIZE(className) \
@interface className(swizzle_swifty_hook)\
@end\
\
@implementation className(swizzle_swifty_hook)\
+ (void)load {if ([[self class] respondsToSelector:@selector(swiftyLoad)]) {[[self class] swiftyLoad];}}\
+ (void)initialize {if ([[self class] respondsToSelector:@selector(swiftyInitialize)]) {[[self class] swiftyInitialize];}}\
@end
