//
//  HJXpensionNotification.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXpensionNotification : NSObject

@property (nonatomic, strong) NSArray *stressy;
@property (nonatomic, copy) void(^creamgBlock)(void);


@property (nonatomic, copy) NSString *marketo;


- (void)pushArrival:(NSInteger)arrival andToe:(BOOL)toe;

- (void)lawyerSchedule:(NSArray *_Nullable)schedule andMath:(BOOL)math andSink:(BOOL)sink;

- (void)rentDrink:(NSDictionary *_Nullable)drink;
@end
NS_ASSUME_NONNULL_END