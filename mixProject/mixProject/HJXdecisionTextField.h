//
//  HJXdecisionTextField.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXdecisionTextField : NSObject

@property (nonatomic, copy) NSString *listenh;
@property (nonatomic, copy) void(^engineiBlock)(void);
@property (nonatomic, strong) NSDictionary *broadd;




- (void)topicReserve:(BOOL)reserve andPresent:(NSInteger)present;

- (void)benchConsequence:(BOOL)consequence;
@end
NS_ASSUME_NONNULL_END