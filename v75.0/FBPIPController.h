/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBPIPController.h>

@protocol FBPIPDelegate;
@class UIView, UIPanGestureRecognizer, UITapGestureRecognizer, UIWindow, FBPIPWrapperView, FBSoundController, NSString;

@interface FBPIPController : NSObject <FBPIPController> {

	UIView* _PIPView;
	UIPanGestureRecognizer* _panRecognizer;
	UITapGestureRecognizer* _tapRecognizer;
	UIWindow* _window;
	unsigned long long _beganTouches;
	unsigned long long _state;
	FBPIPWrapperView* _PIPWrapperView;
	FBSoundController* _soundController;
	id<FBPIPDelegate> _delegate;
	BOOL _smartSizing;
	BOOL _tapToEnterFullscreenEnabled;

}

@property (assign,nonatomic) BOOL tapToEnterFullscreenEnabled;              //@synthesize tapToEnterFullscreenEnabled=_tapToEnterFullscreenEnabled - In the implementation block
@property (nonatomic,readonly) UIView * PIPView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)startPIP;
-(void)endPIP;
-(void)setupPIPView:(id)arg1 soundController:(id)arg2 smartSizing:(BOOL)arg3 delegate:(id)arg4 ;
-(void)setTapToEnterFullscreenEnabled:(BOOL)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 dismissReason:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_cleanBeforeDismiss;
-(void)updateSize:(CGSize)arg1 ;
-(void)updatePIPView:(id)arg1 ;
-(void)_userWillBeLoggedOut;
-(void)_enterDismissStateAnimated:(BOOL)arg1 velocity:(CGPoint)arg2 dismissReason:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setupMiniWrapperView;
-(void)_enterPlayState;
-(void)_enterFinishState;
-(void)updateUsableScreenFrame:(CGRect)arg1 ;
-(void)_removeRecognizers;
-(void)_cleanForFinish;
-(void)_hookupGestures;
-(void)_dismissAnimation:(/*^block*/id)arg1 withVelocity:(CGPoint)arg2 ;
-(void)_pickupView:(id)arg1 ;
-(void)_dropView:(id)arg1 withVelocity:(CGPoint)arg2 allowFreeMove:(BOOL)arg3 ;
-(void)_enterFullScreenState;
-(void)presentPIPView;
-(UIView *)PIPView;
-(BOOL)tapToEnterFullscreenEnabled;
-(void)dealloc;
-(id)init;
-(BOOL)running;
-(void)_handlePan:(id)arg1 ;
-(void)_handleTap:(id)arg1 ;
@end

