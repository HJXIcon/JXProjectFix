//
//  HJXriseDelegate.m
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import "HJXriseDelegate.h"



@implementation HJXriseDelegate

- (void)clueCorner:(BOOL)corner andInteraction:(NSInteger)interaction
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)clueCorner:(BOOL)corner andInteraction:(NSInteger)interaction;";
        [str stringByAppendingString:@"time is 3"];
       }
}


- (void)wall
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)wall;";
        [str stringByAppendingString:@"time is 3"];
       }
}


- (void)recommendationHome:(NSArray *_Nullable)home
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)recommendationHome:(NSArray *_Nullable)home;";
        [str stringByAppendingString:@"time is 3"];
       }
}


- (void)directorGod:(BOOL)god andCurrency:(NSArray *_Nullable)currency andDepression:(NSInteger)depression
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)directorGod:(BOOL)god andCurrency:(NSArray *_Nullable)currency andDepression:(NSInteger)depression;";
        [str stringByAppendingString:@"time is 3"];
       }
}

@end