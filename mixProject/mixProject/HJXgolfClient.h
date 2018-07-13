//
//  HJXgolfClient.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXgolfClient : NSObject




- (void)mostNotice:(NSDictionary *_Nullable)notice andNerve:(NSArray *_Nullable)nerve;

- (void)post;

- (void)substancePromotion:(NSDictionary *_Nullable)promotion;

- (void)eastProgram:(NSInteger)program;
@end
NS_ASSUME_NONNULL_END