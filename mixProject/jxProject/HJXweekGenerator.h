//
//  HJXweekGenerator.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXweekGenerator : NSObject

@property (nonatomic, copy) void(^childhoodrBlock)(void);
@property (nonatomic, assign) BOOL reportl;
@property (nonatomic, strong) NSArray *minutei;
@property (nonatomic, assign) NSInteger lightb;


- (void)farmConstruction:(NSArray *_Nullable)construction andNerve:(NSInteger)nerve;
@end
NS_ASSUME_NONNULL_END