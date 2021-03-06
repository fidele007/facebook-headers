/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSMutableArray, FBUserSession, FBCache;

@interface FBSoundController : NSObject {

	NSDictionary* _soundNameToResourcePathMap;
	NSDictionary* _soundNameToSoundVolumeBlockMap;
	NSMutableArray* _soundNamesBeingPreloaded;
	FBUserSession* _session;
	long long _gatingPolicy;
	FBCache* _soundEffectsCache;
	unsigned long long _soundsEnabledGroup;

}

@property (nonatomic,copy) NSDictionary * soundNameToResourcePathMap; 
@property (nonatomic,copy) NSDictionary * soundNameToSoundVolumeBlockMap; 
@property (assign,nonatomic) double defaultVolume; 
@property (nonatomic,readonly) unsigned long long soundsEnabledGroup;                  //@synthesize soundsEnabledGroup=_soundsEnabledGroup - In the implementation block
+(id)tweaksSharedInstance;
-(void)playSoundWithName:(id)arg1 ;
-(void)addSoundWithName:(id)arg1 resourcePath:(id)arg2 soundVolumeBlock:(/*^block*/id)arg3 ;
-(double)defaultVolume;
-(void)setDefaultVolume:(double)arg1 ;
-(NSDictionary *)soundNameToResourcePathMap;
-(NSDictionary *)soundNameToSoundVolumeBlockMap;
-(BOOL)soundsEnabledForPlayback;
-(void)_soundEffectForSoundName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_fileURLForSoundName:(id)arg1 ;
-(double)_volumeForSoundName:(id)arg1 ;
-(void)_createAndCacheVolumeSensitiveSoundFileForName:(id)arg1 sourceSoundFileURL:(id)arg2 volume:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)playSoundWithName:(id)arg1 volume:(double)arg2 ;
-(id)initWithGatingPolicy:(long long)arg1 userSession:(id)arg2 ;
-(void)preloadSoundsWithNames:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSoundNameToResourcePathMap:(NSDictionary *)arg1 ;
-(void)setSoundNameToSoundVolumeBlockMap:(NSDictionary *)arg1 ;
-(unsigned long long)soundsEnabledGroup;
@end

