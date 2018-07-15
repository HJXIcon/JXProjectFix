//
//  HJXqueenVC.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXqueenVC : NSObject



@property (nonatomic, copy) NSString *piee;
@property (nonatomic, strong) NSArray *speeda;


- (void)position;

- (void)audienceRequest:(NSDictionary *_Nullable)request;

- (void)lossAnxiety:(NSDictionary *_Nullable)anxiety andInteraction:(NSDictionary *_Nullable)interaction andZone:(BOOL)zone;

- (void)commissionJudge:(BOOL)judge andMark:(NSInteger)mark;

- (void)slipActivity:(NSArray *_Nullable)activity;
@end
NS_ASSUME_NONNULL_END