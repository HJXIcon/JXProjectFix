//
//  HJXovenNotification.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXovenNotification : NSObject

@property (nonatomic, assign) NSInteger userc;
@property (nonatomic, assign) BOOL dinnerq;
@property (nonatomic, strong) NSDictionary *patiencek;
@property (nonatomic, assign) NSInteger stayq;
@property (nonatomic, assign) BOOL crazyn;
@property (nonatomic, assign) NSInteger pulld;


- (void)debateBowl:(NSDictionary *_Nullable)bowl;
@end
NS_ASSUME_NONNULL_END