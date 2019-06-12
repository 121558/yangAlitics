//
//  MGRuntimeInfoHelper.h
//  MiGuSdk
//
//  Created by akazam on 16/10/18.
//  Copyright © 2016年 akazam. All rights reserved.
//

#import "MGBaseApplicationDelegate.h"

@interface MGRuntimeInfoHelper : NSObject

- (void)setClientId:(NSString *)cliendId;
- (NSDictionary *)userInfo;
- (NSDictionary *)deviceInfo;
- (NSDictionary *)networkInfo;
//手机唯一
- (NSString *)installationId;
//每一次启动的id
- (NSString *)currentLaunchId;
//退出后台(根据时间变化)
- (NSString *)currentUserSessionId;

- (NSString *)runtimeDuration;
//回去流量值
- (long )trafficUse;

@end
