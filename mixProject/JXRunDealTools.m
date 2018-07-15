//
//  JXRunProTools.m
//  mixProject
//
//  Created by 晓梦影 on 2018/7/16.
//  Copyright © 2018年 WeiKunChao. All rights reserved.
//

#import "JXRunDealTools.h"
#import <objc/runtime.h>

@implementation JXRunDealTools


#pragma mark - *** Tools
// 获取类所有的方法个数
+ (NSArray <NSString *>*)getAllMethods:(id)obj{
    unsigned int methodCount =0;
    Method* methodList = class_copyMethodList([obj class],&methodCount);
    NSMutableArray *methodsArray = [NSMutableArray arrayWithCapacity:methodCount];
    for(int i = 0; i < methodCount; i++){
        Method temp = methodList[i];
        method_getImplementation(temp);
        method_getName(temp);
        const char* name_s =sel_getName(method_getName(temp));
        //     int arguments = method_getNumberOfArguments(temp);
        //     const char* encoding =method_getTypeEncoding(temp);
        //        NSLog(@"方法名：%@,参数个数：%d,编码方式：%@",[NSString stringWithUTF8String:name_s],arguments,[NSString stringWithUTF8String:encoding]);
        
        if (![[NSString stringWithUTF8String:name_s] containsString:@"set"]) {
            //不要setter
            
            [methodsArray addObject:[NSString stringWithUTF8String:name_s]];
        }
    }
    free(methodList);
    return methodsArray;
}


// 获取所有方法的对应的参数类型数组 key:方法名 value：参数类型数组
+ (NSDictionary<NSString *,NSArray *> *)getAllMethodArgumentsDict:(id)obj{
    
    unsigned int methodCount =0;
    Method* methodList = class_copyMethodList([obj class],&methodCount);
    NSMutableDictionary *argumentsDict = [NSMutableDictionary dictionary];
    for(int i = 0; i < methodCount; i++){
        Method temp = methodList[i];
        method_getImplementation(temp);
        method_getName(temp);
        int arguments = method_getNumberOfArguments(temp);
        const char* name_s =sel_getName(method_getName(temp));
        
        if (![[NSString stringWithUTF8String:name_s] containsString:@"set"]) {
            //不要setter
            NSMutableArray *types = [NSMutableArray array];
            for (int j = 0 ; j < arguments; j ++) {
                const char *type = method_copyArgumentType(temp, j);
                //                NSLog(@"j == %d type == %s\n name == %s",j,type,name_s);
                [types addObject:[NSString stringWithFormat:@"%s",type]];
            }
            argumentsDict[[NSString stringWithFormat:@"%s",name_s]] = types;
        }
    }
    free(methodList);
    return argumentsDict;
}

// 返回参数
+ (id)getArgument:(NSString *)type{
    // 参数
    if ([type isEqualToString:@"@"]) {
        
        return nil;
        
    }else if([type isEqualToString:@"i"] || [type isEqualToString:@"I"] || [type isEqualToString:@"c"]){
        return  @1;
    }
    return nil;
    
}
@end
