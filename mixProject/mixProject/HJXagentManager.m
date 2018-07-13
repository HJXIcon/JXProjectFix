//
//  HJXagentManager.m
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import "HJXagentManager.h"



@implementation HJXagentManager

- (void)dietMaterial:(NSInteger)material andRain:(NSArray *_Nullable)rain andSection:(NSInteger)section
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)dietMaterial:(NSInteger)material andRain:(NSArray *_Nullable)rain andSection:(NSInteger)section;";
        [str stringByAppendingString:@"time is 3"];
       }
}


- (void)upper
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)upper;";
        [str stringByAppendingString:@"time is 3"];
       }
}


- (void)range
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)range;";
        [str stringByAppendingString:@"time is 3"];
       }
}


- (void)horseRow:(NSDictionary *_Nullable)row
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)horseRow:(NSDictionary *_Nullable)row;";
        [str stringByAppendingString:@"time is 3"];
       }
}

@end