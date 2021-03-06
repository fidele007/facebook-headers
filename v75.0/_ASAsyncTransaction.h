/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Facebook/Facebook-Structs.h>
@class NSMutableArray, NSObject;

@interface _ASAsyncTransaction : NSObject {

	Group* _group;
	NSMutableArray* _operations;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _completionBlock;
	unsigned long long _state;

}

@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,copy,readonly) id completionBlock;                                        //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                                       //@synthesize state=_state - In the implementation block
-(id)initWithCallbackQueue:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)addAsyncOperationWithBlock:(/*^block*/id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addAsyncOperationWithBlock:(/*^block*/id)arg1 priority:(long long)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_ensureTransactionData;
-(void)addOperationWithBlock:(/*^block*/id)arg1 priority:(long long)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)addOperationWithBlock:(/*^block*/id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cancel;
-(void)dealloc;
-(id)description;
-(unsigned long long)state;
-(id)completionBlock;
-(void)commit;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)completeTransaction;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(void)waitUntilComplete;
@end

