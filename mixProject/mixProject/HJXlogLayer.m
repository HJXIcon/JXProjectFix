//
//  HJXlogLayer.m
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import "HJXlogLayer.h"



@implementation HJXlogLayer

- (void)documentBrain:(NSDictionary *_Nullable)brain
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)documentBrain:(NSDictionary *_Nullable)brain;";
        [str stringByAppendingString:@"time is 3"];
       }
}

@end