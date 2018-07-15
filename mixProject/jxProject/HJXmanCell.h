//
//  HJXmanCell.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXmanCell : NSObject

@property (nonatomic, strong) NSArray *noticee;


- (void)access;

- (void)emergencyLip:(NSDictionary *_Nullable)lip;

- (void)traffic;

- (void)sceneSolid:(NSArray *_Nullable)solid andSpecial:(NSDictionary *_Nullable)special andZone:(BOOL)zone;

- (void)checkCelebration:(BOOL)celebration andSuggestion:(NSArray *_Nullable)suggestion andCamera:(NSDictionary *_Nullable)camera;

- (void)calmDecision:(NSArray *_Nullable)decision andCity:(NSArray *_Nullable)city;
@end
NS_ASSUME_NONNULL_END