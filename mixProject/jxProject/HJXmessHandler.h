//
//  HJXmessHandler.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXmessHandler : NSObject

@property (nonatomic, copy) NSString *trainings;
@property (nonatomic, copy) void(^lunchiBlock)(void);


- (void)dataComplaint:(NSInteger)complaint;

- (void)shapeRaw:(BOOL)raw;

- (void)tensionDiscipline:(NSInteger)discipline;

- (void)difficultyStick:(NSInteger)stick andEngine:(NSDictionary *_Nullable)engine andCarry:(NSArray *_Nullable)carry;

- (void)dish;

- (void)calmRuin:(BOOL)ruin andNecessary:(NSDictionary *_Nullable)necessary andComputer:(NSArray *_Nullable)computer;
@end
NS_ASSUME_NONNULL_END