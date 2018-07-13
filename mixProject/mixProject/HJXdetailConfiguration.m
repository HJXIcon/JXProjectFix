//
//  HJXdetailConfiguration.m
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import "HJXdetailConfiguration.h"



@implementation HJXdetailConfiguration

- (void)video
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)video;";
        [str stringByAppendingString:@"time is 3"];
       }
}


- (void)filmEnd:(NSArray *_Nullable)end andMachine:(BOOL)machine
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)filmEnd:(NSArray *_Nullable)end andMachine:(BOOL)machine;";
        [str stringByAppendingString:@"time is 3"];
       }
}


- (void)dearEconomy:(BOOL)economy andBrown:(NSDictionary *_Nullable)brown andScrew:(NSInteger)screw
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)dearEconomy:(BOOL)economy andBrown:(NSDictionary *_Nullable)brown andScrew:(NSInteger)screw;";
        [str stringByAppendingString:@"time is 3"];
       }
}

@end