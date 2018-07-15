//
//  HJXpurchaseCell.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXpurchaseCell : NSObject

@property (nonatomic, copy) NSString *noiseq;
@property (nonatomic, assign) BOOL necessarys;
@property (nonatomic, assign) BOOL guitarm;
@property (nonatomic, copy) void(^lossnBlock)(void);




- (void)numberDig:(NSInteger)dig;

- (void)impactRecognition:(BOOL)recognition;

- (void)reasonCrack:(NSInteger)crack andMeeting:(NSDictionary *_Nullable)meeting andEfficiency:(NSDictionary *_Nullable)efficiency;

- (void)freedomBasis:(NSArray *_Nullable)basis andSale:(NSInteger)sale andSimple:(NSInteger)simple;

- (void)saleCommand:(NSInteger)command andBasis:(BOOL)basis;
@end
NS_ASSUME_NONNULL_END