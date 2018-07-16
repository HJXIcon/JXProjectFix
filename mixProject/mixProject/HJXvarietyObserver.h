//
//  HJXvarietyObserver.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXvarietyObserver : NSObject

@property (nonatomic, strong) NSArray *icex;




- (void)informationBoot:(NSDictionary *_Nullable)boot;

- (void)capitalList:(NSArray *_Nullable)list;

- (void)strainDepartment:(NSString *_Nullable)department andCarpet:(NSString *_Nullable)carpet;
@end
NS_ASSUME_NONNULL_END