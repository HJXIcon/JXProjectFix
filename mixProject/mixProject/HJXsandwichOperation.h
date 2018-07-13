//
//  HJXsandwichOperation.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXsandwichOperation : NSObject

@property (nonatomic, copy) void(^matchkBlock)(void);


- (void)awardTheory:(NSDictionary *_Nullable)theory;

- (void)commentBook:(NSDictionary *_Nullable)book andGlad:(NSArray *_Nullable)glad;

- (void)interactionGift:(NSInteger)gift;
@end
NS_ASSUME_NONNULL_END