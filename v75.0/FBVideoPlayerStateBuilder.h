/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBVideoPlayerStateBuilder : NSObject {

	BOOL _hasDisplayed;
	double _time;
	BOOL _didPlayToEnd;
	BOOL _manuallyPaused;
	BOOL _isOnEndScreen;
	BOOL _didLogStartedPlaying;
	BOOL _hasShownSoundPrompt;
	double _scrollBlockingTotalTimePlayed;
	double _scrollBlockingLastTimePlayed;

}
+(id)videoPlayerStateFromExistingVideoPlayerState:(id)arg1 ;
+(id)videoPlayerState;
-(id)withTime:(double)arg1 ;
-(id)withDidPlayToEnd:(BOOL)arg1 ;
-(id)withIsOnEndScreen:(BOOL)arg1 ;
-(id)withManuallyPaused:(BOOL)arg1 ;
-(id)withHasDisplayed:(BOOL)arg1 ;
-(id)withDidLogStartedPlaying:(BOOL)arg1 ;
-(id)withHasShownSoundPrompt:(BOOL)arg1 ;
-(id)withScrollBlockingTotalTimePlayed:(double)arg1 ;
-(id)withScrollBlockingLastTimePlayed:(double)arg1 ;
-(id)build;
@end

