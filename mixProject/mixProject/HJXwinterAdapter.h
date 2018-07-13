//
//  HJXwinterAdapter.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXwinterAdapter : NSObject

@property (nonatomic, copy) NSString *leads;
@property (nonatomic, strong) NSArray *deliveryv;
@property (nonatomic, copy) NSString *tapr;


- (void)bigPurpose:(NSArray *_Nullable)purpose andLock:(NSArray *_Nullable)lock andWait:(NSArray *_Nullable)wait;

- (void)counterPolicy:(NSDictionary *_Nullable)policy;
@end
NS_ASSUME_NONNULL_END