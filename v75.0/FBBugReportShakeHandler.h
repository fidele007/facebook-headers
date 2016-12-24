/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:55 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>
#import <Facebook/FBBugReportComposerDelegate.h>

@protocol OS_dispatch_queue, FBBugReportIconProvider, FBBugReportModalViewControllerPresenting;
@class FBBugReportCoordinator, UIViewController, NSMutableArray, FBBugReportInitialForkViewController, UIWindow, NSMutableDictionary, NSString, NSDictionary, FBBugReportVideoScreenRecorder, FBBugReportVideoRecorderViewController, FBBugReportVideoScreenVideoRecorderWindow, FBBugReportScreenshotTakingWindow, FBBugReportScreenshotTakingViewController, NSDate, NSTimer, FBBugReportInitialCoordinator, FBTimer, FBUserSession, NSObject, FBBugReportConfiguration;

@interface FBBugReportShakeHandler : NSObject <UIAlertViewDelegate, FBBugReportComposerDelegate> {

	FBBugReportCoordinator* _coordinator;
	UIViewController* _presentedViewController;
	BOOL _problemReportInProgress;
	NSMutableArray* _temporarilyDisabledGestureRecognizers;
	BOOL _shouldTakeScreenshot;
	FBBugReportInitialForkViewController* _initialForkViewController;
	UIWindow* _bugReportWindow;
	UIWindow* _fbWindow;
	unsigned long long _lastInitiationSource;
	unsigned long long _videoRecordingInProgress;
	NSMutableDictionary* _savedBugComposerStateDuringVideoRecording;
	NSString* _preselectedCategoryID;
	NSDictionary* _lastAdditionalParameters;
	NSDictionary* _lastAdditionalContexts;
	FBBugReportVideoScreenRecorder* _videoScreenRecorder;
	FBBugReportVideoRecorderViewController* _videoRecorderViewController;
	FBBugReportVideoScreenVideoRecorderWindow* _videoRecorderWindow;
	FBBugReportScreenshotTakingWindow* _screenshotTakingWindow;
	FBBugReportScreenshotTakingViewController* _screenshotTakingViewController;
	NSDate* _videoRecorderStartTime;
	NSTimer* _videoRecorderCountdownTimer;
	FBBugReportInitialCoordinator* _viewCoordinator;
	FBTimer* _bugReportResendTimer;
	FBUserSession* _session;
	NSObject*<OS_dispatch_queue> _screenshotSavingQueue;
	id<FBBugReportIconProvider> _iconProvider;
	NSDictionary* _bugReportCategories;
	id<FBBugReportModalViewControllerPresenting> _modalViewControllerPresenter;
	FBBugReportConfiguration* _configuration;

}

@property (assign,nonatomic,__weak) id<FBBugReportModalViewControllerPresenting> modalViewControllerPresenter;              //@synthesize modalViewControllerPresenter=_modalViewControllerPresenter - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * bugReportCategories;                                                     //@synthesize bugReportCategories=_bugReportCategories - In the implementation block
@property (nonatomic,retain) FBBugReportConfiguration * configuration;                                                      //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startWithSession:(id)arg1 modalViewControllerPresenter:(id)arg2 bugReportCategoriesProvider:(id)arg3 ;
-(void)presentWebView:(id)arg1 delegate:(id)arg2 ;
-(NSDictionary *)bugReportCategories;
-(id)screenshotsDirectory;
-(void)bugReportComposerViewController:(id)arg1 didFinishEditingBugWithDescription:(id)arg2 category:(id)arg3 ;
-(void)bugReportComposerViewControllerDidCancel:(id)arg1 ;
-(void)loadSavedComposerState:(id)arg1 ;
-(void)bugReportComposerViewControllerDidDisappear:(id)arg1 ;
-(void)dismissBugComposerAndStartVideoRecording:(id)arg1 selectedCategoryIndex:(long long)arg2 description:(id)arg3 ;
-(void)didShake:(id)arg1 ;
-(void)checkIfShakeToReportIsEnabled:(id)arg1 ;
-(void)checkIfShouldShowOwlNux:(id)arg1 ;
-(void)resetRageShakeNux:(id)arg1 ;
-(void)makeAppOld:(id)arg1 ;
-(void)resendBugReportsWithDelay:(float)arg1 ;
-(void)_configureWithSession:(id)arg1 modalViewControllerPresenter:(id)arg2 ;
-(BOOL)containsBlacklistedClass:(id)arg1 view:(id)arg2 ;
-(BOOL)viewHierarchyContainsBlacklistedClass:(id)arg1 ;
-(BOOL)viewHierarchyContainsBlacklistedClasses;
-(BOOL)shakeToReportIsEnabled;
-(void)didInitiateBugReportingWithSource:(unsigned long long)arg1 shakeWindow:(id)arg2 preselectedCategoryID:(id)arg3 additionalContexts:(id)arg4 ;
-(BOOL)shouldShowOwlNux;
-(id)saveScreenshot:(id)arg1 ;
-(void)takeScreenshotWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)personDidInitiateReportAProblem:(unsigned long long)arg1 ;
-(void)removeOldScreenshots;
-(void)takeScreenshotIfNeeded;
-(void)showInitialFork;
-(void)dismissReportAProblem;
-(id)_urlForGeneralFeedbackComponent;
-(void)presentHelpCenter:(id)arg1 ;
-(void)presentReportAProblem;
-(id)_urlForAbuseReportComponent;
-(void)_dismissBugReporterComposerController:(id)arg1 ;
-(void)bugReportPrepared;
-(void)sendBugWithDescription:(id)arg1 category:(id)arg2 succcessBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)resendBugReports;
-(void)loadScreenshotTakingUI;
-(void)loadVideoScreenRecorderUI;
-(void)startVideoRecording;
-(void)stopVideoRecording;
-(void)updateVideoRecorderState;
-(void)dismissScreenshotTakingUIAndTakeScreenshot:(BOOL)arg1 ;
-(void)startStopButtonPushed:(id)arg1 ;
-(void)startWithSession:(id)arg1 modalViewControllerPresenter:(id)arg2 defaultCategoryID:(id)arg3 ;
-(void)initialForkViewControllerDidDismissWithButtonIndex:(long long)arg1 ;
-(void)sendGeneralFeedback:(id)arg1 successBlock:(/*^block*/id)arg2 ;
-(void)startScreenshotSessionFromRedesignFlow;
-(void)startVideoRecordingFromRedesignFlow;
-(id<FBBugReportModalViewControllerPresenting>)modalViewControllerPresenter;
-(void)setModalViewControllerPresenter:(id<FBBugReportModalViewControllerPresenting>)arg1 ;
-(void)dealloc;
-(void)setConfiguration:(FBBugReportConfiguration *)arg1 ;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(FBBugReportConfiguration *)configuration;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationWillTerminate:(id)arg1 ;
@end

