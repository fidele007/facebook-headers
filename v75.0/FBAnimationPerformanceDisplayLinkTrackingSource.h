/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAnimationPerformanceDisplayLinkTrackingSourceDelegate;
@class NSRunLoop, CADisplayLink, FBAnimationPerformanceTrackerDisplayLinkTarget;

@interface FBAnimationPerformanceDisplayLinkTrackingSource : NSObject {

	NSRunLoop* _runLoop;
	CADisplayLink* _displayLink;
	FBAnimationPerformanceTrackerDisplayLinkTarget* _displayLinkTarget;
	BOOL _displayLinkPrepared;
	BOOL _firstDisplayLinkUpdate;
	double _previousFrameTimestamp;
	id<FBAnimationPerformanceDisplayLinkTrackingSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBAnimationPerformanceDisplayLinkTrackingSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)prepareTrackingSource;
-(void)_initializeDisplayLink;
-(void)_displayLinkUpdate;
-(void)setDelegate:(id<FBAnimationPerformanceDisplayLinkTrackingSourceDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FBAnimationPerformanceDisplayLinkTrackingSourceDelegate>)delegate;
-(void)stop;
-(void)start;
-(void)_invalidateDisplayLink;
@end
