//
//  HJXcomplaintManager.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXcomplaintManager : NSObject

@property (nonatomic, copy) void(^examrBlock)(void);
@property (nonatomic, strong) NSArray *beginningp;
@property (nonatomic, copy) NSString *difficultyt;
@property (nonatomic, copy) void(^planwBlock)(void);
@property (nonatomic, assign) NSInteger burnk;


- (void)collection;

- (void)breadLaugh:(NSDictionary *_Nullable)laugh;

- (void)factNote:(NSArray *_Nullable)note;

- (void)worthMall:(NSInteger)mall;

- (void)volume;

- (void)currencyPension:(NSInteger)pension andPlace:(NSInteger)place andStorm:(NSArray *_Nullable)storm;
@end
NS_ASSUME_NONNULL_END