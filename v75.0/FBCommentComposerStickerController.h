/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBModallyPresentableItem.h>
#import <Facebook/FBMStickerStoreViewControllerDelegate.h>
#import <Facebook/FBKeyboardObserverDelegate.h>

@protocol FBNavigationCoordinator, FBCommentComposerStickerControllerDelegate;
@class UIView, UIViewController, FBUserSession, FBCommentComposerView, FBMStickerInputView, FBCommentStickerModalView, FBInputWrapperView, FBKeyboardObserver, NSString;

@interface FBCommentComposerStickerController : NSObject <FBModallyPresentableItem, FBMStickerStoreViewControllerDelegate, FBKeyboardObserverDelegate> {

	FBUserSession* _session;
	FBCommentComposerView* _commentComposerView;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBMStickerInputView* _stickerInputView;
	FBCommentStickerModalView* _stickerModalView;
	CGRect _inputViewFrame;
	FBInputWrapperView* _inputWrapperView;
	unsigned long long _supportedInterfaceOrientation;
	FBKeyboardObserver* _keyboardObserver;
	id<FBCommentComposerStickerControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBCommentComposerStickerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * modalPresentationView; 
@property (nonatomic,readonly) UIViewController * modalPresentationViewController; 
+(id)newWithSession:(id)arg1 commentComposerView:(id)arg2 navigationCoordinator:(id)arg3 ;
+(void)overrideDefaultClass:(Class)arg1 ;
-(void)showStickers;
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(id)modalPresentationStackManager;
-(void)toggleComposerStickerMode;
-(void)presentStickerPackWithFBID:(unsigned long long)arg1 stickerFBID:(unsigned long long)arg2 ;
-(void)presentFullScreenWithStickerTray:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissFullScreenTrayComposerWithCompletion:(/*^block*/id)arg1 animationBlock:(/*^block*/id)arg2 ;
-(void)didSelectDismissStickerStoreViewController:(id)arg1 ;
-(id)initWithSession:(id)arg1 commentComposerView:(id)arg2 navigationCoordinator:(id)arg3 ;
-(id)_viewControllerForStickerPackWithFBID:(unsigned long long)arg1 stickerFBID:(unsigned long long)arg2 ;
-(void)_moveTrayViewFromInputViewToModalHostStack:(id)arg1 ;
-(void)_layoutModalPresentationViewWithKeyboardFrame:(CGRect)arg1 ;
-(void)_startKeyboardObservationForFullScreenStickerTray;
-(void)_stopKeyboardObservationForFullScreenStickerTray;
-(UIView *)modalPresentationView;
-(void)_moveTrayViewFromModalHostStackToInputView;
-(UIViewController *)modalPresentationViewController;
-(void)presentStickerPackForSticker:(id)arg1 ;
-(void)setDelegate:(id<FBCommentComposerStickerControllerDelegate>)arg1 ;
-(id<FBCommentComposerStickerControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
@end

