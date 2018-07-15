//
//  JXRunProTools.h
//  mixProject
//
//  Created by 晓梦影 on 2018/7/16.
//  Copyright © 2018年 WeiKunChao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JXRunDealTools : NSObject

+ (NSArray <NSString *>*)getAllMethods:(id)obj;
+ (NSDictionary<NSString *,NSArray *> *)getAllMethodArgumentsDict:(id)obj;
+ (id)getArgument:(NSString *)type;

@end
