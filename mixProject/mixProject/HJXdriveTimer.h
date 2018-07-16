//
//  HJXdriveTimer.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXdriveTimer : NSObject



@property (nonatomic, strong) NSArray *gase;
@property (nonatomic, assign) NSInteger interactionv;
@property (nonatomic, copy) void(^bravewBlock)(void);
@property (nonatomic, strong) NSArray *commonx;
@property (nonatomic, strong) NSArray *questioni;


- (void)give;

- (void)signFeeling:(NSDictionary *_Nullable)feeling;

- (void)deliveryBowl:(NSDictionary *_Nullable)bowl andMany:(NSString *_Nullable)many andDepression:(NSArray *_Nullable)depression;
@end
NS_ASSUME_NONNULL_END