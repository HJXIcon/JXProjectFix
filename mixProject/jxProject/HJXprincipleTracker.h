//
//  HJXprincipleTracker.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXprincipleTracker : NSObject

@property (nonatomic, copy) void(^partnermBlock)(void);
@property (nonatomic, copy) void(^positivekBlock)(void);


- (void)spotCrack:(NSInteger)crack;

- (void)atmosphereBlind:(BOOL)blind andDetail:(NSDictionary *_Nullable)detail;

- (void)angerTown:(NSInteger)town;
@end
NS_ASSUME_NONNULL_END