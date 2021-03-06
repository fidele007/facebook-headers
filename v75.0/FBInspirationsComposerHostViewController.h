/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBComposerPresentationHandler.h>
#import <Facebook/FBComposerFlowDelegate.h>
#import <Facebook/FBBookmarkCompletionNotifier.h>
#import <Facebook/FBInspirationsPagedViewControllerChild.h>
#import <Facebook/FBBookmarkSplitViewCoordinatorTransitionListener.h>

@protocol FBComposerPresentationHandler;
@class UIViewController, NSMutableArray, FBComposerStartingStyleContext, FBUserSession, CKComponentHostingView, FBComposerInspirationBootstrapContent, NSString;

@interface FBInspirationsComposerHostViewController : UIViewController <FBComposerPresentationHandler, FBComposerFlowDelegate, FBBookmarkCompletionNotifier, FBInspirationsPagedViewControllerChild, FBBookmarkSplitViewCoordinatorTransitionListener> {

	/*^block*/id _bootstrapContentProvider;
	/*^block*/id _completionHandler;
	BOOL _composerSessionCompleted;
	BOOL _closingComposerFromHostDisappearing;
	BOOL _didPublishToNewsFeed;
	BOOL _shouldInitCameraWhenCameraFullyOpen;
	unsigned long long _numberOfPresentedInternalViewControllers;
	UIViewController* _presentedBaseViewController;
	NSMutableArray* _presentedModals;
	id<FBComposerPresentationHandler> _presentationHandlerForInternalPresentations;
	FBComposerStartingStyleContext* _startingStyleContext;
	FBUserSession* _userSession;
	unsigned long long _dismissalMode;
	CKComponentHostingView* _loadingView;
	FBComposerInspirationBootstrapContent* _bootstrapContent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)composerCompletedWithResult:(id)arg1 ;
-(void)_initCameraViewController;
-(void)removeBaseViewController;
-(void)presentModalViewController:(id)arg1 fromViewController:(id)arg2 options:(unsigned long long)arg3 animated:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)presentPopoverOverlayViewController:(id)arg1 popoverInfo:(id)arg2 options:(unsigned long long)arg3 animated:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_startCaptureOrNuxWithReason:(id)arg1 ;
-(void)_endCaptureOrNuxWithReason:(id)arg1 ;
-(void)_endShareSheetWithIsPostingToNewsFeed:(BOOL)arg1 isPostingToDirect:(BOOL)arg2 isPostingToSnacks:(BOOL)arg3 ;
-(void)notifyCompletionHandler:(/*^block*/id)arg1 ;
-(void)pageViewControllerEndedTransitionFromViewController:(id)arg1 toViewController:(id)arg2 transitionTriggeredPromamtically:(BOOL)arg3 cancelled:(BOOL)arg4 ;
-(void)pageViewControllerStartedTransitionFromViewController:(id)arg1 toViewController:(id)arg2 withPayload:(id)arg3 ;
-(void)didTransitionFromSplitMode:(unsigned long long)arg1 toMode:(unsigned long long)arg2 transitionTriggeredProgrammatically:(BOOL)arg3 ;
-(id)initWithBootstrapContentProvider:(/*^block*/id)arg1 startingStyleContext:(id)arg2 userSession:(id)arg3 ;
-(BOOL)prefersStatusBarHidden;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)dismissViewController:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

