//
//  HJXdanceSerializer.m
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import "HJXdanceSerializer.h"



@implementation HJXdanceSerializer

- (void)friendDraw:(NSArray *_Nullable)draw
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)friendDraw:(NSArray *_Nullable)draw;";
        [str stringByAppendingString:@"time is 3"];
       }
}


- (void)timeGain:(BOOL)gain andResist:(NSDictionary *_Nullable)resist
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)timeGain:(BOOL)gain andResist:(NSDictionary *_Nullable)resist;";
        [str stringByAppendingString:@"time is 3"];
       }
}

@end