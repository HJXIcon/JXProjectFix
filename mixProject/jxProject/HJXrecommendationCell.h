//
//  HJXrecommendationCell.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXrecommendationCell : NSObject

@property (nonatomic, copy) NSString *lengthr;
@property (nonatomic, assign) NSInteger presidentq;


- (void)recordView:(NSArray *_Nullable)view;

- (void)statusWeird:(NSDictionary *_Nullable)weird andLanguage:(NSDictionary *_Nullable)language;

- (void)bedroomRefuse:(NSDictionary *_Nullable)refuse;
@end
NS_ASSUME_NONNULL_END