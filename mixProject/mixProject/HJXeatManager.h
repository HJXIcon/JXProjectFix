//
//  HJXeatManager.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXeatManager : NSObject

@property (nonatomic, assign) BOOL intentionx;


@property (nonatomic, copy) void(^visitrBlock)(void);


- (void)memoryStranger:(BOOL)stranger andFactor:(NSInteger)factor andSpend:(NSInteger)spend;
@end
NS_ASSUME_NONNULL_END