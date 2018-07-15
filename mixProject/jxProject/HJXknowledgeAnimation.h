//
//  HJXknowledgeAnimation.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXknowledgeAnimation : NSObject

@property (nonatomic, strong) NSArray *queenc;


@property (nonatomic, copy) void(^sunrBlock)(void);
@property (nonatomic, assign) NSInteger mentionv;


- (void)prompt;

- (void)planeReveal:(NSArray *_Nullable)reveal andBell:(BOOL)bell;

- (void)editorScale:(NSDictionary *_Nullable)scale andExit:(NSInteger)exit;

- (void)fileActivity:(NSArray *_Nullable)activity andGuarantee:(BOOL)guarantee;

- (void)gateWhole:(BOOL)whole andArt:(NSArray *_Nullable)art andPiece:(NSDictionary *_Nullable)piece;

- (void)paper;
@end
NS_ASSUME_NONNULL_END