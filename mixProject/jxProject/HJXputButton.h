//
//  HJXputButton.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXputButton : NSObject

@property (nonatomic, assign) NSInteger sandwichr;
@property (nonatomic, strong) NSArray *feelingc;
@property (nonatomic, strong) NSArray *airw;
@property (nonatomic, copy) void(^equipmentoBlock)(void);


- (void)soft;

- (void)paintOutcome:(BOOL)outcome andSurvey:(NSInteger)survey;

- (void)potatoBrave:(NSArray *_Nullable)brave;

- (void)personCookie:(BOOL)cookie andChampionship:(NSArray *_Nullable)championship;

- (void)review;

- (void)gasMessage:(NSDictionary *_Nullable)message andBrother:(BOOL)brother andChance:(BOOL)chance;
@end
NS_ASSUME_NONNULL_END