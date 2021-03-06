/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponentController.h>
#import <Facebook/FBVideoPlaybackEventListener.h>
#import <Facebook/FBVideoAutoFullScreenControllerDelegate.h>

@class FBVideoAutoFullScreenController, NSString;

@interface FBFullscreenEnabledVideoPlayerComponentController : CKComponentController <FBVideoPlaybackEventListener, FBVideoAutoFullScreenControllerDelegate> {

	FBVideoAutoFullScreenController* _autoFullScreenController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didMount;
-(void)willUnmount;
-(void)videoPlaybackControllerDidRequestPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidStartPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidCancelPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidPausePlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidFinishPlayback:(id)arg1 ;
-(void)_sendAction:(CKTypedComponentAction<>)arg1 ;
-(FBScrollViewState)scrollViewState;
-(void)videoAutoFullscreenControllerFullscreenAction:(id)arg1 ;
-(void)_enterFullscreen:(id)arg1 ;
-(id)fullscreenVideoPlayerComponent;
-(void)_subscribeToPlaybackEvents;
-(void)_unsubscribeFromPlaybackEvents;
-(void)_enterFullscreen:(id)arg1 preserveMuteState:(BOOL)arg2 ;
-(void)_setShowsVideoPreviewImage:(BOOL)arg1 ;
-(void)_initiateThreadIfNecessary:(id)arg1 ;
-(void)_enterFullscreenWithCompletionBlock:(/*^block*/id)arg1 preserveMuteState:(BOOL)arg2 ;
-(id)_fullscreenControllerFromFactoryWithStatefulView:(id)arg1 displayController:(id)arg2 ;
-(void)_didExitFullscreen;
@end

