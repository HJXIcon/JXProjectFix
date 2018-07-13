//
//  HJXdependentHandler.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXdependentHandler : NSObject

@property (nonatomic, assign) NSInteger understandings;


- (void)unit;

- (void)security;

- (void)associateDesk:(NSInteger)desk andRecommendation:(NSArray *_Nullable)recommendation;

- (void)royalInvestment:(BOOL)investment andScale:(NSDictionary *_Nullable)scale;
@end
NS_ASSUME_NONNULL_END