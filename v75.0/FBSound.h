/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBSoundProtocol.h>
#import <Facebook/FBAudioSessionManagerClient.h>

@class FBSoundBuffer, NSTimer, NSString;

@interface FBSound : NSObject <FBSoundProtocol, FBAudioSessionManagerClient> {

	FBSoundBuffer* _buffer;
	BOOL _attachedBuffer;
	BOOL _wasPlayingBeforeInterruption;
	unsigned _alSource;
	float _position[3];
	float _velocity[3];
	NSTimer* _velocityTimer;
	double _lastVelocityUpdateTime;
	BOOL _loop;
	BOOL _useLongFormAudioPlayback;
	BOOL _usesSystemAudioSession;
	double _volume;

}

@property (assign,nonatomic) BOOL useLongFormAudioPlayback;                            //@synthesize useLongFormAudioPlayback=_useLongFormAudioPlayback - In the implementation block
@property (assign,nonatomic) BOOL usesSystemAudioSession;                              //@synthesize usesSystemAudioSession=_usesSystemAudioSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isPlaying; 
@property (assign,nonatomic) BOOL loop;                                                //@synthesize loop=_loop - In the implementation block
@property (assign,nonatomic) double volume;                                            //@synthesize volume=_volume - In the implementation block
@property (nonatomic,readonly) unsigned long long audioDirection; 
@property (nonatomic,readonly) unsigned long long outputCoordinationMode; 
@property (nonatomic,readonly) unsigned long long outputOptions; 
@property (nonatomic,readonly) unsigned long long inputOptions; 
@property (nonatomic,readonly) unsigned long long clientPriority; 
@property (nonatomic,readonly) unsigned long long audioSessionMode; 
+(double)defaultVolume;
+(void)setDefaultVolume:(double)arg1 ;
+(id)_URLForResourceName:(id)arg1 ;
+(void)preloadSoundsWithContentsOfURLs:(id)arg1 ;
+(BOOL)_ensureOpenAL;
+(BOOL)isBufferedURL:(id)arg1 ;
+(void)preloadSoundsWithResourceNames:(id)arg1 ;
-(void)finishInterruptionAndResume:(BOOL)arg1 ;
-(unsigned long long)outputCoordinationMode;
-(unsigned long long)outputOptions;
-(void)playWithVelocity:(CGPoint)arg1 ;
-(void)_ensureBufferLoaded;
-(void)_activateAudioSession;
-(void)_updatePositionForVelocity;
-(void)setPositionX:(double)arg1 Y:(double)arg2 Z:(double)arg3 ;
-(BOOL)useLongFormAudioPlayback;
-(void)setUseLongFormAudioPlayback:(BOOL)arg1 ;
-(BOOL)usesSystemAudioSession;
-(void)setUsesSystemAudioSession:(BOOL)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)setPosition:(CGPoint)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(void)pause;
-(double)getCurrentTime;
-(void)setRelativeVolume:(double)arg1 ;
-(void)beginInterruption;
-(id)initWithResourceName:(id)arg1 ;
-(double)getDuration;
-(void)setCurrentTime:(double)arg1 ;
-(void)play;
-(BOOL)isPlaying;
-(void)setVolume:(double)arg1 ;
-(BOOL)loop;
-(void)setLoop:(BOOL)arg1 ;
-(double)volume;
@end

