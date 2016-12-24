/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBFullscreenEnabledVideoPlayerComponent, FBChannelEnabledVideoPlayerComponent, FBLivestreamVideoPlayerComponent, FBMemVideo, FBFeedToolbox, NSString;

@interface FBFeedVideoThumbnailComponent : CKCompositeComponent {

	FBFullscreenEnabledVideoPlayerComponent* _fullscreenVideoComponent;
	FBChannelEnabledVideoPlayerComponent* _channelVideoComponent;
	FBLivestreamVideoPlayerComponent* _liveVideoComponent;
	CKTypedComponentAction<> _openChannelAction;
	FBMemVideo* _video;
	FBFeedToolbox* _toolbox;
	NSString* _openChannelTag;
	CKTypedComponentAction<> _didTapPlayAction;

}

@property (nonatomic,readonly) FBMemVideo * video;                                     //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * toolbox;                                //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> didTapPlayAction;              //@synthesize didTapPlayAction=_didTapPlayAction - In the implementation block
@property (nonatomic,copy) NSString * openChannelTag;                                  //@synthesize openChannelTag=_openChannelTag - In the implementation block
+(id)newWithVideo:(id)arg1 thumbnailConfig:(const FBFeedVideoThumbnailComponentConfig*)arg2 parent:(id)arg3 size:(const CKComponentSize*)arg4 playerOrigin:(id)arg5 playerSubOrigin:(id)arg6 toolbox:(id)arg7 ;
+(id)initialState;
-(FBFeedToolbox *)toolbox;
-(void)enterFullscreen;
-(NSString *)openChannelTag;
-(CKTypedComponentAction<>)didTapPlayAction;
-(void)setOpenChannelTag:(NSString *)arg1 ;
-(FBMemVideo *)video;
@end
