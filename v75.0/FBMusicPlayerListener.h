/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMusicPlayerListener <NSObject>
@optional
-(void)musicPlayer:(id)arg1 isReadyToPlay:(id)arg2;
-(void)musicPlayer:(id)arg1 beganBuffering:(id)arg2;
-(void)musicPlayer:(id)arg1 startedPlaying:(id)arg2 duration:(double)arg3;
-(void)musicPlayer:(id)arg1 isPlaying:(id)arg2 currentTime:(double)arg3 duration:(double)arg4;
-(void)musicPlayer:(id)arg1 pausedPlaying:(id)arg2;
-(void)musicPlayer:(id)arg1 resumedPlaying:(id)arg2 atTime:(double)arg3 duration:(double)arg4;
-(void)musicPlayer:(id)arg1 willStopPlaying:(id)arg2;
-(void)musicPlayer:(id)arg1 stoppedPlaying:(id)arg2;
-(void)musicPlayer:(id)arg1 completedPlaying:(id)arg2;
-(void)musicPlayer:(id)arg1 failedPlaying:(id)arg2 withError:(id)arg3;
-(void)musicPlayer:(id)arg1 seekedToTime:(double)arg2;

@end
