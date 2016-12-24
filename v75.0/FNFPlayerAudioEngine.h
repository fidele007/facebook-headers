/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FNFPlayerAudioEngine <NSObject>
@required
-(void)setVolume:(float)arg1 rampTime:(float)arg2;
-(void)setAudioStreamBasicDescription:(AudioStreamBasicDescription)arg1 extraParameters:(id)arg2 putDataCallback:(/*^block*/id)arg3 errorCallback:(/*^block*/id)arg4 sampleFrameSize:(unsigned)arg5;
-(void)playWithStartTime:(SCD_Struct_FB100)arg1;
-(void)stopLoadingData;
-(void)resumeEnqueuingData;
-(void)enableLevelMeteringWithCallback:(/*^block*/id)arg1;
-(void)sendCurrentAudioLevelToCallback;
-(void)removeLevelMetering;
-(void)invalidate;
-(void)reset;
-(void)stop;
-(void)pause;
-(SCD_Struct_FB100*)getCurrentTime;
-(void)prepareToPlay;

@end

