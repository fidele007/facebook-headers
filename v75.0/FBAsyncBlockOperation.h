/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:04 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Foundation/NSOperation.h>

@interface FBAsyncBlockOperation : NSOperation {

	atomic<bool> _executing;
	atomic<bool> _finished;
	atomic<bool> _cancelled;
	/*^block*/id _operation;

}
-(BOOL)isConcurrent;
-(BOOL)isAsynchronous;
-(void)cancel;
-(void)start;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)completeOperation;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end

