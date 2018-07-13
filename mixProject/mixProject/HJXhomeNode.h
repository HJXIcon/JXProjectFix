//
//  HJXhomeNode.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXhomeNode : NSObject

@property (nonatomic, copy) void(^resolveoBlock)(void);


- (void)expert;

- (void)tour;

- (void)bother;
@end
NS_ASSUME_NONNULL_END