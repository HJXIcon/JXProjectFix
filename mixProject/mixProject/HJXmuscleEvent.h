//
//  HJXmuscleEvent.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXmuscleEvent : NSObject

@property (nonatomic, strong) NSDictionary *damaged;
@property (nonatomic, strong) NSArray *periodx;
@property (nonatomic, copy) void(^truthfBlock)(void);
@property (nonatomic, strong) NSArray *lackf;
@property (nonatomic, assign) NSInteger crazyh;


- (void)death;

- (void)raisePositive:(NSString *_Nullable)positive andNight:(NSArray *_Nullable)night;
@end
NS_ASSUME_NONNULL_END