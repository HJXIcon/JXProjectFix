//
//  HJXplayLogger.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXplayLogger : NSObject

@property (nonatomic, assign) NSInteger persono;


- (void)nothingPractice:(NSDictionary *_Nullable)practice;

- (void)sparePrice:(BOOL)price;

- (void)elevatorImage:(NSInteger)image;

- (void)dramaRestaurant:(NSDictionary *_Nullable)restaurant;
@end
NS_ASSUME_NONNULL_END