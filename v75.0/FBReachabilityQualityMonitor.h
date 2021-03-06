/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBReachabilityQualityDelegate.h>
#import <Facebook/FBReachabilityListener.h>

@protocol FBReachabilityQualityMonitorDelegate, FBMovingAverage, FBMonotonicClock, OS_dispatch_queue;
@class FBRadioTechnologyFetcher, NSObject, NSString;

@interface FBReachabilityQualityMonitor : NSObject <FBReachabilityQualityDelegate, FBReachabilityListener> {

	id<FBReachabilityQualityMonitorDelegate> _delegate;
	id<FBMovingAverage> _downloadBandwidthMovingAverage;
	id<FBMovingAverage> _uploadBandwidthMovingAverage;
	id<FBMovingAverage> _latencyMovingAverage;
	id<FBMonotonicClock> _clock;
	FBRadioTechnologyFetcher* _radioTechnologyFetcher;
	shared_ptr<bool>* _initOutstanding;
	double _initialDownloadBandwidthEstimate;
	double _initialUploadBandwidthEstimate;
	double _initialLatencyEstimate;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _concurrentQueue;
	mutex _lock;

}

@property (nonatomic,readonly) FBQualityEstimate downloadBandwidthEstimate; 
@property (nonatomic,readonly) FBQualityEstimate uploadBandwidthEstimate; 
@property (nonatomic,readonly) FBQualityEstimate latencyEstimate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(id)initWithDelegate:(id)arg1 downloadBandwidthMovingAverageFactory:(/*^block*/id)arg2 uploadBandwidthMovingAverageFactory:(/*^block*/id)arg3 latencyMovingAverageFactory:(/*^block*/id)arg4 radioTechnologyFetcher:(id)arg5 notificationQueue:(id)arg6 concurrentQueue:(id)arg7 clock:(id)arg8 ;
-(FBQualityEstimate)_getDownloadBandwidthEstimate_unlocked;
-(FBQualityEstimate)_getUploadBandwidthEstimate_unlocked;
-(FBQualityEstimate)_getLatencyEstimate_unlocked;
-(double)_downloadBandwidthEstimateForReachabilityState:(unsigned long long)arg1 ;
-(double)_uploadBandwidthEstimateForReachabilityState:(unsigned long long)arg1 ;
-(double)_latencyEstimateForReachabilityState:(unsigned long long)arg1 ;
-(void)downloadBandwidthEstimate:(double)arg1 ;
-(void)uploadBandwidthEstimate:(double)arg1 ;
-(void)latencyEstimate:(double)arg1 ;
-(id)initWithDelegate:(id)arg1 downloadBandwidthMovingAverageFactory:(/*^block*/id)arg2 uploadBandwidthMovingAverageFactory:(/*^block*/id)arg3 latencyMovingAverageFactory:(/*^block*/id)arg4 notificationQueue:(id)arg5 ;
-(FBQualityEstimate)downloadBandwidthEstimate;
-(FBQualityEstimate)uploadBandwidthEstimate;
-(FBQualityEstimate)latencyEstimate;
@end

