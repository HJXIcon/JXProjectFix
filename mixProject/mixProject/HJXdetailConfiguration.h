//
//  HJXdetailConfiguration.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXdetailConfiguration : NSObject

@property (nonatomic, strong) NSDictionary *skirto;
@property (nonatomic, assign) NSInteger bricka;
@property (nonatomic, assign) NSInteger partyl;


- (void)video;

- (void)filmEnd:(NSArray *_Nullable)end andMachine:(BOOL)machine;

- (void)dearEconomy:(BOOL)economy andBrown:(NSDictionary *_Nullable)brown andScrew:(NSInteger)screw;
@end
NS_ASSUME_NONNULL_END