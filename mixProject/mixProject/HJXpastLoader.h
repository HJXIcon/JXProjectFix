//
//  HJXpastLoader.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXpastLoader : NSObject



@property (nonatomic, strong) NSDictionary *specialistr;
@property (nonatomic, copy) void(^payaBlock)(void);


- (void)brickShow:(NSDictionary *_Nullable)show andRepublic:(NSDictionary *_Nullable)republic;

- (void)residentGuarantee:(BOOL)guarantee andCar:(NSInteger)car andPut:(NSArray *_Nullable)put;

- (void)storyCheck:(NSInteger)check;
@end
NS_ASSUME_NONNULL_END