//
//  HJXborderItem.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXborderItem : NSObject

@property (nonatomic, copy) NSString *springp;


@property (nonatomic, assign) NSInteger energyg;
@property (nonatomic, copy) NSString *lockg;


- (void)strokeBike:(NSArray *_Nullable)bike andStatus:(BOOL)status andReward:(NSArray *_Nullable)reward;

- (void)actionBrush:(NSInteger)brush andSpray:(NSInteger)spray;
@end
NS_ASSUME_NONNULL_END