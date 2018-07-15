//
//  HJXwifeHandler.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXwifeHandler : NSObject

@property (nonatomic, assign) BOOL topb;
@property (nonatomic, strong) NSDictionary *screenx;
@property (nonatomic, strong) NSDictionary *temperaturev;
@property (nonatomic, assign) BOOL powert;


- (void)product;

- (void)series;

- (void)courageMoment:(NSDictionary *_Nullable)moment andAssumption:(NSDictionary *_Nullable)assumption andCall:(BOOL)call;
@end
NS_ASSUME_NONNULL_END