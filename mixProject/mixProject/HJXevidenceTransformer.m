//
//  HJXevidenceTransformer.m
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import "HJXevidenceTransformer.h"



@implementation HJXevidenceTransformer

- (void)clientBike:(NSInteger)bike andPeriod:(NSArray *_Nullable)period andMale:(BOOL)male
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)clientBike:(NSInteger)bike andPeriod:(NSArray *_Nullable)period andMale:(BOOL)male;";
        [str stringByAppendingString:@"time is 3"];
       }
}

@end