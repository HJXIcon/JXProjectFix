//
//  HJXcontestManager.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXcontestManager : NSObject

@property (nonatomic, copy) NSString *realityx;
@property (nonatomic, assign) NSInteger charityr;
@property (nonatomic, strong) NSDictionary *layeri;
@property (nonatomic, assign) NSInteger insurancea;


- (void)fallPercentage:(NSInteger)percentage;
@end
NS_ASSUME_NONNULL_END