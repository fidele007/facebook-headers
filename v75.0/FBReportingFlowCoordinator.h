/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBReportingFlowConfigProviderDelegateProtocol.h>
#import <Facebook/FBReportingFlowGuidedActionDispatchingDelegateProtocol.h>
#import <Facebook/FBAvatarPickerControllerDelegate.h>
#import <Facebook/FBModalWebFlowDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <Facebook/FBReportingFlowCoordinatorDelegateProtocol.h>

@protocol FBReportingFlowConfigProviderProtocol, FBReportingFlowGuidedActionDispatchingProtocol;
@class FBUserSession, NSString, UINavigationController, FBUniversalFeedbackController, FBReportingFlowResponseModel;

@interface FBReportingFlowCoordinator : NSObject <FBReportingFlowConfigProviderDelegateProtocol, FBReportingFlowGuidedActionDispatchingDelegateProtocol, FBAvatarPickerControllerDelegate, FBModalWebFlowDelegate, UINavigationControllerDelegate, FBReportingFlowCoordinatorDelegateProtocol> {

	FBUserSession* _userSession;
	NSString* _counterpartyUID;
	NSString* _location;
	NSString* _reportableNodeID;
	id<FBReportingFlowConfigProviderProtocol> _configProvider;
	UINavigationController* _navigationController;
	id<FBReportingFlowGuidedActionDispatchingProtocol> _guidedActionDispatcher;
	long long _previousStatusBarStyle;
	FBUniversalFeedbackController* _ufController;
	FBReportingFlowResponseModel* _lastPerformedAction;
	BOOL _didPerformReportAction;
	BOOL _didPerformRedirectAction;
	int _uiPresentationStyle;
	/*^block*/id _dismissBlock;

}

@property (nonatomic,copy) id dismissBlock;                         //@synthesize dismissBlock=_dismissBlock - In the implementation block
@property (assign,nonatomic) int uiPresentationStyle;               //@synthesize uiPresentationStyle=_uiPresentationStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)avatarPicker:(id)arg1 didFinishWithSelection:(id)arg2 ;
-(void)avatarPickerDidCancel:(id)arg1 ;
-(void)setDismissBlock:(id)arg1 ;
-(id)dismissBlock;
-(id)initWithUserSession:(id)arg1 location:(id)arg2 nodeID:(id)arg3 ;
-(void)setUiPresentationStyle:(int)arg1 ;
-(id)viewControllerForReportingFlow;
-(void)logReportingFlowEvent:(id)arg1 ;
-(BOOL)_shouldShowUniversalFeedback;
-(void)_messageWasSentForGuidedAction:(id)arg1 ;
-(void)_webViewControllerDidClose;
-(void)dismissReportingFlow;
-(void)_showErrorAlertView:(id)arg1 description:(id)arg2 ;
-(void)didFetchPromptModel:(id)arg1 ;
-(void)didFail;
-(void)actionDidSucceed;
-(void)actionDidFail:(id)arg1 description:(id)arg2 ;
-(void)loadNewBranchForDetailedResponse:(id)arg1 ;
-(void)performGuidedAction:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)performMessageGuidedAction:(id)arg1 completionBlock:(/*^block*/id)arg2 targetFBID:(id)arg3 message:(id)arg4 ;
-(void)loadMessageComposer:(id)arg1 ;
-(void)showAvatarPicker;
-(id)initWithUserSession:(id)arg1 counterpartyUID:(id)arg2 nodeID:(id)arg3 ;
-(int)uiPresentationStyle;
-(void)redirectToURL:(id)arg1 ;
-(int)presentationStyle;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)_dismiss;
-(id)dismissButtonTitle;
@end

