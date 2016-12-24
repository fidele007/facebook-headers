/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, FBFeedSampledImpressionSnapshotterDelegate;
@class NSObject;

@interface FBFeedSampledImpressionSnapshotter : NSObject {

	BOOL _isPaused;
	NSObject*<OS_dispatch_source> _timer;
	double _lastSnapshotTimestamp;
	double _throttleDelay;
	id<FBFeedSampledImpressionSnapshotterDelegate> _delegate;

}

@property (nonatomic,readonly) double throttleDelay;                                                      //@synthesize throttleDelay=_throttleDelay - In the implementation block
@property (assign,nonatomic,__weak) id<FBFeedSampledImpressionSnapshotterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)scrollViewDidScroll;
-(void)scrollViewDidStop;
-(id)initWithThrottleDelay:(double)arg1 ;
-(double)throttleDelay;
-(void)setDelegate:(id<FBFeedSampledImpressionSnapshotterDelegate>)arg1 ;
-(id<FBFeedSampledImpressionSnapshotterDelegate>)delegate;
-(void)resume;
-(void)pause;
@end

