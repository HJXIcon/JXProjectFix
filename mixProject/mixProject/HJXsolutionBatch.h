//
//  HJXsolutionBatch.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXsolutionBatch : NSObject

@property (nonatomic, assign) BOOL permith;


- (void)targetTime:(NSArray *_Nullable)time;

- (void)balanceEgg:(BOOL)egg;

- (void)riseEat:(NSInteger)eat andGuard:(NSDictionary *_Nullable)guard andSavings:(NSArray *_Nullable)savings;

- (void)deadShock:(NSInteger)shock andTarget:(NSArray *_Nullable)target;

- (void)dogBit:(NSArray *_Nullable)bit andExample:(BOOL)example;

- (void)maleWatch:(NSArray *_Nullable)watch andFinance:(BOOL)finance andOperation:(NSInteger)operation;
@end
NS_ASSUME_NONNULL_END