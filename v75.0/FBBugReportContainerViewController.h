/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:55 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol FBBugReportContainerViewControllerChildViewControllerDelegate, FBBugReportContainerViewControllerDelegate;
@class FBBugReportContainerView, UIViewController, FBTimer, FBBugReportShakeHandler, FBBugReportCoordinator, NSString;

@interface FBBugReportContainerViewController : UIViewController <UIGestureRecognizerDelegate> {

	FBBugReportContainerView* _containerView;
	UIViewController* _footerViewController;
	UIViewController*<FBBugReportContainerViewControllerChildViewControllerDelegate> _previousViewController;
	CGRect _enclosingViewOriginalFrame;
	BOOL _panGestureCanBeInvalid;
	BOOL _panGestureIsValid;
	FBTimer* _dismissalTimer;
	FBBugReportShakeHandler* _shakeHandler;
	FBBugReportCoordinator* _coordinator;
	id<FBBugReportContainerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBBugReportContainerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)userDidPan:(id)arg1 ;
-(void)hideFooter;
-(void)hideNavigationBar;
-(id)bugReportCategories;
-(id)screenshotsDirectory;
-(BOOL)shakeToReportIsEnabled;
-(void)sendGeneralFeedback:(id)arg1 successBlock:(/*^block*/id)arg2 ;
-(void)presentPhotoPermissionsRequest;
-(void)setChosenCategory:(id)arg1 ;
-(void)cycleToViewController:(id)arg1 cardResizeAnimationTime:(double)arg2 animationStyle:(int)arg3 ;
-(id)chosenCategory;
-(void)showNavigationBar;
-(void)stopDismissalTimerAndDisablePanGestureRecognizer:(BOOL)arg1 ;
-(void)closeWithShrinkingAnimation:(BOOL)arg1 fadeDuration:(float)arg2 ;
-(id)getBugDescription;
-(void)setRightBarButtonItemEnabled:(BOOL)arg1 ;
-(id)initWithShakeHandler:(id)arg1 coordinator:(id)arg2 ;
-(void)startDismissalTimer;
-(void)showFooter:(id)arg1 ;
-(void)displayContentController:(id)arg1 ;
-(void)resetNumReportAfterShakeOn;
-(void)setShakeToReportEnabled;
-(void)setShakeToReportDisabled;
-(void)presentHelpCenterForAbusiveContent;
-(void)presentHelpCenterForPrivacy;
-(void)presentHelpCenterForGeneralFeedback;
-(void)sendBugWithDescription:(id)arg1 category:(id)arg2 successBlock:(/*^block*/id)arg3 ;
-(void)setBugDescription:(id)arg1 ;
-(void)willChangeCategory;
-(void)dismissBugComposerAndAllowUserToTakeScreenshot;
-(void)dismissBugComposerAndStartVideoRecording;
-(void)incrementNumCancelIfShakeOn;
-(void)resetNumCancelAfterShakeOff;
-(void)incrementNumReportIfShakeOff;
-(void)setDelegate:(id<FBBugReportContainerViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBBugReportContainerViewControllerDelegate>)delegate;
-(void)loadView;
-(void)pushNavigationItem:(id)arg1 ;
-(void)close;
@end

