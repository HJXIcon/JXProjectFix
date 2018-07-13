//
//  HJXprocedureView.m
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import "HJXprocedureView.h"



@implementation HJXprocedureView

- (void)metalCount:(NSArray *_Nullable)count
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)metalCount:(NSArray *_Nullable)count;";
        [str stringByAppendingString:@"time is 3"];
       }
}

@end