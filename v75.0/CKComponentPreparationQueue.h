/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:02 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Facebook/Facebook-Structs.h>
@class NSObject, CKComponentPreparationQueueListenerAnnouncer;

@interface CKComponentPreparationQueue : NSObject {

	NSObject*<OS_dispatch_queue> _concurrentQueue;
	NSObject*<OS_dispatch_queue> _inputQueue;
	unsigned long long _queueWidth;
	BOOL _synchronouslyPrepareChangesets;
	Mutex _lock;
	CKComponentPreparationQueueListenerAnnouncer* _announcer;

}
+(id)prepare:(id)arg1 ;
-(void)setSynchronouslyPrepareChangesets_DO_NOT_USE:(BOOL)arg1 ;
-(id)initWithQueueWidth:(long long)arg1 ;
-(void)enqueueBatch:(const CKComponentPreparationInputBatch*)arg1 block:(/*^block*/id)arg2 ;
-(void)_processSyncJob:(id)arg1 ;
-(id)init;
-(void)_processJob:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
