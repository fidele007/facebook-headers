/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBEventListener.h>

@protocol FBApplicationSendEventHookable, FBInteractionLagLogger;
@class UIView, UIApplication, FBLogarithmicBucketizer, NSString;

@interface FBInteractionLagTracker : NSObject <FBEventListener> {

	UIView* _view;
	UIApplication*<FBApplicationSendEventHookable> _application;
	id<FBInteractionLagLogger> _logger;
	FBLogarithmicBucketizer* _stats;
	unsigned long long _option;
	CFRunLoopObserverRef _runloopObserver;
	vector<double, std::__1::allocator<double> >* _touchEventTimestamps;
	NSString* _eventName;
	/*^block*/id _timeBlock;

}

@property (nonatomic,copy) id timeBlock;                            //@synthesize timeBlock=_timeBlock - In the implementation block
@property (nonatomic,retain) UIView * view;                         //@synthesize view=_view - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willSendEvent:(id)arg1 ;
-(void)didSendEvent:(id)arg1 ;
-(id)initWithApplication:(id)arg1 logger:(id)arg2 option:(unsigned long long)arg3 eventName:(id)arg4 stats:(id)arg5 timeBlock:(/*^block*/id)arg6 ;
-(void)_addApplicationEventHook;
-(void)_startRunloopObserver;
-(void)_removeApplicationEventHook;
-(void)_stopRunloopObserver;
-(void)_report;
-(void)_prepareRunloopObserverIfNeeded;
-(id)initWithApplication:(id)arg1 logger:(id)arg2 option:(unsigned long long)arg3 eventName:(id)arg4 ;
-(void)startForView:(id)arg1 ;
-(id)timeBlock;
-(void)setTimeBlock:(id)arg1 ;
-(void)dealloc;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(void)stop;
@end

