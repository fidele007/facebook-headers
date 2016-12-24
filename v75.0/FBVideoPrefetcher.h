/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBVideoPrefetcher : NSObject
+(BOOL)prefetchIfAllowed:(id)arg1 session:(id)arg2 shouldAutoPlay:(BOOL)arg3 useQueue:(BOOL)arg4 definition:(long long)arg5 forScenePath:(id)arg6 error:(id*)arg7 ;
+(void)prefetchIfAllowed:(id)arg1 SDPlaybackURL:(id)arg2 HDPlaybackURL:(id)arg3 sdBitRate:(int)arg4 sdAtomSize:(int)arg5 hdBitRate:(int)arg6 hdAtomSize:(int)arg7 session:(id)arg8 shouldAutoPlay:(BOOL)arg9 useQueue:(BOOL)arg10 definition:(long long)arg11 forScenePath:(id)arg12 ;
+(long long)_sizeFromSeconds:(long long)arg1 atomSize:(int)arg2 bitRate:(int)arg3 defaultSize:(long long)arg4 ;
+(id)_selectVideoTrackForMpd:(id)arg1 session:(id)arg2 videoID:(id)arg3 videoNetworker:(id)arg4 ;
+(void)_prefetchVodDashTrack:(id)arg1 videoID:(id)arg2 roundingOffset:(unsigned long long)arg3 session:(id)arg4 forScenePath:(id)arg5 useQueue:(BOOL)arg6 ;
+(void)_prefetchLiveDashTrack:(id)arg1 videoID:(id)arg2 session:(id)arg3 forScenePath:(id)arg4 useQueue:(BOOL)arg5 ;
+(BOOL)_prefetchDashIfAllowedForVideo:(id)arg1 session:(id)arg2 shouldAutoPlay:(BOOL)arg3 videoNetworker:(id)arg4 forScenePath:(id)arg5 useQueue:(BOOL)arg6 error:(id*)arg7 ;
+(void)setDisableVideoPrefetching:(BOOL)arg1 ;
@end

