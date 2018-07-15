//
//  HJXwheelModel.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXwheelModel : NSObject

@property (nonatomic, copy) void(^servicedBlock)(void);
@property (nonatomic, assign) NSInteger actoru;
@property (nonatomic, assign) NSInteger impacti;
@property (nonatomic, copy) void(^nationalxBlock)(void);


- (void)recoverRefrigerator:(BOOL)refrigerator;
@end
NS_ASSUME_NONNULL_END