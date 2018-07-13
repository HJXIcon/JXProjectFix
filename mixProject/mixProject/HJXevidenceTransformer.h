//
//  HJXevidenceTransformer.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXevidenceTransformer : NSObject

@property (nonatomic, assign) NSInteger highv;


- (void)clientBike:(NSInteger)bike andPeriod:(NSArray *_Nullable)period andMale:(BOOL)male;
@end
NS_ASSUME_NONNULL_END