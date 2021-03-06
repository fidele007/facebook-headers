/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Facebook/Facebook-Structs.h>
@class NSObject, FBDataUsageCounter, FBVideoWatchingTracker, NSMutableDictionary, FBVideoNetworkerVideoStats;

@interface FBVideoNetworkerDataAnalytics : NSObject {

	NSObject*<OS_dispatch_queue> _analyticsQueue;
	FBDataUsageCounter* _dataUsageCounter;
	FBVideoWatchingTracker* _tracker;
	NSMutableDictionary* _prefetchDataLengths;
	FBVideoNetworkerVideoStats* _videoStats;

}
-(void)fetchUsageStats:(/*^block*/id)arg1 ;
-(void)immediatelyLogDailyUsage;
-(void)updateVideoWatchingTrackerForVideoID:(id)arg1 metadata:(SCD_Struct_FB579)arg2 startingTime:(double)arg3 isHD:(BOOL)arg4 ;
-(void)increaseTimeWatchedBy:(double)arg1 videoID:(id)arg2 metadata:(SCD_Struct_FB579)arg3 shouldIncreaseWatchedData:(BOOL)arg4 isHD:(BOOL)arg5 ;
-(void)addDownloadedBytes:(unsigned long long)arg1 toVideoID:(id)arg2 blobID:(id)arg3 isPrefetching:(BOOL)arg4 isFetchingFirstChunk:(BOOL)arg5 ;
-(void)updatePrefetchedBytes:(unsigned long long)arg1 toVideoID:(id)arg2 ;
-(id)_videoTrackerFileURL;
-(id)_dataUsageFileURL;
-(void)addDownloadedBytes:(unsigned long long)arg1 toVideoID:(id)arg2 ;
-(id)init;
-(void)reset;
-(id)initWithOptions:(unsigned long long)arg1 ;
@end

