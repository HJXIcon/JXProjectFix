//
//  HJXhideMapper.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXhideMapper : NSObject

@property (nonatomic, assign) BOOL safem;
@property (nonatomic, strong) NSDictionary *naturalm;
@property (nonatomic, strong) NSArray *shoey;
@property (nonatomic, copy) void(^marketqBlock)(void);
@property (nonatomic, copy) void(^speedtBlock)(void);




- (void)suitFloor:(NSDictionary *_Nullable)floor andOpinion:(NSDictionary *_Nullable)opinion andScript:(NSDictionary *_Nullable)script;
@end
NS_ASSUME_NONNULL_END