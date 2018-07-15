//
//  HJXhallObserver.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXhallObserver : NSObject

@property (nonatomic, copy) NSString *wavex;
@property (nonatomic, copy) NSString *treei;


- (void)research;

- (void)leaderRough:(NSInteger)rough andWoman:(BOOL)woman andFigure:(NSArray *_Nullable)figure;

- (void)commissionDriver:(BOOL)driver andFall:(NSArray *_Nullable)fall andCompany:(BOOL)company;

- (void)houseMaterial:(NSArray *_Nullable)material andDiscount:(NSArray *_Nullable)discount andDepression:(NSDictionary *_Nullable)depression;

- (void)disasterBuilding:(NSDictionary *_Nullable)building andSpare:(BOOL)spare;

- (void)checkOfficial:(NSDictionary *_Nullable)official;
@end
NS_ASSUME_NONNULL_END