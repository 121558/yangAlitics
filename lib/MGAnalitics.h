//
//  MGAnalitics.h
//  MiGuSdk
//
//  Created by akazam on 16/10/18.
//  Copyright © 2016年 akazam. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MGAnalitics : NSObject

+ (void)logEvent:(NSString *)eventName  clientId:(NSMutableDictionary *)eventParams;
+ (void)logCustomEvent:(NSString *)eventName paragramEvent:(NSMutableDictionary *)eventParams intEvent:(int )du;
+ (BOOL)logEnable;
+ (void)setLogEnable:(BOOL)flag;
@end
