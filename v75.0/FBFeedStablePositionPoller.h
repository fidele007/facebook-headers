/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBFeedStablePositionPollerDelegate;
@class NSTimer, NSMutableDictionary;

@interface FBFeedStablePositionPoller : NSObject {

	NSTimer* _timer;
	NSMutableDictionary* _items;
	id<FBFeedStablePositionPollerDelegate> _delegate;

}

@property (nonatomic,readonly) NSTimer * timer;                                                   //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic,__weak) id<FBFeedStablePositionPollerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)startPolling:(id)arg1 identifier:(id)arg2 ;
-(void)stopPolling:(id)arg1 identifier:(id)arg2 ;
-(void)setDelegate:(id<FBFeedStablePositionPollerDelegate>)arg1 ;
-(id)init;
-(id<FBFeedStablePositionPollerDelegate>)delegate;
-(NSTimer *)timer;
-(void)_timerFired;
@end

