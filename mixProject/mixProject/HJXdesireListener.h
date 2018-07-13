//
//  HJXdesireListener.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXdesireListener : NSObject

@property (nonatomic, copy) NSString *warx;
@property (nonatomic, copy) void(^punchnBlock)(void);
@property (nonatomic, assign) BOOL listc;
@property (nonatomic, assign) NSInteger bandq;
@property (nonatomic, assign) BOOL fille;


- (void)braveKing:(BOOL)king andInstruction:(NSArray *_Nullable)instruction andSavings:(NSDictionary *_Nullable)savings;

- (void)blindTackle:(BOOL)tackle andBoard:(BOOL)board;
@end
NS_ASSUME_NONNULL_END