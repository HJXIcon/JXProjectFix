//
//  HJXdependentHandler.m
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import "HJXdependentHandler.h"



@implementation HJXdependentHandler

- (void)unit
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)unit;";
        [str stringByAppendingString:@"time is 3"];
       }
}


- (void)security
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)security;";
        [str stringByAppendingString:@"time is 3"];
       }
}


- (void)associateDesk:(NSInteger)desk andRecommendation:(NSArray *_Nullable)recommendation
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)associateDesk:(NSInteger)desk andRecommendation:(NSArray *_Nullable)recommendation;";
        [str stringByAppendingString:@"time is 3"];
       }
}


- (void)royalInvestment:(BOOL)investment andScale:(NSDictionary *_Nullable)scale
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)royalInvestment:(BOOL)investment andScale:(NSDictionary *_Nullable)scale;";
        [str stringByAppendingString:@"time is 3"];
       }
}

@end