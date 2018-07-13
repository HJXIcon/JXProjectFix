//
//  HJXpensionNotification.m
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import "HJXpensionNotification.h"



@implementation HJXpensionNotification

- (void)pushArrival:(NSInteger)arrival andToe:(BOOL)toe
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)pushArrival:(NSInteger)arrival andToe:(BOOL)toe;";
        [str stringByAppendingString:@"time is 3"];
       }
}


- (void)lawyerSchedule:(NSArray *_Nullable)schedule andMath:(BOOL)math andSink:(BOOL)sink
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)lawyerSchedule:(NSArray *_Nullable)schedule andMath:(BOOL)math andSink:(BOOL)sink;";
        [str stringByAppendingString:@"time is 3"];
       }
}


- (void)rentDrink:(NSDictionary *_Nullable)drink
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)rentDrink:(NSDictionary *_Nullable)drink;";
        [str stringByAppendingString:@"time is 3"];
       }
}

@end