//
//  HJXbirdUtil.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXbirdUtil : NSObject



@property (nonatomic, assign) BOOL drunkm;
@property (nonatomic, strong) NSDictionary *ruino;


- (void)package;

- (void)totalChemistry:(BOOL)chemistry;

- (void)demandNumber:(BOOL)number andShoulder:(BOOL)shoulder;
@end
NS_ASSUME_NONNULL_END