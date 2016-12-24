/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FNFPlayerDisplayEngineDelegate.h>

@protocol FNFAssetForPlayer, FNFPlayerAudioEngine, FNFPlayerDisplayEngine, FNFClock, OS_dispatch_queue, FNFSynchronousPlayerDelegate;
@class NSObject, NSError;

@interface FNFSynchronousPlayer : NSObject <FNFPlayerDisplayEngineDelegate> {

	id<FNFAssetForPlayer> _playerAsset;
	id<FNFPlayerAudioEngine> _audioEngine;
	id<FNFPlayerDisplayEngine> _layer;
	id<FNFClock> _clock;
	NSObject*<OS_dispatch_queue> _runningQueue;
	FNFPlayerState _playerState;
	long long _status;
	NSError* _playerError;
	BOOL _muted;
	float _volume;
	float _volumeRampTime;
	/*^block*/id _audioLevelCallback;
	id<FNFSynchronousPlayerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FNFSynchronousPlayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSError * error; 
-(void)_updateStatus:(long long)arg1 ;
-(SCD_Struct_FB100)lastRequestedStartTime;
-(void)setVolume:(float)arg1 rampTime:(float)arg2 ;
-(void)addLevelMeterCallback:(/*^block*/id)arg1 timeInterval:(SCD_Struct_FB100)arg2 ;
-(void)removeLevelMeterCallback;
-(SCD_Struct_FB100)lastStartingTime;
-(void)setAudioEngine:(id)arg1 ;
-(id)initWithDisplayEngine:(id)arg1 audioEngine:(id)arg2 clock:(id)arg3 runningQueue:(id)arg4 muted:(BOOL)arg5 ;
-(id)createPeriodicTimeObserverForInterval:(SCD_Struct_FB100)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)addTimeObserver:(id)arg1 ;
-(id)queueForLayerUpdates;
-(void)layerUpdatedWithError:(id)arg1 ;
-(BOOL)_readyToPlay;
-(void)_setupAudio;
-(id)_addStallTimer;
-(void)_resumePlayback;
-(id)_addPlaybackTimerForAsset;
-(id)_addDurationTimerForAsset;
-(void)_pause:(int)arg1 ;
-(void)_updateTimersOnPause;
-(void)_pausePlayback:(int)arg1 ;
-(void)_setupLayer;
-(void)_startVideo;
-(void)_seekToTime:(SCD_Struct_FB100)arg1 frameSeekOn:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_manageStallState;
-(id)_addSampleBufferFlushTimerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_syncVolume;
-(BOOL)_videoHasAudioTrack;
-(void)_adjustAudioFrameToCurrentPlaybackTime;
-(void)_reenableLevelMeteringIfNeeded;
-(void)_levelMeterCallback;
-(BOOL)_videoIsAudioActive;
-(void)_playbackTimeListenerForAsset:(SCD_Struct_FB100)arg1 ;
-(void)_playbackFinishedTimeForAsset:(SCD_Struct_FB100)arg1 ;
-(void)_flushSampleBuffersDuringFrameSeekWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_videoLayerEnqueueFrameCallback;
-(BOOL)_videoBufferLengthIsGreaterThan:(SCD_Struct_FB100)arg1 ;
-(BOOL)_audioBufferLengthIsGreaterThan:(SCD_Struct_FB100)arg1 ;
-(BOOL)_enqueuedTime:(SCD_Struct_FB100)arg1 isGreaterThanLength:(SCD_Struct_FB100)arg2 ;
-(void)_audioEngineErrorCallback:(id)arg1 ;
-(void)_markDisplayImmediately:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)_audioPutDataIntoBufferCallback:(AudioQueueBuffer*)arg1 timestamp:(AudioTimeStamp*)arg2 framePts:(SCD_Struct_FB100*)arg3 ;
-(void)_enqueueBuffer;
-(void)_videoLayerEnqueueDecompressedFrameCallback;
-(id)layer;
-(void)setDelegate:(id<FNFSynchronousPlayerDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<FNFSynchronousPlayerDelegate>)delegate;
-(id)currentItem;
-(void)applicationDidBecomeActive;
-(void)applicationWillResignActive;
-(void)pause;
-(long long)status;
-(void)setRenderer:(id)arg1 ;
-(void)setRate:(float)arg1 ;
-(SCD_Struct_FB100)currentTime;
-(NSError *)error;
-(void)removeTimeObserver:(id)arg1 ;
-(void)replaceCurrentItemWithPlayerItem:(id)arg1 ;
-(float)rate;
-(void)play;
-(void)seekToTime:(SCD_Struct_FB100)arg1 toleranceBefore:(SCD_Struct_FB100)arg2 toleranceAfter:(SCD_Struct_FB100)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)seekToTime:(SCD_Struct_FB100)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isMuted;
-(void)setMuted:(BOOL)arg1 ;
-(void)setVolume:(float)arg1 ;
-(float)volume;
@end

