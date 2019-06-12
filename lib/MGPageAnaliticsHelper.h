//
//  MGPageAnaliticsHelpe.h
//  MiGuSdk
//
//  Created by akazam on 16/10/18.
//  Copyright © 2016年 akazam. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MGBaseApplicationDelegate.h"
@interface MGPageAnaliticsHelper : NSObject

- (void)logVideoDetailPageLoaded:(NSMutableDictionary *)eventParams;
- (void)logPicLoaded:(NSMutableDictionary *)eventParams;

@end
