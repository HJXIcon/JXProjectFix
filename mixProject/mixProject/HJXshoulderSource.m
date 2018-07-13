//
//  HJXshoulderSource.m
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import "HJXshoulderSource.h"



@implementation HJXshoulderSource

- (void)motor
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)motor;";
        [str stringByAppendingString:@"time is 3"];
       }
}


- (void)struggle
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)struggle;";
        [str stringByAppendingString:@"time is 3"];
       }
}


- (void)gradePause:(BOOL)pause andContract:(NSArray *_Nullable)contract
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)gradePause:(BOOL)pause andContract:(NSArray *_Nullable)contract;";
        [str stringByAppendingString:@"time is 3"];
       }
}


- (void)decisionNegative:(NSArray *_Nullable)negative andMiss:(NSArray *_Nullable)miss andBorder:(BOOL)border
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)decisionNegative:(NSArray *_Nullable)negative andMiss:(NSArray *_Nullable)miss andBorder:(BOOL)border;";
        [str stringByAppendingString:@"time is 3"];
       }
}

@end