//
//  HJXfaceUtil.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXfaceUtil : NSObject

@property (nonatomic, assign) BOOL inspectionh;


- (void)pattern;

- (void)fuelBid:(NSDictionary *_Nullable)bid;

- (void)agentSpecialist:(NSArray *_Nullable)specialist andAward:(NSDictionary *_Nullable)award;

- (void)regularWeekend:(NSArray *_Nullable)weekend;

- (void)shineResort:(NSDictionary *_Nullable)resort andRisk:(NSDictionary *_Nullable)risk andSector:(NSInteger)sector;

- (void)consequencePlace:(NSInteger)place andDust:(NSDictionary *_Nullable)dust;
@end
NS_ASSUME_NONNULL_END