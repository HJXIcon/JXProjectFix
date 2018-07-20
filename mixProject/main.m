//
//  main.m
//  mixProject
//
//  Created by 魏昆超 on 2018/7/9.
//  Copyright © 2018年 WeiKunChao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SLCMixManager.h"
//#import "FRZHBullets.h"


int main(int argc, const char * argv[]) {
    @autoreleasepool {

//        [FRZHBullets mainBulletFire];
        
        SLCMixManager *mix = [SLCMixManager new];
        mix.fileHeader = @"WD"; //header
//        mix.fileName = @"QuizProject"; //文件夹名称
        mix.fileNum = 50; //文件个数
        [mix fireOnBorn];

//
//        SLCMixManager *mix = [SLCMixManager new];
//        mix.childFullPath = @"/Users/hjxicon/Desktop/aa";
//        mix.contaisArray = @[@"SLCmixLayout"];
//        mix.childMethodNum = 10;
//        [mix fireOnChild];

    }
    return 0;
}
