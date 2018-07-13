//
//  HJXcreativeManager.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXcreativeManager : NSObject

@property (nonatomic, assign) BOOL advantagec;
@property (nonatomic, assign) BOOL easeg;
@property (nonatomic, assign) NSInteger pairs;


- (void)wheelFinding:(NSArray *_Nullable)finding andEast:(NSInteger)east andSatisfaction:(NSArray *_Nullable)satisfaction;
@end
NS_ASSUME_NONNULL_END