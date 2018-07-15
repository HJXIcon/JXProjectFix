




#import "HJXBullets.h"
#import <objc/runtime.h>
@interface HJXBullets()
@property (nonatomic, strong) NSArray <NSString *>* classArray;
@end


@implementation HJXBullets
- (NSArray <NSString *>*)classArray {
    if (!_classArray) {
     _classArray = @[@"HJXsmokeEvent",@"HJXexerciseSerializer",@"HJXpromotionCache",@"HJXpartnerLayout",@"HJXknowledgeAnimation",@"HJXparkImageView",@"HJXovenNotification",@"HJXreasonUtil",@"HJXmouseHelper",@"HJXlogDataSource",@"HJXhideMapper",@"HJXfeelingUtil",@"HJXclickTextView",@"HJXdaughterService",@"HJXbirdUtil",@"HJXstealView",@"HJXweekendCache",@"HJXmanCell",@"HJXmateUtil",@"HJXgrassRequest",@"HJXgainEvent",@"HJXpromptVC",@"HJXpossibleError",@"HJXartNode",@"HJXanalysisCell",@"HJXweirdSource",@"HJXdraftView",@"HJXnegativeTimer",@"HJXhallObserver",@"HJXbitterDictionary",@"HJXcityFilter",@"HJXleadSerializer",@"HJXpoundButton",@"HJXpleasureProcessor",@"HJXroughHeader",@"HJXweekExecutor",@"HJXjuryModel",@"HJXsurpriseList",@"HJXrecommendationCell",@"HJXresolveModel",@"HJXmasterController",@"HJXhighInterpolator",@"HJXattitudeProcessor",@"HJXcoastRouter",@"HJXlakeEditor",@"HJXvarietyDataSource",@"HJXguaranteeView",@"HJXbellFilter",@"HJXfaceUtil",@"HJXmessHandler",@"HJXpurchaseCell",@"HJXtonightObserver",@"HJXimaginationHandler",@"HJXguaranteeWrapper",@"HJXweekGenerator",@"HJXputButton",@"HJXdueView",@"HJXdepressionContext",@"HJXfatherNotification",@"HJXearthCollection",@"HJXroofLogger",@"HJXrefuseStore",@"HJXhairModel",@"HJXairportProfile",@"HJXactionDictionary",@"HJXbakeNotification",@"HJXseaEditor",@"HJXgatherObserver",@"HJXcrazyLoader",@"HJXrepeatListener",@"HJXlayerNode",@"HJXpaintDispatch",@"HJXvastController",@"HJXqueenVC",@"HJXrecordingUtility",@"HJXtouristDelegate",@"HJXbenchFooter",@"HJXdayFilter",@"HJXtoneController",@"HJXborderItem",@"HJXladyTextField",@"HJXsetProfile",@"HJXdefinitionAnimation",@"HJXfactorUtil",@"HJXemployListener",@"HJXguestController",@"HJXdiscussionRender",@"HJXplaceException",@"HJXeconomyCallback",@"HJXcomplaintManager",@"HJXlightNotification",@"HJXbaseVC",@"HJXprincipleTracker",@"HJXambitionHandler",@"HJXrestUtil",@"HJXsuitUtil",@"HJXmaximumDataSource",@"HJXoriginalUtil",@"HJXjudgeStack",@"HJXsirFactory",@"HJXaccidentGenerator",@"HJXplayError",@"HJXequivalentExecutor",@"HJXscreenTracker",@"HJXexplanationControl",@"HJXqualityEvent",@"HJXnewspaperView",@"HJXpresentationSession",@"HJXcreamView",@"HJXsprayObserver",@"HJXblindSettings",@"HJXwifeHandler",@"HJXpieNode",@"HJXbuddyController",@"HJXspareModel",@"HJXreadingDatabase",@"HJXfruitOperation",@"HJXspecialistExecutor",@"HJXwheelModel",@"HJXhealthTimer",];
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
      }}
+ (NSArray <NSString *>*)getAllMethods:(id)obj{
    unsigned int methodCount =0;
    Method* methodList = class_copyMethodList([obj class],&methodCount);
    NSMutableArray *methodsArray = [NSMutableArray arrayWithCapacity:methodCount];
    for(int i = 0; i < methodCount; i++){
     Method temp = methodList[i];
     method_getImplementation(temp);
     method_getName(temp);
const char* name_s =sel_getName(method_getName(temp));
int arguments = method_getNumberOfArguments(temp);
     const char* encoding =method_getTypeEncoding(temp);
          if (![[NSString stringWithUTF8String:name_s] containsString:@"set"]) {
 //不要setter
   
       [methodsArray addObject:[NSString stringWithUTF8String:name_s]];
    }
     }
     free(methodList);
    return methodsArray;
}

+ (NSString*)removeLastOneChar:(NSString*)origin{
    NSString* cutted = [origin length] > 0 ? [origin substringToIndex:([origin length]-2)] : origin;
    return cutted;
}
@end