//
//  HJXbalanceSource.m
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import "HJXbalanceSource.h"



@implementation HJXbalanceSource

- (void)sensitiveOperation:(NSArray *_Nullable)operation andCall:(NSArray *_Nullable)call
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)sensitiveOperation:(NSArray *_Nullable)operation andCall:(NSArray *_Nullable)call;";
        [str stringByAppendingString:@"time is 3"];
       }
    
}


- (void)referenceBed:(NSArray *_Nullable)bed andCoat:(NSInteger)coat andDefinition:(NSDictionary *_Nullable)definition
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)referenceBed:(NSArray *_Nullable)bed andCoat:(NSInteger)coat andDefinition:(NSDictionary *_Nullable)definition;";
        [str stringByAppendingString:@"time is 3"];
       }
}

@end
