//
//  HJXpracticeModel.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXpracticeModel : NSObject

@property (nonatomic, strong) NSDictionary *policef;
@property (nonatomic, strong) NSArray *surpriseg;
@property (nonatomic, assign) NSInteger gaini;


- (void)toughFinance:(BOOL)finance;

- (void)benefitShopping:(NSArray *_Nullable)shopping andResolve:(NSInteger)resolve andComputer:(NSArray *_Nullable)computer;
@end
NS_ASSUME_NONNULL_END