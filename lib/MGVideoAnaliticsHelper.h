//
//  MGVideoAnaliticsHelper.h
//  MiGuSdk
//
//  Created by akazam on 16/10/18.
//  Copyright © 2016年 akazam. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MGBaseApplicationDelegate.h"
@interface MGVideoAnaliticsHelper : NSObject

- (void)logVideoDownloaded:(NSMutableDictionary *)eventParams;
- (void)logVideoFirstFrameShowed:(NSMutableDictionary *)eventParams;
- (void)logNetworkSwitched:(NSMutableDictionary *)eventParams;
- (void)logVideoError:(NSMutableDictionary *)eventParams;
- (void)logVideoStuck:(NSMutableDictionary *)eventParams;

@end
