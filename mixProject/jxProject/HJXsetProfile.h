//
//  HJXsetProfile.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXsetProfile : NSObject

@property (nonatomic, copy) NSString *angerb;
@property (nonatomic, assign) NSInteger holidayw;


@property (nonatomic, assign) BOOL distancel;


- (void)deepDiscipline:(BOOL)discipline andHouse:(NSDictionary *_Nullable)house;

- (void)shopDrawer:(NSDictionary *_Nullable)drawer andTrust:(NSDictionary *_Nullable)trust andHabit:(NSDictionary *_Nullable)habit;

- (void)punchCloset:(NSArray *_Nullable)closet andUse:(NSDictionary *_Nullable)use andChild:(NSDictionary *_Nullable)child;
@end
NS_ASSUME_NONNULL_END