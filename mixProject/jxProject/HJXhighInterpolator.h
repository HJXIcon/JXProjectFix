//
//  HJXhighInterpolator.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXhighInterpolator : NSObject

@property (nonatomic, strong) NSArray *animall;
@property (nonatomic, strong) NSArray *audiencea;
@property (nonatomic, assign) BOOL commons;


- (void)startService:(BOOL)service andDress:(NSDictionary *_Nullable)dress;
@end
NS_ASSUME_NONNULL_END