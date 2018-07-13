//
//  HJXequipmentLoader.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXequipmentLoader : NSObject

@property (nonatomic, copy) NSString *meali;




- (void)excusePlane:(NSDictionary *_Nullable)plane;

- (void)activityDepression:(BOOL)depression andEat:(NSDictionary *_Nullable)eat;

- (void)viewCourt:(NSInteger)court andManner:(BOOL)manner andTalk:(NSArray *_Nullable)talk;
@end
NS_ASSUME_NONNULL_END