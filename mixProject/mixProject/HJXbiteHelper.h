//
//  HJXbiteHelper.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXbiteHelper : NSObject

@property (nonatomic, assign) NSInteger seasonb;
@property (nonatomic, copy) NSString *surpriseh;
@property (nonatomic, copy) NSString *boyd;


- (void)townQuality:(NSDictionary *_Nullable)quality;

- (void)easeBike:(NSArray *_Nullable)bike;

- (void)candleRise:(NSDictionary *_Nullable)rise andApartment:(NSInteger)apartment;
@end
NS_ASSUME_NONNULL_END