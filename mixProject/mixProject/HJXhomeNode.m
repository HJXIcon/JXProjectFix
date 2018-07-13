//
//  HJXhomeNode.m
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import "HJXhomeNode.h"



@implementation HJXhomeNode

- (void)expert
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)expert;";
        [str stringByAppendingString:@"time is 3"];
       }
}


- (void)tour
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)tour;";
        [str stringByAppendingString:@"time is 3"];
       }
}


- (void)bother
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)bother;";
        [str stringByAppendingString:@"time is 3"];
       }
}

@end