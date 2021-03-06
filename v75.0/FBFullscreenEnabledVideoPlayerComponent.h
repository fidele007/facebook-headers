/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBVideoPlayerComponentContaining.h>

@protocol FBSwipeableFullscreenPlaylistController, FBSwipeableFullscreenController;
@class FBVideoPlayerComponent, FBFeedToolbox, FBMemVideo, NSString, NSArray;

@interface FBFullscreenEnabledVideoPlayerComponent : CKCompositeComponent <FBVideoPlayerComponentContaining> {

	BOOL _autoFullScreenEnabled;
	BOOL _scrollBackToFeedEnabled;
	BOOL _forceAspectFillGravity;
	FBVideoPlayerComponent* _videoPlayerComponent;
	FBFeedToolbox* _toolbox;
	FBMemVideo* _video;
	NSString* _playerOrigin;
	id<FBSwipeableFullscreenPlaylistController> _swipeableFullscreenPlaylistController;
	/*^block*/id _dismissCompletionBlock;
	NSArray* _trackingCodes;
	unsigned long long _videoPlayerOptions;
	id<FBSwipeableFullscreenController> _swipeableFullScreenController;
	double _timeBeforeAutoFullScreen;
	FBFullScreenEnabledVideoPlayerComponentConfiguration _fullScreenConfiguration;

}

@property (nonatomic,readonly) FBFeedToolbox * toolbox;                                                                        //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) FBMemVideo * video;                                                                             //@synthesize video=_video - In the implementation block
@property (nonatomic,copy,readonly) NSString * playerOrigin;                                                                   //@synthesize playerOrigin=_playerOrigin - In the implementation block
@property (nonatomic,readonly) FBFullScreenEnabledVideoPlayerComponentConfiguration fullScreenConfiguration;                   //@synthesize fullScreenConfiguration=_fullScreenConfiguration - In the implementation block
@property (nonatomic,readonly) id<FBSwipeableFullscreenPlaylistController> swipeableFullscreenPlaylistController;              //@synthesize swipeableFullscreenPlaylistController=_swipeableFullscreenPlaylistController - In the implementation block
@property (nonatomic,readonly) id dismissCompletionBlock;                                                                      //@synthesize dismissCompletionBlock=_dismissCompletionBlock - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackingCodes;                                                                   //@synthesize trackingCodes=_trackingCodes - In the implementation block
@property (nonatomic,readonly) unsigned long long videoPlayerOptions;                                                          //@synthesize videoPlayerOptions=_videoPlayerOptions - In the implementation block
@property (nonatomic,retain) id<FBSwipeableFullscreenController> swipeableFullScreenController;                                //@synthesize swipeableFullScreenController=_swipeableFullScreenController - In the implementation block
@property (nonatomic,readonly) BOOL autoFullScreenEnabled;                                                                     //@synthesize autoFullScreenEnabled=_autoFullScreenEnabled - In the implementation block
@property (nonatomic,readonly) double timeBeforeAutoFullScreen;                                                                //@synthesize timeBeforeAutoFullScreen=_timeBeforeAutoFullScreen - In the implementation block
@property (nonatomic,readonly) BOOL scrollBackToFeedEnabled;                                                                   //@synthesize scrollBackToFeedEnabled=_scrollBackToFeedEnabled - In the implementation block
@property (nonatomic,readonly) BOOL forceAspectFillGravity;                                                                    //@synthesize forceAspectFillGravity=_forceAspectFillGravity - In the implementation block
@property (nonatomic,readonly) FBVideoPlayerComponent * videoPlayerComponent;                                                  //@synthesize videoPlayerComponent=_videoPlayerComponent - In the implementation block
+(id)newWithVideo:(id)arg1 fullScreenConfiguration:(const FBFullScreenEnabledVideoPlayerComponentConfiguration*)arg2 videoPlayerOptions:(unsigned long long)arg3 playerOrigin:(id)arg4 playerSubOrigin:(id)arg5 toolbox:(id)arg6 ;
-(FBFeedToolbox *)toolbox;
-(void)enterFullscreen;
-(FBVideoPlayerComponent *)videoPlayerComponent;
-(NSString *)playerOrigin;
-(NSArray *)trackingCodes;
-(unsigned long long)videoPlayerOptions;
-(BOOL)scrollBackToFeedEnabled;
-(BOOL)autoFullScreenEnabled;
-(double)timeBeforeAutoFullScreen;
-(FBFullScreenEnabledVideoPlayerComponentConfiguration)fullScreenConfiguration;
-(id<FBSwipeableFullscreenPlaylistController>)swipeableFullscreenPlaylistController;
-(id)dismissCompletionBlock;
-(id<FBSwipeableFullscreenController>)swipeableFullScreenController;
-(void)setSwipeableFullScreenController:(id<FBSwipeableFullscreenController>)arg1 ;
-(BOOL)forceAspectFillGravity;
-(FBMemVideo *)video;
@end

