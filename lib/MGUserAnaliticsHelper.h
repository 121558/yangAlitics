//
//  MGUserAnaliticsHelper.h
//  MiGuSdk
//
//  Created by akazam on 16/10/18.
//  Copyright © 2016年 akazam. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MGBaseApplicationDelegate.h"
@interface MGUserAnaliticsHelper : NSObject
- (void)logUserRegisted:(NSMutableDictionary *)userInfoParams;
- (void)logUserLogin:(NSMutableDictionary *)userInfoParams;
- (void)logUserLogout;

/*
 * 用户登入的接口
 *
 * @param userInfoParams 用户信息的Map<String,String>其中key如下字段<br>
 *                       <table border= "1px" cellspacing = "0" >
 *                       <tr>
 *                       <th width="150px" height="30px">key</th>
 *                       <th width="150px" height="30px">描述</th>
 *                       <th width="150px" height="30px">长度</th>
 *                       <th width="150px" height="30px">是否可空</th>
 *                       </tr>
 *                       <tr>
 *                       <th width="150px" height="30px">userId</th>
 *                       <th width="150px" height="30px">用户Id</th>
 *                       <th width="150px" height="30px">32以内</th>
 *                       <th width="150px" height="30px">否</th>
 *                       </tr>
 *                       <tr>
 *                       <th width="150px" height="30px">accountName</th>
 *                       <th width="150px" height="30px">账户名称</th>
 *                       <th width="150px" height="30px">32以内</th>
 *                       <th width="150px" height="30px">否</th>
 *                       </tr>
 *                       <tr>
 *                       <th width="150px" height="30px">accountType</th>
 *                       <th width="150px" height="30px">账户类型</th>
 *                       <th width="150px" height="30px">32以内</th>
 *                       <th width="150px" height="30px">否</th>
 *                       </tr>
 *                       <tr>
 *                       <th width="150px" height="30px">loginType</th>
 *                       <th width="150px" height="30px">登录类型</th>
 *                       <th width="150px" height="30px">32以内</th>
 *                       <th width="150px" height="30px">否</th>
 *                       </tr>
 *                       </table>
 */

@end
