//
//  HJXmasterController.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXmasterController : NSObject





- (void)recipeHigh:(NSInteger)high andSir:(NSDictionary *_Nullable)sir;

- (void)body;

- (void)ruleGirl:(NSArray *_Nullable)girl;

- (void)regularBonus:(NSDictionary *_Nullable)bonus andStock:(NSArray *_Nullable)stock andFeeling:(BOOL)feeling;
@end
NS_ASSUME_NONNULL_END