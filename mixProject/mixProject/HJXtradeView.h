//
//  HJXtradeView.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXtradeView : NSObject

@property (nonatomic, strong) NSDictionary *platey;


- (void)penalty;

- (void)bicycleScreen:(BOOL)screen andPermit:(NSArray *_Nullable)permit;

- (void)coldWash:(NSDictionary *_Nullable)wash andDepth:(BOOL)depth andRush:(NSInteger)rush;
@end
NS_ASSUME_NONNULL_END