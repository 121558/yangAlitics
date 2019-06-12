//
//  BaseApplication.h
//  MiGuSdk
//
//  Created by akazam on 16/9/29.
//  Copyright © 2016年 akazam. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MGBaseApplicationDelegate : UIResponder
{
    NSDictionary *_appDic;
}

+ (instancetype)sharedInstance;
+ (NSString *)channelId;
+ (NSString *)clientId;
+ (NSString *)apiKey;
+ (NSString *)udid;
@end
