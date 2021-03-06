/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCompleteProfileMegaphoneViewDelegate.h>
#import <Facebook/FBLightweightPrivacyPickerViewControllerDelegate.h>
#import <Facebook/FBProfileQuestionRequestParserDelegate.h>
#import <Facebook/FBProfileTypeaheadViewControllerDelegate.h>
#import <Facebook/FBPopoverControllerDelegate.h>

@protocol FBServiceTransactionMutating, FBCompleteProfileMegaphoneManagerDelegate;
@class FBMemProfileQuestion, NSString, FBCompleteProfileRepository, FBUserSession, FBProfileQuestionRequestParser, FBCompleteProfileMegaphoneView, FBCompleteProfileMegaphoneConfigurator, FBLightweightPrivacyPickerViewController, FBPrivacySettingComposingSet, FBPopoverController, UIView;

@interface FBCompleteProfileMegaphoneManager : NSObject <FBCompleteProfileMegaphoneViewDelegate, FBLightweightPrivacyPickerViewControllerDelegate, FBProfileQuestionRequestParserDelegate, FBProfileTypeaheadViewControllerDelegate, FBPopoverControllerDelegate> {

	FBMemProfileQuestion* _profileQuestion;
	NSString* _questionSessionID;
	int _pendingQuestionRequestCount;
	FBCompleteProfileRepository* _repository;
	id<FBServiceTransactionMutating> _loadPersonToken;
	FBUserSession* _session;
	FBProfileQuestionRequestParser* _questionDownloader;
	FBCompleteProfileMegaphoneView* _megaphoneView;
	FBCompleteProfileMegaphoneConfigurator* _configurator;
	FBLightweightPrivacyPickerViewController* _privacyPicker;
	FBPrivacySettingComposingSet* _composingSet;
	FBPopoverController* _privacyPickerPopover;
	id<FBCompleteProfileMegaphoneManagerDelegate> _delegate;

}

@property (nonatomic,readonly) UIView * completeProfileMegaphoneView; 
@property (assign,nonatomic,__weak) id<FBCompleteProfileMegaphoneManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double viewHeight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fb_popoverControllerWillDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(UIView *)completeProfileMegaphoneView;
-(id)initWithSession:(id)arg1 configurator:(id)arg2 ;
-(double)viewHeight;
-(void)_fetchPrivacySettings;
-(void)lightweightPrivacyPicker:(id)arg1 userDidSelectPrivacy:(id)arg2 ;
-(void)_fetchProfileQuestionWithLocation:(id)arg1 ;
-(void)_fetchViewerIfNeeded;
-(void)_viewerFetched:(id)arg1 ;
-(void)_startQuestionRequest:(/*^block*/id)arg1 ;
-(void)_finishedQuestionRequest;
-(void)_animateMegaphoneClose;
-(void)completeProfileMegaphoneView:(id)arg1 didTapTypeaheadRowForProfileQuestion:(id)arg2 ;
-(void)completeProfileMegaphoneViewDidTapSkipButton:(id)arg1 ;
-(void)completeProfileMegaphoneView:(id)arg1 didTapSaveButtonWithSelectedPage:(id)arg2 ;
-(void)completeProfileMegaphoneViewDidTapPrivacySelector:(id)arg1 withPrivacyButton:(id)arg2 ;
-(void)completeProfileMegaphoneViewStateDidChange:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)closeMegaphone:(id)arg1 ;
-(void)profileQuestionDownloadRequestParser:(id)arg1 didFinishProfileQuestionRequestWithQuestion:(id)arg2 questionSessionID:(id)arg3 progress:(id)arg4 ;
-(void)profileQuestionDownloadRequestParser:(id)arg1 didFinishRequestWithoutQuestion:(unsigned long long)arg2 ;
-(void)profileTypeaheadViewController:(id)arg1 didSelectPage:(id)arg2 ;
-(void)profileTypeaheadViewControllerDidCancel:(id)arg1 ;
-(void)setDelegate:(id<FBCompleteProfileMegaphoneManagerDelegate>)arg1 ;
-(id<FBCompleteProfileMegaphoneManagerDelegate>)delegate;
@end

