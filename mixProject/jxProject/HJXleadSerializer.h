//
//  HJXleadSerializer.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXleadSerializer : NSObject

@property (nonatomic, strong) NSDictionary *roundq;
@property (nonatomic, copy) void(^abilitybBlock)(void);
@property (nonatomic, copy) NSString *lunchw;
@property (nonatomic, copy) NSString *webe;


- (void)uncleCrew:(NSDictionary *_Nullable)crew andDirection:(NSDictionary *_Nullable)direction;

- (void)nastySail:(NSArray *_Nullable)sail andCompany:(NSInteger)company;

- (void)introduction;

- (void)bellSky:(NSDictionary *_Nullable)sky andFormal:(NSArray *_Nullable)formal;
@end
NS_ASSUME_NONNULL_END