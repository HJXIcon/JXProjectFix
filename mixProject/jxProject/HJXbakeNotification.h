//
//  HJXbakeNotification.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXbakeNotification : NSObject

@property (nonatomic, strong) NSArray *keym;
@property (nonatomic, assign) NSInteger toea;


- (void)careerDistribution:(NSDictionary *_Nullable)distribution andNecessary:(NSDictionary *_Nullable)necessary andHalf:(NSInteger)half;

- (void)grandfatherApplication:(BOOL)application andRisk:(NSArray *_Nullable)risk andPermission:(NSArray *_Nullable)permission;

- (void)seasonStuff:(NSArray *_Nullable)stuff;

- (void)agent;

- (void)connection;
@end
NS_ASSUME_NONNULL_END