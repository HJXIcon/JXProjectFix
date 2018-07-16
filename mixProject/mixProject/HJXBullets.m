




#import "HJXBullets.h"
#import "HJXreadingAdapter.h"
#import "HJXcakeAdapter.h"

#import <objc/runtime.h>
@interface HJXBullets()
@property (nonatomic, strong) NSArray <NSString *>* classArray;
@end


@implementation HJXBullets
- (NSArray <NSString *>*)classArray {
    if (!_classArray) {
     _classArray = @[@"HJXlawyerStore",@"HJXcoverCell",@"HJXreadingAdapter",@"HJXpoliceController",@"HJXvarietyObserver",@"HJXsheUploader",@"HJXdriveTimer",@"HJXmuscleEvent",@"HJXcakeAdapter",@"HJXinevitableView",];
    }
    return _classArray;
}
+ (void)fire{
    @autoreleasepool {
     HJXBullets *bullets = [HJXBullets new];
       for (NSString *className in bullets.classArray) {
      Class aClass = NSClassFromString(className);
      NSObject *object = [aClass new];
      
 [self getAllMethods:object];
    }
      }
    

    HJXreadingAdapter *instance = [[HJXreadingAdapter alloc]init];
     [instance inspectionSock:nil andIntroduction:nil];

}
+ (NSArray <NSString *>*)getAllMethods:(id)obj{
    unsigned int methodCount =0;
    Method* methodList = class_copyMethodList([obj class],&methodCount);
    NSMutableArray *methodsArray = [NSMutableArray arrayWithCapacity:methodCount];
    for(int i = 0; i < methodCount; i++){
     Method temp = methodList[i];
     method_getImplementation(temp);
     method_getName(temp);
const char* name_s =sel_getName(method_getName(temp));
          if (![[NSString stringWithUTF8String:name_s] containsString:@"set"]) {
 //不要setter
   
       [methodsArray addObject:[NSString stringWithUTF8String:name_s]];
    }
     }
     free(methodList);
        

    HJXcakeAdapter *instance = [[HJXcakeAdapter alloc]init];
     [instance factRepair:nil andDrink:nil];

     return methodsArray;
}

+ (NSString*)removeLastOneChar:(NSString*)origin{
    NSString* cutted = [origin length] > 0 ? [origin substringToIndex:([origin length]-2)] : origin;
    return cutted;
}
@end