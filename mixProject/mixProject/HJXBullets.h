




#import <Foundation/Foundation.h>

#ifndef GCD_Async_Serial
#define GCD_Async_Serial(block)\
dispatch_async(dispatch_queue_create("com.slc.queue", DISPATCH_QUEUE_SERIAL),block);
#endif

#ifndef GCD_Semaphore
#define GCD_Semaphore(num)\
dispatch_semaphore_create(num);
#endif

#ifndef GCD_Lock
#define GCD_Lock(lock)\
dispatch_semaphore_wait(lock, DISPATCH_TIME_FOREVER);
#endif

#ifndef GCD_Unlock
#define GCD_Unlock(lock)\
dispatch_semaphore_signal(lock);
#endif

@interface HJXBullets : NSObject


/**调用所有方法 - (模拟调用,fire完所有局部对象会立即被释放)*/
+ (void)fire;
@end
