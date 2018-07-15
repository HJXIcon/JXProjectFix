//
//  HJXblindSettings.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXblindSettings : NSObject

@property (nonatomic, strong) NSArray *reasont;


@property (nonatomic, copy) NSString *walld;
@property (nonatomic, assign) NSInteger potentialk;


- (void)mediumComment:(NSArray *_Nullable)comment andCustomer:(NSDictionary *_Nullable)customer andCheck:(NSInteger)check;

- (void)crazy;
@end
NS_ASSUME_NONNULL_END