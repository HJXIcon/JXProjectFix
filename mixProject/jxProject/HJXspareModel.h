//
//  HJXspareModel.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXspareModel : NSObject

@property (nonatomic, assign) NSInteger dutyq;
@property (nonatomic, copy) void(^worthkBlock)(void);


- (void)moodUsual:(NSDictionary *_Nullable)usual andGain:(NSInteger)gain andHelp:(NSInteger)help;
@end
NS_ASSUME_NONNULL_END