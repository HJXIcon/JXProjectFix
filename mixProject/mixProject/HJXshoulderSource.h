//
//  HJXshoulderSource.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXshoulderSource : NSObject

@property (nonatomic, strong) NSArray *lowf;


- (void)motor;

- (void)struggle;

- (void)gradePause:(BOOL)pause andContract:(NSArray *_Nullable)contract;

- (void)decisionNegative:(NSArray *_Nullable)negative andMiss:(NSArray *_Nullable)miss andBorder:(BOOL)border;
@end
NS_ASSUME_NONNULL_END