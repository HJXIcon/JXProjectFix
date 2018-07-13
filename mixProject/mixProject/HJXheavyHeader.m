//
//  HJXheavyHeader.m
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import "HJXheavyHeader.h"



@implementation HJXheavyHeader

- (void)zoneWest:(BOOL)west andLink:(NSArray *_Nullable)link andLocation:(NSInteger)location
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)zoneWest:(BOOL)west andLink:(NSArray *_Nullable)link andLocation:(NSInteger)location;";
        [str stringByAppendingString:@"time is 3"];
       }
}


- (void)respond
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)respond;";
        [str stringByAppendingString:@"time is 3"];
       }
}


- (void)grassRope:(NSArray *_Nullable)rope
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)grassRope:(NSArray *_Nullable)rope;";
        [str stringByAppendingString:@"time is 3"];
       }
}


- (void)funeral
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)funeral;";
        [str stringByAppendingString:@"time is 3"];
       }
}

@end