/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAudioSessionManagerClient.h>

@class FBVideoSoundTogglePluginSettingStore, NSString;

@interface FBFeedAudioSessionClient : NSObject <FBAudioSessionManagerClient> {

	FBVideoSoundTogglePluginSettingStore* _togglePluginSettingStore;

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
-(void)finishInterruptionAndResume:(BOOL)arg1 ;
-(unsigned long long)outputCoordinationMode;
-(void)_activateFeedAudioClient:(id)arg1 ;
-(id)initWithTogglePluginSettingStore:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)activate;
-(void)beginInterruption;
@end

