//
//  HJXreasonUtil.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXreasonUtil : NSObject

@property (nonatomic, strong) NSArray *capu;
@property (nonatomic, copy) NSString *uniquey;
@property (nonatomic, copy) NSString *timed;
@property (nonatomic, assign) NSInteger commissionq;


- (void)ropeDeposit:(NSArray *_Nullable)deposit andAwareness:(BOOL)awareness;

- (void)fanSenior:(NSInteger)senior;

- (void)degreeConference:(NSInteger)conference andConfusion:(NSDictionary *_Nullable)confusion;

- (void)speed;
@end
NS_ASSUME_NONNULL_END