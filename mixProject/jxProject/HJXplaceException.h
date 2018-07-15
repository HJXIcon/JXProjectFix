//
//  HJXplaceException.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXplaceException : NSObject




- (void)potatoPlayer:(BOOL)player;

- (void)suggestionSite:(BOOL)site andPlate:(NSInteger)plate;

- (void)emotionBeginning:(BOOL)beginning andFat:(NSDictionary *_Nullable)fat andGuess:(NSDictionary *_Nullable)guess;

- (void)siteJudgment:(NSArray *_Nullable)judgment andSubstance:(NSInteger)substance andCurve:(NSInteger)curve;

- (void)photo;
@end
NS_ASSUME_NONNULL_END