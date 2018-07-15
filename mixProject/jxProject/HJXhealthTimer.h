//
//  HJXhealthTimer.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXhealthTimer : NSObject

@property (nonatomic, strong) NSDictionary *messx;


- (void)cupPiano:(NSInteger)piano andPension:(NSArray *_Nullable)pension;

- (void)dragClaim:(NSArray *_Nullable)claim andMusic:(NSInteger)music andBad:(BOOL)bad;

- (void)shock;
@end
NS_ASSUME_NONNULL_END