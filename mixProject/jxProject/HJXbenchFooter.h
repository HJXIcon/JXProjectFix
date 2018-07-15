//
//  HJXbenchFooter.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXbenchFooter : NSObject

@property (nonatomic, copy) void(^buyeBlock)(void);
@property (nonatomic, assign) BOOL sprays;
@property (nonatomic, assign) NSInteger wishg;
@property (nonatomic, assign) NSInteger basketo;


- (void)championshipZone:(NSDictionary *_Nullable)zone andPhysical:(BOOL)physical;

- (void)conclusion;

- (void)representativeYard:(NSArray *_Nullable)yard andFoot:(NSDictionary *_Nullable)foot andEarth:(BOOL)earth;

- (void)heightStable:(NSDictionary *_Nullable)stable;

- (void)collection;
@end
NS_ASSUME_NONNULL_END