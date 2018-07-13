//
//  HJXagentManager.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXagentManager : NSObject

@property (nonatomic, strong) NSDictionary *shapeg;


- (void)dietMaterial:(NSInteger)material andRain:(NSArray *_Nullable)rain andSection:(NSInteger)section;

- (void)upper;

- (void)range;

- (void)horseRow:(NSDictionary *_Nullable)row;
@end
NS_ASSUME_NONNULL_END