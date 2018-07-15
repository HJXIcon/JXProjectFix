//
//  HJXpossibleError.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXpossibleError : NSObject

@property (nonatomic, strong) NSArray *feeds;
@property (nonatomic, assign) BOOL tableg;
@property (nonatomic, assign) BOOL guidancep;
@property (nonatomic, assign) NSInteger comfortd;
@property (nonatomic, assign) BOOL adviced;


- (void)shipSmell:(NSDictionary *_Nullable)smell andCrazy:(NSDictionary *_Nullable)crazy andZone:(NSArray *_Nullable)zone;
@end
NS_ASSUME_NONNULL_END