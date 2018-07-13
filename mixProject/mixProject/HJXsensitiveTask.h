//
//  HJXsensitiveTask.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXsensitiveTask : NSObject

@property (nonatomic, copy) void(^nationgBlock)(void);


- (void)helloRice:(NSArray *_Nullable)rice andMom:(NSDictionary *_Nullable)mom;

- (void)meetComment:(BOOL)comment andNoise:(NSDictionary *_Nullable)noise;

- (void)independent;

- (void)botherGroup:(NSDictionary *_Nullable)group andAirport:(BOOL)airport andRevenue:(NSArray *_Nullable)revenue;
@end
NS_ASSUME_NONNULL_END