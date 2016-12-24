/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBComposerFlowDelegate.h>
#import <Facebook/FBComposerPresentationHandler.h>
#import <Facebook/FBComposerPublisherStatusListener.h>
#import <Facebook/FBComposerPublicationProgressDisplayListener.h>
#import <Facebook/FBPublicationErrorAlertPresentationListener.h>
#import <Facebook/FBNetworkerRequestDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <Facebook/FBPlatformActionProcessorDelegate.h>
#import <Facebook/FBPlatformShareDataLoadListener.h>
#import <Facebook/FBPlatformViewController.h>
#import <Facebook/FBPresentableViewController.h>

@protocol FBComposerPublicationProgressDisplayer, FBComposerPresentationHandler;
@class FBComposerPlatformShareDataLoadBuffer, FBPlatformActionProcessor, FBComposerPublisherStatusEventFilter, FBPublicationError, FBPublisherManager, FBComposerFlowDisplayer, UIView, FBComposerComposedResult, FBPlatformAction, NSDictionary, UIAlertView, NSString;

@interface FBPlatformShareDialogViewControllerBase : UIViewController <FBComposerFlowDelegate, FBComposerPresentationHandler, FBComposerPublisherStatusListener, FBComposerPublicationProgressDisplayListener, FBPublicationErrorAlertPresentationListener, FBNetworkerRequestDelegate, UIAlertViewDelegate, FBPlatformActionProcessorDelegate, FBPlatformShareDataLoadListener, FBPlatformViewController, FBPresentableViewController> {

	FBComposerPlatformShareDataLoadBuffer* _dataLoadEventBuffer;
	BOOL _hasBeenDismissed;
	FBPlatformActionProcessor* _processor;
	FBComposerPublisherStatusEventFilter* _publicationEventFilter;
	FBPublicationError* _publicationError;
	unsigned long long _publishedImageCount;
	FBPublisherManager* _publisherManager;
	FBComposerFlowDisplayer* _composerDisplayer;
	UIView* _overlayView;
	id<FBComposerPublicationProgressDisplayer> _publicationProgressDisplayer;
	FBComposerPublisherStatusEventFilter* _publishingEventFilter;
	id<FBComposerPresentationHandler> _presentationHandler;
	FBComposerComposedResult* _composerComposedResult;
	unsigned long long _displayState;
	FBPlatformAction* _action;
	NSDictionary* _resultArguments;
	UIAlertView* _alertView;

}

@property (nonatomic,retain) UIAlertView * alertView;                                        //@synthesize alertView=_alertView - In the implementation block
@property (nonatomic,copy) NSDictionary * resultArguments;                                   //@synthesize resultArguments=_resultArguments - In the implementation block
@property (nonatomic,readonly) FBPlatformAction * action;                                    //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) FBPlatformActionProcessor * processor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long preferredPresentationMethod; 
@property (nonatomic,readonly) unsigned long long preferredPresentationOptions; 
-(void)startedPublishingPublisherData:(id)arg1 ;
-(void)attemptedPublicationOfPublisherData:(id)arg1 ;
-(void)failedPublishingPublisherData:(id)arg1 withError:(id)arg2 ;
-(void)failedPublishingAndWaitingForRetryPublisherData:(id)arg1 withError:(id)arg2 ;
-(void)terminallyFailedPublishingPublisherData:(id)arg1 withError:(id)arg2 ;
-(void)startedServerProcessingForUploadedPublication:(id)arg1 ;
-(void)successfullyPublishedPublisherData:(id)arg1 withResponse:(id)arg2 ;
-(void)cancelledPublishingPublisherData:(id)arg1 ;
-(void)pausedPublishingPublisherData:(id)arg1 ;
-(void)retriedPublishingPublisherData:(id)arg1 ;
-(void)startedWaitingForConnectivityForPublicationOfPublisherData:(id)arg1 ;
-(void)scheduledPublicationOfPublisherData:(id)arg1 atDate:(id)arg2 ;
-(void)publicationProgressedWithProgress:(double)arg1 forPublisherData:(id)arg2 ;
-(void)startedUploadingItemOfType:(int)arg1 withThumbnailImage:(id)arg2 forPublisherData:(id)arg3 ;
-(void)uploadQualityDidChange:(id)arg1 forPublisherData:(id)arg2 ;
-(void)canCancelPublishingOfPublisherData:(id)arg1 ;
-(void)cannotCancelPublishingOfPublisherData:(id)arg1 ;
-(id)analyticsModule;
-(BOOL)fb_showNavBarSearchField;
-(void)composerCompletedWithResult:(id)arg1 ;
-(void)composerCompletedDismissing;
-(unsigned long long)preferredPresentationMethod;
-(void)presentModalViewController:(id)arg1 fromViewController:(id)arg2 options:(unsigned long long)arg3 animated:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)presentPopoverOverlayViewController:(id)arg1 popoverInfo:(id)arg2 options:(unsigned long long)arg3 animated:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)cleanupPublicationListening;
-(id)parseResponse:(id)arg1 ;
-(void)_dismissPublicationProgressDisplay;
-(void)cancelButtonTappedForPublisherData:(id)arg1 withReason:(id)arg2 ;
-(void)dismissButtonTappedForPublisherData:(id)arg1 ;
-(void)retryButtonTappedForPublisherData:(id)arg1 ;
-(void)uploadViewUpdatedForCancellationOfPublicationForPublisherData:(id)arg1 ;
-(void)uploadViewUpdatedForTerminalFailureOfPublicationForPublisherData:(id)arg1 ;
-(void)uploadViewUpdatedForTransientFailureOfPublicationForPublisherData:(id)arg1 ;
-(void)uploadViewUpdatedForSuccessOfPublicationForPublisherData:(id)arg1 response:(id)arg2 ;
-(void)_showPublicationWithIdentifier:(id)arg1 ;
-(id)composerTraits;
-(BOOL)validateAction;
-(void)completeWithArguments:(id)arg1 ;
-(void)completeWithInvalidParameterError:(id)arg1 ;
-(FBPlatformActionProcessor *)processor;
-(void)platformActionProcessor:(id)arg1 didCompleteOperation:(id)arg2 ;
-(void)platformLoadedPayload:(id)arg1 ;
-(void)completeWithErrorCode:(long long)arg1 errorMessage:(id)arg2 errorResponse:(id)arg3 logAnalytics:(BOOL)arg4 ;
-(void)composerCancelledPublishing;
-(void)composerFinishedPublishingPublication:(id)arg1 withResponse:(id)arg2 ;
-(BOOL)evaluateAndAlertIfGKFailed:(id)arg1 ;
-(void)_completeWithErrorForUncaughtException;
-(void)setResultArguments:(NSDictionary *)arg1 ;
-(void)finishedPresentingPublicationErrorAlert;
-(void)presentedReportProblemFlowForError;
-(void)platformActionProcessor:(id)arg1 didFailWithErrorCode:(long long)arg2 errorMessage:(id)arg3 errorResponse:(id)arg4 ;
-(void)platformActionProcessorDidComplete:(id)arg1 ;
-(NSDictionary *)resultArguments;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(FBPlatformAction *)action;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)dismiss;
-(id)initWithAction:(id)arg1 ;
-(void)dismissViewController:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setAlertView:(UIAlertView *)arg1 ;
-(UIAlertView *)alertView;
@end

