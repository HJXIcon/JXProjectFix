//
//  HJXdiscussionRender.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXdiscussionRender : NSObject

@property (nonatomic, copy) NSString *meaningb;


- (void)safetyAssist:(NSArray *_Nullable)assist;

- (void)revealLady:(NSInteger)lady andWarning:(NSArray *_Nullable)warning;

- (void)highway;
@end
NS_ASSUME_NONNULL_END