//
//  HJXrestUtil.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXrestUtil : NSObject

@property (nonatomic, copy) void(^policemBlock)(void);




- (void)biteDiscussion:(NSDictionary *_Nullable)discussion andSimple:(NSDictionary *_Nullable)simple;

- (void)maybeTemporary:(NSArray *_Nullable)temporary andWife:(NSInteger)wife andIsland:(NSInteger)island;
@end
NS_ASSUME_NONNULL_END