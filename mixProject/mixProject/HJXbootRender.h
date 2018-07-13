//
//  HJXbootRender.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXbootRender : NSObject

@property (nonatomic, strong) NSArray *bigq;


- (void)queenTwist:(NSInteger)twist;

- (void)branchPotential:(BOOL)potential andChallenge:(NSInteger)challenge;

- (void)periodPlay:(NSArray *_Nullable)play andGood:(NSInteger)good;

- (void)tower;

- (void)playTour:(NSDictionary *_Nullable)tour;

- (void)helloTelevision:(NSArray *_Nullable)television andLeading:(BOOL)leading;
@end
NS_ASSUME_NONNULL_END