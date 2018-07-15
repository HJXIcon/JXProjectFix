//
//  HJXrepeatListener.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXrepeatListener : NSObject

@property (nonatomic, assign) NSInteger offert;
@property (nonatomic, assign) NSInteger scoreb;




- (void)careerMatch:(BOOL)match andRemove:(NSInteger)remove;

- (void)skyPurple:(BOOL)purple andKing:(NSDictionary *_Nullable)king andTower:(NSDictionary *_Nullable)tower;

- (void)packBand:(NSInteger)band andEstimate:(BOOL)estimate andFinance:(NSArray *_Nullable)finance;

- (void)formalCheck:(NSDictionary *_Nullable)check andFee:(NSArray *_Nullable)fee;

- (void)grandAdvantage:(NSInteger)advantage;

- (void)responseTeaching:(BOOL)teaching andProof:(NSDictionary *_Nullable)proof andSignificance:(BOOL)significance;
@end
NS_ASSUME_NONNULL_END