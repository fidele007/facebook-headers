/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBFacecastStreamingEventHistoricalDownloader.h>

@class NSString;

@interface FBFacecastStreamingEventHistoricalTipDownloader : NSObject <FBFacecastStreamingEventHistoricalDownloader>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)futureQueryAfterTime:(double)arg1 beforeTime:(double)arg2 count:(unsigned long long)arg3 mediaID:(id)arg4 ;
+(id)backfillQueryAfterTime:(double)arg1 beforeTime:(double)arg2 count:(unsigned long long)arg3 mediaID:(id)arg4 ;
+(id)eventsFromResponse:(id)arg1 mediaId:(id)arg2 session:(id)arg3 analyticsModule:(id)arg4 ;
@end

