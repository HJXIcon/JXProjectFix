//
//  HJXadviceCallback.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXadviceCallback : NSObject



@property (nonatomic, copy) NSString *historiank;
@property (nonatomic, assign) NSInteger difficultyd;


- (void)experienceProduce:(NSInteger)produce;

- (void)horror;

- (void)bodyCandle:(NSInteger)candle andDraw:(NSArray *_Nullable)draw;

- (void)selectionAspect:(NSDictionary *_Nullable)aspect;

- (void)possession;
@end
NS_ASSUME_NONNULL_END