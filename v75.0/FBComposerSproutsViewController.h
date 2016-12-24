/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/CKComponentProvider.h>
#import <Facebook/FBComposerFlowDelegate.h>
#import <Facebook/FBComposerSproutControlEventsListener.h>
#import <Facebook/FBModalDialogViewDelegate.h>
#import <Facebook/FBPopoverControllerDelegate.h>

@protocol FBComposerSproutViewControllerDelegate;
@class FBComposerSproutsAnalyticsLogger, FBComposerSproutComposerPresenter, FBDelegateForwarder, UIView, FBUserSession, FBComposerSproutSpecifier, FBComposerSproutsSheetContainerViewForSlideUpSprouts, FBComposerSproutsTransitionManager, FBModalDialogViewController, NSString;

@interface FBComposerSproutsViewController : UIViewController <CKComponentProvider, FBComposerFlowDelegate, FBComposerSproutControlEventsListener, FBModalDialogViewDelegate, FBPopoverControllerDelegate> {

	FBComposerSproutsAnalyticsLogger* _analyticsLogger;
	FBComposerSproutComposerPresenter* _composerPresenter;
	BOOL _composerComposeComplete;
	id<FBComposerSproutViewControllerDelegate> _delegate;
	FBDelegateForwarder* _composerFlowDelegateForwarder;
	BOOL _enableBackToSprout;
	UIView* _opaqueView;
	FBUserSession* _session;
	FBComposerSproutSpecifier* _specifier;
	FBComposerSproutsSheetContainerViewForSlideUpSprouts* _sproutSheetContainerView;
	BOOL _awaitingUserInteraction;
	long long _statusBarStyle;
	FBComposerSproutsTransitionManager* _transitionManager;
	FBModalDialogViewController* _modalDialogViewController;
	NSString* _sessionIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(id)analyticsModule;
-(void)composerCompletedWithResult:(id)arg1 ;
-(void)composerCompletedDismissing;
-(void)modalDialogView:(id)arg1 didSelectPrimaryButton:(id)arg2 ;
-(void)fb_popoverControllerWillDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)didTapBanner;
-(void)performSproutActionWithSelector:(SEL)arg1 data:(id)arg2 loggingData:(id)arg3 ;
-(void)didTapVideoBroadcastSprout;
-(void)didTapQAndASprout;
-(void)_handleUserInteraction:(/*^block*/id)arg1 shouldPlayButtonTappingSound:(BOOL)arg2 ;
-(void)didCancelSprouts:(unsigned long long)arg1 ;
-(void)_dismissWithAnimation:(BOOL)arg1 ;
-(void)_dismissSproutSheetAndOpaqueView;
-(void)_performActionAfterTerminatingAnyOngoingTransition:(/*^block*/id)arg1 ;
-(void)didTapOpaqueBackground;
-(void)didTapSprout:(id)arg1 ;
-(id)initWithSession:(id)arg1 delegate:(id)arg2 specifier:(id)arg3 ;
-(void)didTapPostAStatusSprout;
-(void)didTapUploadAPhotoOnlySprout;
-(void)didTapUploadAVideoOnlySprout;
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
@end
