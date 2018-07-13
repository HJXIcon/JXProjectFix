//
//  HJXhighService.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXhighService : NSObject



@property (nonatomic, copy) NSString *entertainmenty;
@property (nonatomic, assign) BOOL heath;
@property (nonatomic, copy) void(^matterfBlock)(void);


- (void)smokeAttempt:(NSArray *_Nullable)attempt;
@end
NS_ASSUME_NONNULL_END