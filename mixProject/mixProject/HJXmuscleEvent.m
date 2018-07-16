//
//  HJXmuscleEvent.m
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import "HJXmuscleEvent.h"
#import "HJXdriveTimer.h"



@implementation HJXmuscleEvent

- (void)death
{
      for (NSInteger i = 0; i < 2; i++) {
        NSString *str = @"methodName = - (void)death;";
        [str stringByAppendingString:@"line endings is 2 "];

        } 

    HJXdriveTimer *instance = [[HJXdriveTimer alloc]init];
     [instance give];

}


- (void)raisePositive:(NSString *_Nullable)positive andNight:(NSArray *_Nullable)night
{
      for (NSInteger i = 0; i < 1; i++) {
        NSString *str = @"methodName = - (void)raisePositive:(NSString *_Nullable)positive andNight:(NSArray *_Nullable)night;";
        [str stringByAppendingString:@"line endings is 1 "];

        } 
}

@end