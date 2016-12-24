/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface FBAnalyticsWifiUploadingHelper : NSObject {

	NSObject*<OS_dispatch_queue> _processingQueue;
	double _timestampOfOldestLoggedEvent;
	double _maxDelayTimeoutForLogUpload;

}

@property (assign,nonatomic) double maxDelayTimeoutForLogUpload;              //@synthesize maxDelayTimeoutForLogUpload=_maxDelayTimeoutForLogUpload - In the implementation block
-(id)initWithQueue:(id)arg1 delayUploadTimeout:(double)arg2 ;
-(void)setTimestampForOldestUnflusedEvent:(double)arg1 ;
-(BOOL)shouldUploadEvents;
-(void)resetTimestampOfOldestEvent;
-(BOOL)isOldestEventExceedTimeout;
-(void)changeDelayUploadTimeout:(double)arg1 ;
-(double)_fetchTimestampForOldestEvent;
-(BOOL)_isWifiAvailable;
-(void)_putTimestampForOldestEvent:(double)arg1 ;
-(double)maxDelayTimeoutForLogUpload;
-(void)setMaxDelayTimeoutForLogUpload:(double)arg1 ;
@end
