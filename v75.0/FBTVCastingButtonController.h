/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCastingExperienceDelegate.h>
#import <Facebook/FBNuxStepChainControllerDelegate.h>
#import <Facebook/FBVideoPlaybackEventListener.h>

@protocol FBTVCastingButtonControllerDelegate, FBCancelable;
@class FBVideoPlaybackController, NSMutableSet, NSDate, FBNuxController, FBUserSession, FBTVCastingButton, UIView, NSString;

@interface FBTVCastingButtonController : NSObject <FBCastingExperienceDelegate, FBNuxStepChainControllerDelegate, FBVideoPlaybackEventListener> {

	BOOL _airPlayEnabled;
	BOOL _chromecastEnabled;
	FBVideoPlaybackController* _playbackController;
	id<FBTVCastingButtonControllerDelegate> _delegate;
	NSMutableSet* _devicesSet;
	id<FBCancelable> _discoveryToken;
	BOOL _eligibleForNUX;
	NSDate* _lastCheckedNUXEligibilityAt;
	FBNuxController* _nuxController;
	FBUserSession* _session;
	FBTVCastingButton* _view;

}

@property (nonatomic,readonly) UIView * view;                       //@synthesize view=_view - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_isLive;
-(void)videoPlaybackController:(id)arg1 didLoadVideoDuration:(double)arg2 ;
-(void)videoPlaybackController:(id)arg1 didUpdatePlaybackTime:(double)arg2 ;
-(void)stepChainControllerDidEnd:(id)arg1 ;
-(void)stepChainController:(id)arg1 didTransitionToStep:(id)arg2 ;
-(void)dismissAndPreventNUX;
-(id)initWithDelegate:(id)arg1 onDisplaySource:(unsigned long long)arg2 forPlaybackController:(id)arg3 session:(id)arg4 ;
-(void)enableAirPlay:(BOOL)arg1 andChromecast:(BOOL)arg2 ;
-(void)updateActivePlaybackController:(id)arg1 ;
-(BOOL)devicesAvailable;
-(void)onDeviceDiscovered:(id)arg1 ;
-(void)onDeviceDisappeared:(id)arg1 ;
-(void)_announceIfDevicesAvailable;
-(void)_didTapCastingButton;
-(void)_airPlayDevicesAvailableChanged;
-(BOOL)_chromecastDevicesAvailable;
-(void)_showNUXIfEligible;
-(BOOL)_hasWatchedEnoughForNUX;
-(BOOL)_hasEnoughLeftForNUX;
-(BOOL)_videoIsNUXEligible;
-(int)_isEligibleForNUX;
-(void)_postNUXEvent;
-(void)dealloc;
-(UIView *)view;
-(void)_addDevice:(id)arg1 ;
@end

