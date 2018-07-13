//
//  HJXcatMapper.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXcatMapper : NSObject



@property (nonatomic, assign) BOOL breakfastf;


@property (nonatomic, assign) NSInteger localk;
@property (nonatomic, assign) NSInteger stillb;


- (void)loveGuide:(NSDictionary *_Nullable)guide;

- (void)storm;

- (void)choiceMilk:(NSArray *_Nullable)milk;

- (void)competitionWeekend:(BOOL)weekend;

- (void)improvementWorld:(BOOL)world andDate:(NSDictionary *_Nullable)date andGod:(BOOL)god;
@end
NS_ASSUME_NONNULL_END