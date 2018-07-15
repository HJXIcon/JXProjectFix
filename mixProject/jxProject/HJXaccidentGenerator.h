//
//  HJXaccidentGenerator.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXaccidentGenerator : NSObject

@property (nonatomic, copy) NSString *savingsk;


- (void)rewardAnxiety:(NSInteger)anxiety andMixture:(NSInteger)mixture;

- (void)painWing:(NSDictionary *_Nullable)wing andAssist:(NSInteger)assist;

- (void)put;

- (void)bit;
@end
NS_ASSUME_NONNULL_END