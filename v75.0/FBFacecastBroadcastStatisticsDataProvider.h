/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBFacecastBroadcastStatisticsDataProvider <NSObject>
@property (nonatomic,readonly) BOOL networkBecameWeak; 
@property (nonatomic,readonly) BOOL networkRecoveredFromWeak; 
@property (assign,nonatomic) long long numCurrentViewers; 
@required
-(id)videoIngestionLoggingInfoForBroadcastStats:(shared_ptr<FBVideoBroadcastSessionStats>*)arg1;
-(long long)numCurrentViewers;
-(SCD_Struct_FB100*)lastRecordedAudioTimestamp;
-(FBVideoBroadcastSessionStats*)broadcastStats;
-(double)networkLatencyInSeconds;
-(id)videoIngestionLoggingInfo;
-(BOOL)networkBecameWeak;
-(BOOL)networkRecoveredFromWeak;
-(void)setNumCurrentViewers:(long long)arg1;

@end

