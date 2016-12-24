/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAudioSessionManagerClient.h>
#import <Facebook/FBVideoPlayerAudioSessionClientProtocol.h>
#import <Facebook/FBSystemAudioSessionManagerListener.h>

@class FBVideoPlaybackController, NSString;

@interface FBVideoPlayerAudioSessionClient : NSObject <FBAudioSessionManagerClient, FBVideoPlayerAudioSessionClientProtocol, FBSystemAudioSessionManagerListener> {

	BOOL _wasPlayingBeforeInterruption;
	BOOL _isListeningForRouteChanges;
	BOOL _isActiveClient;
	BOOL _shouldLogVolumeChangesWhileActive;
	float _lastKnownVolume;
	FBVideoPlaybackController* _videoController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long audioDirection; 
@property (nonatomic,readonly) unsigned long long outputCoordinationMode; 
@property (nonatomic,readonly) unsigned long long outputOptions; 
@property (nonatomic,readonly) unsigned long long inputOptions; 
@property (nonatomic,readonly) unsigned long long clientPriority; 
@property (nonatomic,readonly) unsigned long long audioSessionMode; 
-(id)initWithVideoPlaybackController:(id)arg1 ;
-(void)audioSessionManagerUpdatedAudioSession:(id)arg1 ;
-(void)audioSessionManagerNotedRouteChange:(id)arg1 ;
-(void)finishInterruptionAndResume:(BOOL)arg1 ;
-(unsigned long long)audioDirection;
-(unsigned long long)outputCoordinationMode;
-(unsigned long long)outputOptions;
-(void)deactivateAudioSession;
-(void)refreshAudioSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)listenForRouteChangesOnly;
-(void)activateAudioSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)beginInterruption;
@end

