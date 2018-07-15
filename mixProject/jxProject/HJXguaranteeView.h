//
//  HJXguaranteeView.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXguaranteeView : NSObject

@property (nonatomic, assign) BOOL weaknesso;


- (void)award;

- (void)series;

- (void)walkRun:(BOOL)run andSpecial:(NSArray *_Nullable)special;

- (void)welcomeChild:(NSInteger)child andLook:(BOOL)look;
@end
NS_ASSUME_NONNULL_END