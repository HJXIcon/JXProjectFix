//
//  HJXimageProvider.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXimageProvider : NSObject

@property (nonatomic, assign) NSInteger reliefc;
@property (nonatomic, assign) NSInteger possibilityk;


@property (nonatomic, copy) NSString *farms;


- (void)instructionSpecific:(NSInteger)specific andPhilosophy:(BOOL)philosophy andProfit:(BOOL)profit;

- (void)serveSell:(BOOL)sell andGolf:(BOOL)golf;

- (void)stageBowl:(NSDictionary *_Nullable)bowl;

- (void)sisterWood:(NSArray *_Nullable)wood andSteak:(NSInteger)steak;

- (void)yard;
@end
NS_ASSUME_NONNULL_END