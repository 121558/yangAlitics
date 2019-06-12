//
//  AkazamStatistics.h
//  AkazamStatistics
//
//  Created by ningfeng on 15/12/3.
//  Copyright © 2015年 ningfeng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface AkazamStatistics : UIResponder

+(void)startWithAppkey:(NSString*)appkey clientID:(NSString* )client sessionID:(NSString*)session appChannel:(NSString*)channel timeInterval:(int)ti;
+(void)event:(NSString*)eventName;
+(void)event:(NSString*)eventName andClick:(NSString*)clickId;
+(void)custom:(NSMutableDictionary*)cusDic;
+ (void)pageSessionStart:(NSString*)pageName;
+ (void)pageSessionEnd:(NSString*)pageName;
+(void)viewDidAppear:(UIViewController*)viewController;
+(void)viewDidDisappear:(UIViewController*)viewController;
+(void)applicationDidBecomeActive;
+(void)applicationWillResignActive;
+ (void)applicationWillTerminate;
@end
