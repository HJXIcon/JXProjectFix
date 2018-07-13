//
//  HJXprofileTracker.m
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import "HJXprofileTracker.h"



@implementation HJXprofileTracker

- (void)minuteKid:(NSInteger)kid
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)minuteKid:(NSInteger)kid;";
        [str stringByAppendingString:@"time is 3"];
       }
}

@end