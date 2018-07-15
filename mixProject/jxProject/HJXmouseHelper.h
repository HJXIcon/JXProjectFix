//
//  HJXmouseHelper.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXmouseHelper : NSObject

@property (nonatomic, copy) void(^raceiBlock)(void);
@property (nonatomic, assign) BOOL researchu;
@property (nonatomic, copy) NSString *workc;


- (void)health;

- (void)kingFuneral:(NSArray *_Nullable)funeral andLeader:(NSInteger)leader andSecret:(NSArray *_Nullable)secret;

- (void)rip;

- (void)affairActive:(BOOL)active andSplit:(NSDictionary *_Nullable)split;
@end
NS_ASSUME_NONNULL_END