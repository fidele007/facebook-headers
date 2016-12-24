/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FNFSynchronousPlayerDelegate.h>
#import <Facebook/FNFAVPlayer.h>

@protocol FNFAVPlayerItem;
@class NSError, FNFSynchronousPlayer, FNFAudioQueue, NSString;

@interface FNFPlayer : NSObject <FNFSynchronousPlayerDelegate, FNFAVPlayer> {

	FNFSynchronousPlayer* _synchronousPlayer;
	FNFAudioQueue* _defaultAudioEngine;
	long long _status;
	id<FNFAVPlayerItem> _currentItem;
	float _rate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float rate; 
@property (assign,getter=isMuted,nonatomic) BOOL muted; 
@property (assign,nonatomic) float volume; 
@property (assign,nonatomic) BOOL allowsExternalPlayback; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
-(id)initWithDisplayEngine:(id)arg1 ;
-(SCD_Struct_FB100)lastRequestedStartTime;
-(void)setVolume:(float)arg1 rampTime:(float)arg2 ;
-(void)addLevelMeterCallback:(/*^block*/id)arg1 timeInterval:(SCD_Struct_FB100)arg2 ;
-(void)removeLevelMeterCallback;
-(SCD_Struct_FB100)lastStartingTime;
-(void)setAudioEngine:(id)arg1 ;
-(void)_applicationDidBecomeActive;
-(void)statusUpdated:(long long)arg1 ;
-(void)currentItemUpdated:(id)arg1 ;
-(void)rateUpdated:(float)arg1 ;
-(id)layer;
-(void)dealloc;
-(id)currentItem;
-(void)pause;
-(long long)status;
-(void)_applicationWillResignActive;
-(void)setRenderer:(id)arg1 ;
-(void)seekToTime:(SCD_Struct_FB100)arg1 ;
-(BOOL)allowsExternalPlayback;
-(void)setRate:(float)arg1 ;
-(SCD_Struct_FB100)currentTime;
-(NSError *)error;
-(void)removeTimeObserver:(id)arg1 ;
-(void)replaceCurrentItemWithPlayerItem:(id)arg1 ;
-(id)addPeriodicTimeObserverForInterval:(SCD_Struct_FB100)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(float)rate;
-(void)play;
-(void)seekToTime:(SCD_Struct_FB100)arg1 toleranceBefore:(SCD_Struct_FB100)arg2 toleranceAfter:(SCD_Struct_FB100)arg3 ;
-(void)seekToTime:(SCD_Struct_FB100)arg1 toleranceBefore:(SCD_Struct_FB100)arg2 toleranceAfter:(SCD_Struct_FB100)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)seekToTime:(SCD_Struct_FB100)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setAllowsExternalPlayback:(BOOL)arg1 ;
-(BOOL)isMuted;
-(void)setMuted:(BOOL)arg1 ;
-(void)setVolume:(float)arg1 ;
-(float)volume;
@end

