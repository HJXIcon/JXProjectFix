//
//  HJXsinkException.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXsinkException : NSObject




- (void)drop;

- (void)flyKeep:(NSArray *_Nullable)keep andStock:(NSDictionary *_Nullable)stock;

- (void)bellFarm:(NSArray *_Nullable)farm andTrain:(NSDictionary *_Nullable)train;

- (void)rideGolf:(BOOL)golf andCreative:(NSInteger)creative;
@end
NS_ASSUME_NONNULL_END