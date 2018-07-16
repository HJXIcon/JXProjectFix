//
//  HJXsheUploader.h
//  NFishSDK
//
//  Created by HJXIcon on 2018/5/18.
//  Copyright © 2018年 HJXIcon. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@interface HJXsheUploader : NSObject

@property (nonatomic, assign) BOOL solidd;
@property (nonatomic, copy) void(^choicewBlock)(void);
@property (nonatomic, strong) NSDictionary *gapc;
@property (nonatomic, strong) NSArray *periodw;
@property (nonatomic, assign) BOOL generalo;


- (void)cup;

- (void)distributionAverage:(NSData *_Nullable)average andGene:(NSData *_Nullable)gene;

- (void)wordSpiritual:(NSString *_Nullable)spiritual;

- (void)signatureBrave:(NSDictionary *_Nullable)brave andStation:(NSArray *_Nullable)station;

- (void)line;
@end
NS_ASSUME_NONNULL_END