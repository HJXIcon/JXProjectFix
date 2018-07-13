




#import "HJXBullets.h"
#import <objc/runtime.h>
#import <objc/message.h>

static dispatch_source_t _timer;

@interface HJXBullets()
@property (nonatomic, strong) NSArray <NSString *>* classArray;

@end


@implementation HJXBullets
- (NSArray <NSString *>*)classArray {
    if (!_classArray) {
     _classArray = @[@"HJXstandardAnimator",@"HJXwomanManager",@"HJXdanceSerializer",@"HJXpickController",@"HJXsupportTextField",@"HJXessayButton",@"HJXjuryImageView",@"HJXnailCell",@"HJXtouchBatch",@"HJXequipmentLoader",@"HJXmoneyView",@"HJXeatManager",@"HJXsandwichOperation",@"HJXrelationshipError",@"HJXcodeEvent",@"HJXburnView",@"HJXdesignControl",@"HJXpersonalRender",@"HJXplayLogger",@"HJXcontestManager",@"HJXrecoverVC",@"HJXarticleView",@"HJXshakeCell",@"HJXtieDelegate",@"HJXevidenceTransformer",@"HJXdecisionView",@"HJXupperHandler",@"HJXpensionNotification",@"HJXhighService",@"HJXbootRender",@"HJXsensitiveTask",@"HJXproductVC",@"HJXbrushLabel",@"HJXinsideCell",@"HJXprocedureView",@"HJXgapSession",@"HJXcatMapper",@"HJXgateVC",@"HJXstationDictionary",@"HJXairAnimation",@"HJXtellContext",@"HJXadviceCallback",@"HJXtestEditor",@"HJXhitAnimator",@"HJXnightAdapter",@"HJXleadVC",@"HJXstillHandler",@"HJXkindListener",@"HJXresortInterpolator",@"HJXcriticismTask",@"HJXtradeView",@"HJXbalanceSource",@"HJXdepressionProvider",@"HJXcommandToken",@"HJXlogButton",@"HJXsubjectAnimation",@"HJXhalfImageView",@"HJXsolutionBatch",@"HJXinviteGroup",@"HJXprofessorContext",@"HJXlogLayer",@"HJXorderProtocol",@"HJXrateAnimation",@"HJXcupArray",@"HJXpsychologyStorage",@"HJXphoneVC",@"HJXheavyHeader",@"HJXprofileTracker",@"HJXimageProvider",@"HJXsecretLabel",@"HJXbeatArray",@"HJXagentManager",@"HJXmobileQueue",@"HJXworkerModel",@"HJXproductGroup",@"HJXoriginalMapper",@"HJXemploymentNotification",@"HJXhorrorController",@"HJXdutyRouter",@"HJXshoulderSource",@"HJXwinterAdapter",@"HJXdepositProtocol",@"HJXmobileLayout",@"HJXbikeController",@"HJXlectureDialog",@"HJXdecisionTextField",@"HJXbiteHelper",@"HJXcreativeManager",@"HJXbeautifulCollection",@"HJXtreatHelper",@"HJXcrazyProcessor",@"HJXskinVC",@"HJXdependentHandler",@"HJXriseDelegate",@"HJXpastLoader",@"HJXdriverView",@"HJXcodeSettings",@"HJXlandObserver",@"HJXsplitLayer",@"HJXsinkException",@"HJXappointmentFilter",@"HJXmessageTextField",@"HJXareaDialog",@"HJXgardenQueue",@"HJXdesireListener",@"HJXpracticeModel",@"HJXgolfClient",@"HJXqualityConfiguration",@"HJXaffairView",@"HJXmouthManager",@"HJXhomeNode",@"HJXeditorModel",@"HJXatmosphereFilter",@"HJXwaitVC",@"HJXcharacterControl",@"HJXboatHelper",@"HJXdisasterTool",@"HJXdaughterWrapper",@"HJXdetailConfiguration",@"HJXtackleViewController",];
    }
    return _classArray;
}

+ (void)jx_countDownWith15SEC_Block:(void (^)(void))PER_SECBlock{
    if (_timer == nil) {
        dispatch_queue_t queue = dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0);
        _timer = dispatch_source_create(DISPATCH_SOURCE_TYPE_TIMER, 0, 0,queue);
        dispatch_source_set_timer(_timer,dispatch_walltime(NULL, 0),15.0*NSEC_PER_SEC, 0); //每秒执行
        dispatch_source_set_event_handler(_timer, ^{
            dispatch_async(dispatch_get_main_queue(), ^{
                PER_SECBlock();
            });
        });
        dispatch_resume(_timer);
    }
}

+ (void)fire{
    @autoreleasepool {
     HJXBullets *bullets = [HJXBullets new];
       for (NSString *className in bullets.classArray) {
      Class aClass = NSClassFromString(className);
      NSObject *object = [aClass new];
      
          NSArray *allMethods = [self getAllMethods:object];
           NSDictionary *allMethodArgumentsDict = [self getAllMethodArgumentsDict:object];
           
           if (allMethods.count) {
               for (int i = 0; i < allMethods.count; i ++) {
                   
                   NSString *meth = allMethods[i];
                   // 对应方法的参数数组
                   NSArray *tpyeArr = allMethodArgumentsDict[meth];
                   id instance = [[aClass alloc]init];
                   
                   // 超过三个参数的方法不调用
                   if (tpyeArr.count - 2 >= 3) {
                       continue;
                   }
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Warc-performSelector-leaks"
                   // 没有参数
                   if (tpyeArr.count - 2 == 0) {
                       [instance performSelector:NSSelectorFromString(meth)];
                       continue;
                   }else if(tpyeArr.count - 2 == 1){

                       [instance performSelector:NSSelectorFromString(meth) withObject:[self getArgument:tpyeArr[2]]];
                       continue;

                       
                   }else if(tpyeArr.count - 2 == 2){
                       [instance performSelector:NSSelectorFromString(meth) withObject:[self getArgument:tpyeArr[2]] withObject:tpyeArr[3]];
                       continue;
                   }
#pragma clang diagnostic pop
                   
                   
               }
               
           }
    }
      }
    
}

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


// 获取所有方法的对应的参数类型数组
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

+ (id)getArgument:(NSString *)type{
    // 参数
    if ([type isEqualToString:@"@"]) {
        
        return nil;
        
    }else if([type isEqualToString:@"i"] || [type isEqualToString:@"I"] || [type isEqualToString:@"c"]){
        return  @1;
    }
    return nil;
    
}
+ (NSString*)removeLastOneChar:(NSString*)origin{
    NSString* cutted = [origin length] > 0 ? [origin substringToIndex:([origin length]-2)] : origin;
    return cutted;
}
@end
