//
//  HJXwinterAdapter.m
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import "HJXwinterAdapter.h"



@implementation HJXwinterAdapter

- (void)bigPurpose:(NSArray *_Nullable)purpose andLock:(NSArray *_Nullable)lock andWait:(NSArray *_Nullable)wait
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)bigPurpose:(NSArray *_Nullable)purpose andLock:(NSArray *_Nullable)lock andWait:(NSArray *_Nullable)wait;";
        [str stringByAppendingString:@"time is 3"];
       }
}


- (void)counterPolicy:(NSDictionary *_Nullable)policy
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)counterPolicy:(NSDictionary *_Nullable)policy;";
        [str stringByAppendingString:@"time is 3"];
       }
}

@end