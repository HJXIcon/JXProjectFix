//
//  HJXcrazyLoader.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXcrazyLoader : NSObject

@property (nonatomic, assign) NSInteger actore;
@property (nonatomic, copy) NSString *priore;
@property (nonatomic, strong) NSArray *packagem;




- (void)concentrate;

- (void)armGap:(NSArray *_Nullable)gap andFish:(NSDictionary *_Nullable)fish andWalk:(BOOL)walk;

- (void)goodPotential:(NSInteger)potential;
@end
NS_ASSUME_NONNULL_END