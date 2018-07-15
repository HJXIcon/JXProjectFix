//
//  HJXjuryModel.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXjuryModel : NSObject

@property (nonatomic, assign) NSInteger promotions;
@property (nonatomic, copy) void(^causeyBlock)(void);
@property (nonatomic, assign) BOOL snowp;
@property (nonatomic, strong) NSArray *engineeringh;


- (void)squareSearch:(NSArray *_Nullable)search andCurve:(NSInteger)curve andTelephone:(NSInteger)telephone;

- (void)tradeJunior:(NSDictionary *_Nullable)junior andHearing:(NSDictionary *_Nullable)hearing;

- (void)might;

- (void)race;

- (void)settingQuestion:(BOOL)question andAppointment:(BOOL)appointment;
@end
NS_ASSUME_NONNULL_END