//
//  HJXsmokeEvent.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXsmokeEvent : NSObject

@property (nonatomic, copy) void(^eyenBlock)(void);
@property (nonatomic, strong) NSArray *halfx;


- (void)conclusion;

- (void)respectRace:(NSArray *_Nullable)race andTemperature:(NSInteger)temperature;

- (void)layerTune:(NSInteger)tune andArgument:(NSInteger)argument andCredit:(NSArray *_Nullable)credit;

- (void)factorHabit:(NSInteger)habit andEar:(NSDictionary *_Nullable)ear;
@end
NS_ASSUME_NONNULL_END