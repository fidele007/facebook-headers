/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBPageCTAGetQuoteQuestionsViewDelegate.h>
#import <Facebook/FBPageCTAGetQuoteAdminConfigFetcherDelegate.h>

@protocol FBPageCTAViewControllerDelegate, FBPageCTAGetQuoteConfigViewControllerDelegate;
@class FBPageCTAGetQuoteConfigView, NSString, FBUserSession, FBPageCTAGetQuoteAdminConfigFetcher, FBPageCTAGetQuoteCreateDataModel, FBTransientViewStateManager;

@interface FBPageCTAGetQuoteConfigViewController : UIViewController <FBPageCTAGetQuoteQuestionsViewDelegate, FBPageCTAGetQuoteAdminConfigFetcherDelegate> {

	FBPageCTAGetQuoteConfigView* _configView;
	NSString* _pageID;
	FBUserSession* _session;
	FBPageCTAGetQuoteAdminConfigFetcher* _fetcher;
	id<FBPageCTAViewControllerDelegate> _delegate;
	NSString* _ctaLabel;
	unsigned long long _actionType;
	FBPageCTAGetQuoteCreateDataModel* _currentFormData;
	BOOL _isForPrimaryCTA;
	id<FBPageCTAGetQuoteConfigViewControllerDelegate> _editDelegate;
	FBTransientViewStateManager* _viewStateManager;

}

@property (nonatomic,retain) FBTransientViewStateManager * viewStateManager;              //@synthesize viewStateManager=_viewStateManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBTransientViewStateManager *)viewStateManager;
-(BOOL)fb_showNavBarSearchField;
-(SEL)fb_actionForBackArrowButton;
-(void)_stopEditing;
-(void)_nextButtonTapped;
-(void)_saveGetQuoteForm;
-(void)_backButtonTapped;
-(void)_showAlertForUnsavedChanges;
-(BOOL)_formValidationCheck;
-(void)_editGetQuoteCTASucceed;
-(void)_editGetQuoteCTAFailed;
-(void)_refreshData;
-(void)didUpdateQuestions;
-(void)didFetchGetQuoteUserInfos:(id)arg1 questionTypes:(id)arg2 pageName:(id)arg3 currentFormData:(id)arg4 ;
-(void)didFetchGetQuoteAdminConfigFailedWithError:(id)arg1 ;
-(id)initWithSession:(id)arg1 pageID:(id)arg2 delegate:(id)arg3 ctaLabel:(id)arg4 actionType:(unsigned long long)arg5 isForPrimaryCTA:(BOOL)arg6 editDelegate:(id)arg7 ;
-(BOOL)fb_hidesTabBar;
-(void)setViewStateManager:(FBTransientViewStateManager *)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

