//
//  HJXdecisionTextField.m
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import "HJXdecisionTextField.h"



@implementation HJXdecisionTextField

- (void)topicReserve:(BOOL)reserve andPresent:(NSInteger)present
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)topicReserve:(BOOL)reserve andPresent:(NSInteger)present;";
        [str stringByAppendingString:@"time is 3"];
       }
}


- (void)benchConsequence:(BOOL)consequence
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)benchConsequence:(BOOL)consequence;";
        [str stringByAppendingString:@"time is 3"];
       }
}

@end