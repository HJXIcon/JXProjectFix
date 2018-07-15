//
//  HJXpresentationSession.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXpresentationSession : NSObject

@property (nonatomic, copy) void(^findingmBlock)(void);
@property (nonatomic, strong) NSArray *charityq;


@property (nonatomic, assign) BOOL mousep;
@property (nonatomic, strong) NSDictionary *potatom;


- (void)review;

- (void)decisionCity:(NSDictionary *_Nullable)city andPresence:(NSArray *_Nullable)presence;
@end
NS_ASSUME_NONNULL_END