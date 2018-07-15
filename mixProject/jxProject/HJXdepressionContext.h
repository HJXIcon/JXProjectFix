//
//  HJXdepressionContext.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXdepressionContext : NSObject

@property (nonatomic, copy) NSString *friendk;


- (void)sportMaterial:(NSArray *_Nullable)material andCourage:(BOOL)courage andProof:(NSDictionary *_Nullable)proof;

- (void)rateCollection:(NSArray *_Nullable)collection andPick:(NSDictionary *_Nullable)pick andDevelopment:(BOOL)development;

- (void)tie;

- (void)yellowChampion:(BOOL)champion;

- (void)lakeRelationship:(NSDictionary *_Nullable)relationship andIntroduction:(NSInteger)introduction andStory:(NSArray *_Nullable)story;
@end
NS_ASSUME_NONNULL_END