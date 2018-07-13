//
//  HJXaffairView.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXaffairView : NSObject

@property (nonatomic, assign) BOOL illegalc;
@property (nonatomic, strong) NSDictionary *closetu;
@property (nonatomic, strong) NSArray *lawa;


- (void)chocolateLocal:(NSInteger)local;

- (void)matchGuest:(BOOL)guest;

- (void)backBuddy:(NSDictionary *_Nullable)buddy;

- (void)chocolateResult:(BOOL)result andVideo:(NSDictionary *_Nullable)video;

- (void)vehicleSmoke:(NSDictionary *_Nullable)smoke andMission:(BOOL)mission andWorld:(NSDictionary *_Nullable)world;
@end
NS_ASSUME_NONNULL_END