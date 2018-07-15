//
//  HJXtonightObserver.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXtonightObserver : NSObject

@property (nonatomic, copy) NSString *keyh;




- (void)partMix:(NSInteger)mix andReport:(BOOL)report andSpecific:(NSArray *_Nullable)specific;

- (void)blameSmile:(NSArray *_Nullable)smile andTongue:(NSInteger)tongue andPull:(NSInteger)pull;

- (void)teamOwner:(NSInteger)owner;

- (void)departmentNerve:(NSInteger)nerve;

- (void)leadNote:(BOOL)note andAnywhere:(NSDictionary *_Nullable)anywhere andSick:(NSInteger)sick;

- (void)metalFamiliar:(BOOL)familiar andDirt:(NSArray *_Nullable)dirt;
@end
NS_ASSUME_NONNULL_END