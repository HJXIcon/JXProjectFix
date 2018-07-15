//
//  HJXfactorUtil.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXfactorUtil : NSObject

@property (nonatomic, assign) BOOL fata;
@property (nonatomic, assign) NSInteger dealerw;
@property (nonatomic, copy) void(^leadershipbBlock)(void);
@property (nonatomic, strong) NSDictionary *companya;
@property (nonatomic, copy) void(^naturalwBlock)(void);


- (void)consideration;
@end
NS_ASSUME_NONNULL_END