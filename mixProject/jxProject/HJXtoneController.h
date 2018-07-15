//
//  HJXtoneController.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXtoneController : NSObject

@property (nonatomic, strong) NSArray *sympathyf;


@property (nonatomic, assign) BOOL askb;


- (void)affectStaff:(NSInteger)staff andConfusion:(NSDictionary *_Nullable)confusion andNotice:(NSDictionary *_Nullable)notice;

- (void)sea;

- (void)momHalf:(BOOL)half andOne:(BOOL)one;

- (void)bankWeight:(NSDictionary *_Nullable)weight andRelief:(NSArray *_Nullable)relief;

- (void)ropeCurrent:(NSArray *_Nullable)current andConfusion:(NSDictionary *_Nullable)confusion;

- (void)faceProtection:(NSArray *_Nullable)protection;
@end
NS_ASSUME_NONNULL_END