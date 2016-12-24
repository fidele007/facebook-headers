/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMUPlaybackHelperProtocol.h>
#import <Facebook/FBMUAnalyticsHelperProtocol.h>
#import <Facebook/FBMusicPlayerListener.h>

@class FBUserSession, NSDictionary, NSMutableArray, FBMusicSong, FBSystemAVMusicPlayer, NSString;

@interface FBMUSoundCloudHelper : NSObject <FBMUPlaybackHelperProtocol, FBMUAnalyticsHelperProtocol, FBMusicPlayerListener> {

	FBUserSession* _session;
	NSDictionary* _beaconURLs;
	NSMutableArray* _loggingWaitingList;
	double _mostRecentCheckpointTime;
	double _checkPointOffset;
	FBMusicSong* _playingSong;
	double _currentPlaybackTime;
	FBSystemAVMusicPlayer* _player;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)logEvent:(id)arg1 module:(id)arg2 extraData:(id)arg3 ;
-(void)musicPlayer:(id)arg1 isPlaying:(id)arg2 currentTime:(double)arg3 duration:(double)arg4 ;
-(void)musicPlayer:(id)arg1 stoppedPlaying:(id)arg2 ;
-(void)musicPlayer:(id)arg1 completedPlaying:(id)arg2 ;
-(void)musicPlayer:(id)arg1 failedPlaying:(id)arg2 withError:(id)arg3 ;
-(void)musicPlayer:(id)arg1 seekedToTime:(double)arg2 ;
-(void)playSong:(id)arg1 withStartTime:(double)arg2 andPlayer:(id)arg3 ;
-(BOOL)replaySongIfNecessary:(id)arg1 withStartTime:(double)arg2 andPlayer:(id)arg3 ;
-(void)_handleSucceededURLRequestResponse:(id)arg1 withSong:(id)arg2 startTime:(double)arg3 andPlayer:(id)arg4 ;
-(void)_fetchURLsWithSecureURL:(id)arg1 andSuccessBlock:(/*^block*/id)arg2 ;
-(id)_deserializeAndSaveData:(id)arg1 ;
-(void)_cleanupLoggingWaitingList;
-(id)_playableURLFromData:(id)arg1 ;
-(void)dealloc;
-(id)initWithSession:(id)arg1 ;
@end

