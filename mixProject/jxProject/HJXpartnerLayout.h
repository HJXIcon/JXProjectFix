//
//  HJXpartnerLayout.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXpartnerLayout : NSObject

@property (nonatomic, copy) NSString *normalf;
@property (nonatomic, copy) void(^drinkdBlock)(void);


@property (nonatomic, strong) NSDictionary *servel;


- (void)win;

- (void)inspection;

- (void)leather;
@end
NS_ASSUME_NONNULL_END