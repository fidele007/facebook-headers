/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMetricsTrackerDelegate;
@class NSMutableDictionary, FBMetricsTrackerThresholds;

@interface FBMetricsTracker : NSObject {

	/*^block*/id _currentTimeBlock;
	NSMutableDictionary* _keysWithTimes;
	FBMetricsTrackerThresholds* _thresholds;
	id<FBMetricsTrackerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMetricsTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)updateMetricsForKey:(id)arg1 metric:(double)arg2 valueForDelegate:(id)arg3 ;
-(id)initWithMetricThresholds:(id)arg1 ;
-(id)initWithMetricThresholds:(id)arg1 currentTimeBlock:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<FBMetricsTrackerDelegate>)arg1 ;
-(id<FBMetricsTrackerDelegate>)delegate;
@end

