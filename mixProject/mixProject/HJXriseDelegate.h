//
//  HJXriseDelegate.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXriseDelegate : NSObject

@property (nonatomic, assign) NSInteger diamondw;
@property (nonatomic, assign) BOOL novelp;
@property (nonatomic, strong) NSDictionary *equivalenth;


- (void)clueCorner:(BOOL)corner andInteraction:(NSInteger)interaction;

- (void)wall;

- (void)recommendationHome:(NSArray *_Nullable)home;

- (void)directorGod:(BOOL)god andCurrency:(NSArray *_Nullable)currency andDepression:(NSInteger)depression;
@end
NS_ASSUME_NONNULL_END