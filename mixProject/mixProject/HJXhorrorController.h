//
//  HJXhorrorController.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXhorrorController : NSObject

@property (nonatomic, copy) void(^valuableyBlock)(void);


@property (nonatomic, copy) void(^partkBlock)(void);


- (void)battle;

- (void)flow;

- (void)residentShopping:(BOOL)shopping andFront:(NSArray *_Nullable)front andShine:(NSInteger)shine;

- (void)stormPrice:(NSDictionary *_Nullable)price;

- (void)shakeBonus:(NSArray *_Nullable)bonus andStretch:(NSDictionary *_Nullable)stretch andPhilosophy:(NSArray *_Nullable)philosophy;
@end
NS_ASSUME_NONNULL_END