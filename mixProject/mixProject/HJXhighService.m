//
//  HJXhighService.m
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import "HJXhighService.h"



@implementation HJXhighService

- (void)smokeAttempt:(NSArray *_Nullable)attempt
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)smokeAttempt:(NSArray *_Nullable)attempt;";
        [str stringByAppendingString:@"time is 3"];
       }
}

@end