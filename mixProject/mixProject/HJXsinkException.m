//
//  HJXsinkException.m
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import "HJXsinkException.h"



@implementation HJXsinkException

- (void)drop
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)drop;";
        [str stringByAppendingString:@"time is 3"];
       }
}


- (void)flyKeep:(NSArray *_Nullable)keep andStock:(NSDictionary *_Nullable)stock
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)flyKeep:(NSArray *_Nullable)keep andStock:(NSDictionary *_Nullable)stock;";
        [str stringByAppendingString:@"time is 3"];
       }
}


- (void)bellFarm:(NSArray *_Nullable)farm andTrain:(NSDictionary *_Nullable)train
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)bellFarm:(NSArray *_Nullable)farm andTrain:(NSDictionary *_Nullable)train;";
        [str stringByAppendingString:@"time is 3"];
       }
}


- (void)rideGolf:(BOOL)golf andCreative:(NSInteger)creative
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)rideGolf:(BOOL)golf andCreative:(NSInteger)creative;";
        [str stringByAppendingString:@"time is 3"];
       }
}

@end