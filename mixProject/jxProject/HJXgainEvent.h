//
//  HJXgainEvent.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXgainEvent : NSObject

@property (nonatomic, strong) NSArray *foldy;


@property (nonatomic, copy) void(^movieeBlock)(void);


- (void)rip;

- (void)labCharacter:(NSDictionary *_Nullable)character andSector:(NSDictionary *_Nullable)sector andPassage:(NSArray *_Nullable)passage;
@end
NS_ASSUME_NONNULL_END