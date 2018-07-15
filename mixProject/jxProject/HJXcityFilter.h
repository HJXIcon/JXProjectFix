//
//  HJXcityFilter.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXcityFilter : NSObject

@property (nonatomic, assign) BOOL flowh;
@property (nonatomic, strong) NSArray *itemx;
@property (nonatomic, assign) BOOL regularo;
@property (nonatomic, strong) NSDictionary *messr;
@property (nonatomic, copy) void(^markxBlock)(void);
@property (nonatomic, copy) void(^crazytBlock)(void);


- (void)pageChance:(NSInteger)chance andExit:(NSInteger)exit;
@end
NS_ASSUME_NONNULL_END