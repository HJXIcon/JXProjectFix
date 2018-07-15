//
//  HJXmateUtil.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXmateUtil : NSObject

@property (nonatomic, strong) NSArray *settingg;
@property (nonatomic, copy) NSString *contactn;
@property (nonatomic, copy) NSString *racep;
@property (nonatomic, assign) BOOL linek;


- (void)recordingStruggle:(BOOL)struggle andForce:(NSArray *_Nullable)force andSing:(BOOL)sing;
@end
NS_ASSUME_NONNULL_END