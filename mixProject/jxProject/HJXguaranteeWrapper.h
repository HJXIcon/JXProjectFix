//
//  HJXguaranteeWrapper.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXguaranteeWrapper : NSObject

@property (nonatomic, copy) void(^packrBlock)(void);
@property (nonatomic, assign) NSInteger equalh;






- (void)stickSoup:(BOOL)soup;
@end
NS_ASSUME_NONNULL_END