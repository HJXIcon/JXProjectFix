//
//  HJXattitudeProcessor.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXattitudeProcessor : NSObject

@property (nonatomic, copy) void(^officialuBlock)(void);
@property (nonatomic, strong) NSArray *rivern;


- (void)stableConcept:(BOOL)concept andRefrigerator:(NSInteger)refrigerator;

- (void)travelSafe:(BOOL)safe andEmergency:(BOOL)emergency andSpirit:(BOOL)spirit;
@end
NS_ASSUME_NONNULL_END