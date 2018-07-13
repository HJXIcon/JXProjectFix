//
//  HJXbalanceSource.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXbalanceSource : NSObject

@property (nonatomic, strong) NSDictionary *towerg;
@property (nonatomic, strong) NSArray *noised;
@property (nonatomic, strong) NSArray *codec;


- (void)sensitiveOperation:(NSArray *_Nullable)operation andCall:(NSArray *_Nullable)call;

- (void)referenceBed:(NSArray *_Nullable)bed andCoat:(NSInteger)coat andDefinition:(NSDictionary *_Nullable)definition;
@end
NS_ASSUME_NONNULL_END