//
//  HJXbuddyController.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXbuddyController : NSObject

@property (nonatomic, copy) void(^airlinenBlock)(void);
@property (nonatomic, strong) NSDictionary *outsidef;
@property (nonatomic, assign) NSInteger storym;
@property (nonatomic, strong) NSArray *historyr;


- (void)insuranceGap:(NSDictionary *_Nullable)gap andEconomics:(NSDictionary *_Nullable)economics;

- (void)settingAuthor:(NSDictionary *_Nullable)author andShow:(NSInteger)show;
@end
NS_ASSUME_NONNULL_END