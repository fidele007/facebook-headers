/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBImageProcessingSubPipe.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, FBImageProcessingOpenGLExecutionContext;

@interface FBImageProcessingOpenGLPipe : FBImageProcessingSubPipe {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	FBImageProcessingOpenGLExecutionContext* _executionContext;

}
-(void)_dispatchRequest:(id)arg1 ;
-(void)waitUntilOpenGLRequestsAreFinished;
-(void)scheduleRequestQueueAfterAddingRequest:(id)arg1 ;
-(id)init;
@end

