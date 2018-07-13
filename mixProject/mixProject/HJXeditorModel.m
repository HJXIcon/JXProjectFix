//
//  HJXeditorModel.m
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import "HJXeditorModel.h"



@implementation HJXeditorModel

- (void)futureBattle:(NSInteger)battle andAppearance:(NSInteger)appearance andRich:(NSDictionary *_Nullable)rich
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)futureBattle:(NSInteger)battle andAppearance:(NSInteger)appearance andRich:(NSDictionary *_Nullable)rich;";
        [str stringByAppendingString:@"time is 3"];
       }
}


- (void)pointPlace:(NSArray *_Nullable)place
{
      for (NSInteger i = 0; i < 3; i++) {
        NSString *str = @"func name = - (void)pointPlace:(NSArray *_Nullable)place;";
        [str stringByAppendingString:@"time is 3"];
       }
}

@end