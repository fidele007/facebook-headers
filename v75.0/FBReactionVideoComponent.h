/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBMemVideo, FBFullscreenEnabledVideoPlayerComponent, FBReactionVideoToolbox;

@interface FBReactionVideoComponent : CKCompositeComponent {

	FBMemVideo* _video;
	FBFullscreenEnabledVideoPlayerComponent* _fullscreenComponent;
	FBReactionVideoToolbox* _videoToolbox;

}

@property (nonatomic,readonly) FBMemVideo * video;                                                         //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) FBFullscreenEnabledVideoPlayerComponent * fullscreenComponent;              //@synthesize fullscreenComponent=_fullscreenComponent - In the implementation block
@property (nonatomic,readonly) FBReactionVideoToolbox * videoToolbox;                                      //@synthesize videoToolbox=_videoToolbox - In the implementation block
+(id)newWithVideo:(id)arg1 parent:(id)arg2 videoPlayerOptions:(unsigned long long)arg3 size:(const CKComponentSize*)arg4 didTapPlayAction:(CKTypedComponentAction<>)arg5 toolbox:(id)arg6 playerSubOrigin:(id)arg7 ;
-(FBReactionVideoToolbox *)videoToolbox;
-(FBFullscreenEnabledVideoPlayerComponent *)fullscreenComponent;
-(FBMemVideo *)video;
@end
