//
//  HJXcrazyProcessor.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXcrazyProcessor : NSObject

@property (nonatomic, copy) void(^treecBlock)(void);
@property (nonatomic, assign) BOOL daughtere;
@property (nonatomic, copy) void(^runnBlock)(void);
@property (nonatomic, copy) void(^placerBlock)(void);
@property (nonatomic, strong) NSArray *huntr;


- (void)sonPressure:(NSInteger)pressure;

- (void)askHandle:(NSDictionary *_Nullable)handle;

- (void)spaceTarget:(NSDictionary *_Nullable)target andAction:(BOOL)action andDistribution:(NSDictionary *_Nullable)distribution;

- (void)essayStupid:(NSArray *_Nullable)stupid andInevitable:(NSArray *_Nullable)inevitable;

- (void)showerBattle:(NSInteger)battle;
@end
NS_ASSUME_NONNULL_END