/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBComposerInlinePrivacySurveyViewDelegate.h>
#import <Facebook/FBPopoverControllerDelegate.h>
#import <Facebook/FBComposerAudienceEducationProtocol.h>

@protocol FBComposerAudienceEducationProtocolDelegate;
@class FBUserSession, FBMemAudienceInfo, FBComposerAuthor, FBComposerPrivacySetting, FBTypedNSArrayOfFBComposerPrivacySetting, FBPopoverController, FBComposerInlinePrivacySurveyView, NSString;

@interface FBEducationInlinePrivacySurveyViewController : UIViewController <FBComposerInlinePrivacySurveyViewDelegate, FBPopoverControllerDelegate, FBComposerAudienceEducationProtocol> {

	FBUserSession* _session;
	FBMemAudienceInfo* _audienceInfo;
	FBComposerAuthor* _author;
	FBComposerPrivacySetting* _triggerPrivacySetting;
	FBTypedNSArrayOfFBComposerPrivacySetting* _availablePrivacySettings;
	FBPopoverController* _popoverEducationController;
	FBComposerInlinePrivacySurveyView* _audienceEducationView;
	BOOL _isShowingConfirmationView;
	id<FBComposerAudienceEducationProtocolDelegate> _delegate;
	unsigned long long _platform;

}

@property (assign,nonatomic,__weak) id<FBComposerAudienceEducationProtocolDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long platform;                                                //@synthesize platform=_platform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(id)presentablePopoverControllerWithFrame:(CGRect)arg1 ;
-(BOOL)shouldShowTooltip;
-(unsigned long long)audienceEducationViewType;
-(void)sendAudienceEducationRequestForEvent:(unsigned long long)arg1 ;
-(void)didSelectPrivacySettingFromAudiencePicker:(id)arg1 ;
-(id)initWithSession:(id)arg1 audienceinfo:(id)arg2 forAuthor:(id)arg3 availablePrivacySettings:(id)arg4 ;
-(id)tooltipIdentifier;
-(unsigned long long)audienceEducationType;
-(BOOL)showEducationForPrivacySetting:(id)arg1 ;
-(unsigned long long)tooltipType;
-(void)didInsertAudienceEducationToView;
-(BOOL)_isValidInputParameters;
-(void)_sendInlinePrivacySurveyRequestForEvent:(unsigned long long)arg1 selectedPrivacySetting:(id)arg2 ;
-(void)_dismissWithSelectedPrivacySetting:(id)arg1 ;
-(void)_dismissPopoverEducation;
-(void)_dismissWithEvent:(unsigned long long)arg1 ;
-(void)inlinePrivacySurveyView:(id)arg1 userDidSelectPrimaryPrivacy:(id)arg2 ;
-(void)inlinePrivacySurveyView:(id)arg1 userDidSelectSecondaryPrivacy:(id)arg2 ;
-(void)inlinePrivacySurveyViewUserDidSelectMoreOptions:(id)arg1 ;
-(void)inlinePrivacySurveyViewUserDidSelectConfirmation:(id)arg1 ;
-(void)inlinePrivacySurveyViewUserDidSelectSkip:(id)arg1 ;
-(void)setDelegate:(id<FBComposerAudienceEducationProtocolDelegate>)arg1 ;
-(id<FBComposerAudienceEducationProtocolDelegate>)delegate;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(unsigned long long)platform;
@end
