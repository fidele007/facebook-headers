/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBLiveVideoBroadcastStatusPollQueueDelegate;
@class FBUserSession, NSMutableSet, FBTimer;

@interface FBLiveVideoBroadcastStatusPollQueue : NSObject {

	FBUserSession* _session;
	NSMutableSet* _queue;
	FBTimer* _timer;
	id<FBLiveVideoBroadcastStatusPollQueueDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBLiveVideoBroadcastStatusPollQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_initBatchingTimer;
-(void)_batchingTimerFired;
-(void)_pollAllItemsInQueue;
-(void)_handleResponse:(id)arg1 requestedVideos:(id)arg2 ;
-(void)_handleVideoResponse:(id)arg1 forVideoID:(id)arg2 ;
-(void)addVideoIDs:(id)arg1 ;
-(void)removePendingVideoIDs:(id)arg1 ;
-(void)setDelegate:(id<FBLiveVideoBroadcastStatusPollQueueDelegate>)arg1 ;
-(void)dealloc;
-(id<FBLiveVideoBroadcastStatusPollQueueDelegate>)delegate;
-(id)initWithSession:(id)arg1 ;
@end

