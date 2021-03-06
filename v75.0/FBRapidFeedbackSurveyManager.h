/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBStructuredSurveyUIPageDataSourceAutoSubmitDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <Facebook/FBRapidFeedbackSurveyViewDelegate.h>

@protocol FBRapidFeedbackSurveyManagerDelegate;
@class FBUserSession, FBMemSurveyIntegrationPoint, FBStructuredSurveyImpressionLogger, NSTimer, NSString, FBRapidFeedbackSurveyViewController, FBRapidFeedbackStyleSheet, FBRapidFeedbackConfig, UIViewController;

@interface FBRapidFeedbackSurveyManager : NSObject <FBStructuredSurveyUIPageDataSourceAutoSubmitDelegate, UIViewControllerTransitioningDelegate, FBRapidFeedbackSurveyViewDelegate> {

	FBUserSession* _userSession;
	FBMemSurveyIntegrationPoint* _integrationPoint;
	FBStructuredSurveyImpressionLogger* _impressionLogger;
	NSTimer* _dismissTimer;
	double _dismissTimerInterval;
	BOOL _shouldScheduleDismissalOnAppearance;
	BOOL _hasSubmittedAnswers;
	BOOL _hasHookedLifecycleNotifications;
	NSString* _dismissMethod;
	FBRapidFeedbackSurveyViewController* _lazy_surveyViewController;
	id<FBRapidFeedbackSurveyManagerDelegate> _delegate;
	FBRapidFeedbackStyleSheet* _styleSheet;
	FBRapidFeedbackConfig* _config;
	UIViewController* _thankYouViewController;
	UIViewController* _feedbackViewController;

}

@property (nonatomic,readonly) FBRapidFeedbackSurveyViewController * surveyViewController;              //@synthesize lazy_surveyViewController=_lazy_surveyViewController - In the implementation block
@property (assign,nonatomic,__weak) id<FBRapidFeedbackSurveyManagerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL shouldSkipIntro; 
@property (nonatomic,readonly) FBMemSurveyIntegrationPoint * integrationPoint; 
@property (nonatomic,readonly) FBStructuredSurveyImpressionLogger * impressionLogger; 
@property (nonatomic,retain) FBRapidFeedbackStyleSheet * styleSheet;                                    //@synthesize styleSheet=_styleSheet - In the implementation block
@property (nonatomic,retain) FBRapidFeedbackConfig * config;                                            //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) UIViewController * thankYouViewController;                                 //@synthesize thankYouViewController=_thankYouViewController - In the implementation block
@property (nonatomic,retain) UIViewController * feedbackViewController;                                 //@synthesize feedbackViewController=_feedbackViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_applicationDidEnterForeground:(id)arg1 ;
-(FBStructuredSurveyImpressionLogger *)impressionLogger;
-(FBRapidFeedbackSurveyViewController *)surveyViewController;
-(void)addExtraData:(id)arg1 forKey:(id)arg2 ;
-(FBMemSurveyIntegrationPoint *)integrationPoint;
-(void)setStyleSheet:(FBRapidFeedbackStyleSheet *)arg1 ;
-(void)viewShouldBeDismissed:(BOOL)arg1 ;
-(void)submitAnswers:(BOOL)arg1 ;
-(void)showFeedbackDialog;
-(void)setThankYouViewController:(UIViewController *)arg1 ;
-(void)storeFeedback:(id)arg1 forQuestions:(id)arg2 ;
-(void)showCommentSentConfirmation;
-(void)setFeedbackViewController:(UIViewController *)arg1 ;
-(UIViewController *)feedbackViewController;
-(id)_createThankYouToastControllerWithText:(id)arg1 ;
-(void)_setUpToastDismissalBehavior;
-(void)_unhookLifecycleNotifications;
-(BOOL)shouldSkipIntro;
-(id)_currentSurvey;
-(id)_pageViewControllerForQuestions:(id)arg1 ;
-(id)_submitButtonTitle;
-(void)_handleSurveyAnswers:(id)arg1 forQuestions:(id)arg2 ;
-(id)_introViewControllerWithIntroText:(id)arg1 ;
-(void)_cancelDismissTimer;
-(void)_restartDismissTimer:(BOOL)arg1 withTimeInterval:(double)arg2 ;
-(void)_hookLifecycleNotifications;
-(id)_initializeSurveyViewController;
-(BOOL)_shouldEnableAutoSubmitForQuestions:(id)arg1 ;
-(BOOL)_shouldShowNextPage;
-(id)_thankYouViewController;
-(void)_dismissTimerAction:(id)arg1 ;
-(void)_pauseDismissTimer;
-(void)_resumeDismissTimer;
-(void)_userCanceled;
-(void)pageDataSource:(id)arg1 shouldSubmitAnswers:(id)arg2 forQuestions:(id)arg3 ;
-(void)surveyViewControllerWasPresented:(id)arg1 ;
-(void)surveyViewControllerWasDismissed:(id)arg1 ;
-(void)viewWillDismiss;
-(void)viewDidCancelDismissal;
-(void)viewShouldBeDismissedAfterDelay:(BOOL)arg1 ;
-(void)surveyViewController:(id)arg1 willDisappear:(BOOL)arg2 ;
-(void)surveyViewController:(id)arg1 didAppear:(BOOL)arg2 ;
-(id)initWithIntegrationPoint:(id)arg1 userSession:(id)arg2 styleSheet:(id)arg3 ;
-(UIViewController *)thankYouViewController;
-(void)setDelegate:(id<FBRapidFeedbackSurveyManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBRapidFeedbackSurveyManagerDelegate>)delegate;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(FBRapidFeedbackConfig *)config;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)setConfig:(FBRapidFeedbackConfig *)arg1 ;
-(FBRapidFeedbackStyleSheet *)styleSheet;
@end

