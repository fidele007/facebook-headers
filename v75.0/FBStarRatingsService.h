/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequestDelegate.h>
#import <Facebook/FBStarRatingsQuiesenceTriggerDelegateProtocol.h>
#import <Facebook/FBStarRatingsESRViewControllerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <Facebook/FBAppService.h>

@protocol OS_dispatch_queue, FBStarRatingsServiceDelegate, FBStarRatingsTriggering;
@class FBUserSession, NSObject, NSArray, FBStarRatingsShowDialogNetworkerRequest, FBStarRatingsESRViewController, FBStarRatingsCompletionNetworkerRequest, UIWindow, NSMutableArray, UIAlertView, FBStarRatingsUserData, NSString;

@interface FBStarRatingsService : NSObject <FBNetworkerRequestDelegate, FBStarRatingsQuiesenceTriggerDelegateProtocol, FBStarRatingsESRViewControllerDelegate, UIAlertViewDelegate, FBAppService> {

	FBUserSession* _session;
	NSObject*<OS_dispatch_queue> _queuePerformer;
	NSArray* _smartSignificantEvents;
	NSArray* _navigationSignificantEvents;
	id<FBStarRatingsServiceDelegate> _delegate;
	FBStarRatingsShowDialogNetworkerRequest* _showDialogRequest;
	FBStarRatingsESRViewController* _esrController;
	FBStarRatingsCompletionNetworkerRequest* _completionRequest;
	id<FBStarRatingsTriggering> _trigger;
	UIWindow* _isrWindow;
	UIWindow* _fbWindow;
	NSMutableArray* _remainingTriggers;
	UIAlertView* _esrAlertView;
	FBStarRatingsUserData* _esrUserData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startAppService;
-(void)stopAppService;
-(void)signalAppServiceToHandleInitialSessionIdle_DEPRECATED;
-(id)initWithSession:(id)arg1 significantEvents:(id)arg2 delegate:(id)arg3 ;
-(void)navigationModeEventDidOccur;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)okPressedOnESRView;
-(void)cancelPressedOnESRView;
-(id)initWithSession:(id)arg1 smartSignificantEvents:(id)arg2 navigationSignificantEvents:(id)arg3 delegate:(id)arg4 ;
-(void)_restartESR:(id)arg1 ;
-(void)_showESR:(id)arg1 ;
-(void)_forceClearESRState:(id)arg1 ;
-(void)_resetWindows;
-(void)_didFinishEnteringForeground:(id)arg1 ;
-(id)_loadUserData;
-(void)_saveUserData:(id)arg1 ;
-(void)_checkShouldShowDialogWithUserData:(id)arg1 ;
-(void)_sendCompletionRequestWithUserData:(id)arg1 ;
-(BOOL)_isProcessingRequest;
-(void)_beginFlowWithUserData:(id)arg1 ;
-(void)setupRandomTriggers:(id)arg1 delay:(double)arg2 ;
-(void)setupSmartTriggers:(id)arg1 ;
-(void)setupNavigationTriggers:(id)arg1 delay:(double)arg2 ;
-(void)startNextTrigger:(id)arg1 ;
-(void)_showDialogRequest:(id)arg1 didSucceededWithResponse:(id)arg2 ;
-(void)_showDialogRequestDidFail:(id)arg1 error:(id)arg2 ;
-(void)_completionRequestDidSucceed:(id)arg1 ;
-(void)_completionRequestDidFail;
-(void)_showESRDialogWithUserData:(id)arg1 ;
-(id)latestUserData;
-(void)logAnalyticsEventIfNotLoggedPreviously:(id)arg1 extra:(id)arg2 ;
-(void)_esrSaveStateWithSendToAppStore:(BOOL)arg1 ;
-(void)_handleButtonPressOnESRViewWithSendToAppStore:(BOOL)arg1 ;
-(id)starRatingsViewControllerReviewURL:(id)arg1 ;
-(BOOL)displayTriggerCanDisplay:(id)arg1 ;
-(void)displayTrigger:(id)arg1 didTriggerWithUserData:(id)arg2 ;
-(void)displayTrigger:(id)arg1 didChangeUserData:(id)arg2 ;
-(void)setupSmartTriggersForTesting:(id)arg1 ;
-(id)starRatingsViewControllerAppDisplayName:(id)arg1 ;
-(void)logAnalyticsEventIfNotLoggedPreviously:(id)arg1 ;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
@end

