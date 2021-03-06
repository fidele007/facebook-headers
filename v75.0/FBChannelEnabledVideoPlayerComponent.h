/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBVideoPlayerComponentContaining.h>

@protocol FBVideoPlaybackLoggingDataProviderInitializer;
@class NSArray, FBVideoPlayerComponent, FBInstreamAdEnabledVideoPlayerComponent, FBUserSession, FBMemFeedStory, FBMemVideo, FBFeedToolbox, NSString;

@interface FBChannelEnabledVideoPlayerComponent : CKCompositeComponent <FBVideoPlayerComponentContaining> {

	CKTypedComponentAction<> _didTapPlayAction;
	/*^block*/id _onDismissCompletionBlock;
	/*^block*/id _onVideoStartedPlaying;
	CKTypedComponentAction<> _openChannelAction;
	NSArray* _trackingCodes;
	FBVideoPlayerComponent* _videoPlayerComponent;
	FBInstreamAdEnabledVideoPlayerComponent* _intreamAdEnabledVideoPlayerComponent;
	FBUserSession* _session;
	BOOL _allowWatchMoreEndScreenCTA;
	BOOL _shouldShowFullscreenOnLandscapeRotation;
	FBMemFeedStory* _parent;
	id<FBVideoPlaybackLoggingDataProviderInitializer> _loggingProviderInitializer;
	FBMemVideo* _video;
	unsigned long long _videoPlayerOptions;
	FBFeedToolbox* _toolbox;
	NSString* _playerOrigin;
	NSString* _playerSubOrigin;

}

@property (nonatomic,readonly) id<FBVideoPlaybackLoggingDataProviderInitializer> loggingProviderInitializer;              //@synthesize loggingProviderInitializer=_loggingProviderInitializer - In the implementation block
@property (nonatomic,readonly) FBMemVideo * video;                                                                        //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) unsigned long long videoPlayerOptions;                                                     //@synthesize videoPlayerOptions=_videoPlayerOptions - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * toolbox;                                                                   //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) BOOL allowWatchMoreEndScreenCTA;                                                           //@synthesize allowWatchMoreEndScreenCTA=_allowWatchMoreEndScreenCTA - In the implementation block
@property (nonatomic,copy,readonly) NSString * playerOrigin;                                                              //@synthesize playerOrigin=_playerOrigin - In the implementation block
@property (nonatomic,copy,readonly) NSString * playerSubOrigin;                                                           //@synthesize playerSubOrigin=_playerSubOrigin - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowFullscreenOnLandscapeRotation;                                              //@synthesize shouldShowFullscreenOnLandscapeRotation=_shouldShowFullscreenOnLandscapeRotation - In the implementation block
@property (nonatomic,readonly) FBMemFeedStory * parent;                                                                   //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) FBVideoPlayerComponent * videoPlayerComponent;                                             //@synthesize videoPlayerComponent=_videoPlayerComponent - In the implementation block
+(id)newWithVideo:(id)arg1 parent:(id)arg2 videoPlayerOptions:(unsigned long long)arg3 channelComponentConfig:(const FBChannelEnabledVideoPlayerComponentConfig*)arg4 size:(const CKComponentSize*)arg5 playerOrigin:(id)arg6 playerSubOrigin:(id)arg7 toolbox:(id)arg8 ;
-(FBFeedToolbox *)toolbox;
-(void)enterFullscreen;
-(FBVideoPlayerComponent *)videoPlayerComponent;
-(void)enterChannelWithExistingChannel:(id)arg1 ;
-(NSString *)playerOrigin;
-(NSString *)playerSubOrigin;
-(id<FBVideoPlaybackLoggingDataProviderInitializer>)loggingProviderInitializer;
-(void)enterChannelWithStoryConfigs:(id)arg1 ;
-(void)enterChannel:(id)arg1 withStoryConfigs:(id)arg2 storySetID:(id)arg3 isSinglePublisher:(BOOL)arg4 ;
-(unsigned long long)videoPlayerOptions;
-(void)_enterChannel:(id)arg1 ;
-(id)_channelsViewController:(id)arg1 displayController:(id)arg2 channel:(id)arg3 storyConfigs:(id)arg4 storySetID:(id)arg5 isSinglePublisher:(BOOL)arg6 ;
-(id)_channelToOpen;
-(id)fullScreenViewControllerWithWrapper:(id)arg1 ;
-(void)_startPlaying;
-(BOOL)allowWatchMoreEndScreenCTA;
-(BOOL)shouldShowFullscreenOnLandscapeRotation;
-(FBMemFeedStory *)parent;
-(FBMemVideo *)video;
@end

