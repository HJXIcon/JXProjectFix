//
//  HJXdesireListener.m
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import "HJXdesireListener.h"



@implementation HJXdesireListener

- (void)braveKing:(BOOL)king andInstruction:(NSArray *_Nullable)instruction andSavings:(NSDictionary *_Nullable)savings
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)braveKing:(BOOL)king andInstruction:(NSArray *_Nullable)instruction andSavings:(NSDictionary *_Nullable)savings;";
        [str stringByAppendingString:@"time is 3"];
       }
}


- (void)blindTackle:(BOOL)tackle andBoard:(BOOL)board
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)blindTackle:(BOOL)tackle andBoard:(BOOL)board;";
        [str stringByAppendingString:@"time is 3"];
       }
}

@end