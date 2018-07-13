//
//  HJXcodeEvent.m
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import "HJXcodeEvent.h"



@implementation HJXcodeEvent

- (void)loanStudy:(NSArray *_Nullable)study
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)loanStudy:(NSArray *_Nullable)study;";
        [str stringByAppendingString:@"time is 3"];
       }
}


- (void)damageDiet:(BOOL)diet andInsect:(BOOL)insect andVegetable:(BOOL)vegetable
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)damageDiet:(BOOL)diet andInsect:(BOOL)insect andVegetable:(BOOL)vegetable;";
        [str stringByAppendingString:@"time is 3"];
       }
}


- (void)truckWing:(BOOL)wing andFishing:(BOOL)fishing andComfort:(NSInteger)comfort
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)truckWing:(BOOL)wing andFishing:(BOOL)fishing andComfort:(NSInteger)comfort;";
        [str stringByAppendingString:@"time is 3"];
       }
}


- (void)signature
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)signature;";
        [str stringByAppendingString:@"time is 3"];
       }
}

@end