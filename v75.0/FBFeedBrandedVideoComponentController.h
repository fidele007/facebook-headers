/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKComponentController.h>
#import <Facebook/FBVideoPlaybackEventListener.h>

@class FBVideoPlaybackController, FBFeedBrandedVideoComponent, NSString;

@interface FBFeedBrandedVideoComponentController : CKComponentController <FBVideoPlaybackEventListener> {

	BOOL _isVideoLoaded;
	FBVideoPlaybackController* _playbackController;

}

@property (nonatomic,readonly) FBFeedBrandedVideoComponent * component; 
@property (nonatomic,readonly) FBVideoPlaybackController * playbackController;              //@synthesize playbackController=_playbackController - In the implementation block
@property (nonatomic,readonly) BOOL isVideoLoaded;                                          //@synthesize isVideoLoaded=_isVideoLoaded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didMount;
-(void)willUnmount;
-(void)videoPlaybackControllerDidStartPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidPausePlayback:(id)arg1 ;
-(FBVideoPlaybackController *)playbackController;
-(id)_videoPlaceholderView;
-(void)_clearPlaceholderView;
-(BOOL)isVideoLoaded;
@end

