/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBPageCTAAdminFetcherDelegate.h>
#import <Facebook/FBPageEditCTAViewDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <Facebook/FBPageCTASecondaryDataSourceDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <Facebook/FBPageCTAGetQuoteEditViewDelegate.h>
#import <Facebook/FBPageCTAGetQuoteConfigViewControllerDelegate.h>
#import <Facebook/FBPageEditAddableActionsTableViewControllerDelegate.h>
#import <Facebook/FBPageCTARequestTimeSetupInfoFetcherDelegate.h>
#import <Facebook/FBPageCTARequestTimeNUXDelegate.h>

@protocol FBPageCTAViewControllerDelegate;
@class NSArray, FBUserSession, FBPageCTAAdminInfoFetcher, NSString, FBMemPage, FBPageEditCTAView, FBMemPageCreateCTAItem, FBPageCTALogger, FBPageEditAnalyticsLogger, FBPageCTASecondaryDataSource, FBPageCTARequestTimeSetupInfoFetcher, FBPageCTARequestTimeSetupInfoDataModel, UIViewController, FBMemPageAdminInfo, FBTransientViewStateManager, UIAlertView, FBPhoneInputHandler;

@interface FBPageEditCTAViewController : UIViewController <FBPageCTAAdminFetcherDelegate, FBPageEditCTAViewDelegate, UIAlertViewDelegate, FBPageCTASecondaryDataSourceDelegate, UITableViewDelegate, FBPageCTAGetQuoteEditViewDelegate, FBPageCTAGetQuoteConfigViewControllerDelegate, FBPageEditAddableActionsTableViewControllerDelegate, FBPageCTARequestTimeSetupInfoFetcherDelegate, FBPageCTARequestTimeNUXDelegate> {

	NSArray* _ctaItems;
	FBUserSession* _session;
	FBPageCTAAdminInfoFetcher* _fetcher;
	NSString* _pagePhoneNumber;
	NSString* _countryCode;
	FBMemPage* _page;
	NSString* _analyticsUUID;
	FBPageEditCTAView* _editCTAView;
	NSString* _currentCTAType;
	NSString* _currentCTALabel;
	NSString* _ctaId;
	FBMemPageCreateCTAItem* _currentCTAItem;
	NSString* _createPrompt;
	FBPageCTALogger* _logger;
	FBPageEditAnalyticsLogger* _pageEditLogger;
	NSArray* _fieldsData;
	FBPageCTASecondaryDataSource* _secondaryDataSource;
	NSString* _actionChannelType;
	long long _ctaPositionOnActionBar;
	NSString* _getQuoteFormName;
	FBPageCTARequestTimeSetupInfoFetcher* _requestTimeCTASetupInfoFetcher;
	FBPageCTARequestTimeSetupInfoDataModel* _requestTimeSetupInfoDataModel;
	BOOL _isFetchRequestTimeCTASetupInfoDone;
	BOOL _isFetchAdminInfoDone;
	BOOL _isRequestTimeNewDesign;
	UIViewController* _presentedServiceViewController;
	FBMemPageAdminInfo* _adminInfo;
	FBTransientViewStateManager* _viewStateManager;
	UIAlertView* _emptyPhoneNumberAlertView;
	UIAlertView* _deleteAlertView;
	UIAlertView* _genericErrorAlertView;
	FBPhoneInputHandler* _phoneInputHandler;
	id<FBPageCTAViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) FBTransientViewStateManager * viewStateManager;                   //@synthesize viewStateManager=_viewStateManager - In the implementation block
@property (nonatomic,retain) UIAlertView * emptyPhoneNumberAlertView;                          //@synthesize emptyPhoneNumberAlertView=_emptyPhoneNumberAlertView - In the implementation block
@property (nonatomic,retain) UIAlertView * deleteAlertView;                                    //@synthesize deleteAlertView=_deleteAlertView - In the implementation block
@property (nonatomic,retain) UIAlertView * genericErrorAlertView;                              //@synthesize genericErrorAlertView=_genericErrorAlertView - In the implementation block
@property (nonatomic,retain) FBPhoneInputHandler * phoneInputHandler;                          //@synthesize phoneInputHandler=_phoneInputHandler - In the implementation block
@property (assign,nonatomic,__weak) id<FBPageCTAViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBTransientViewStateManager *)viewStateManager;
-(BOOL)fb_showNavBarSearchField;
-(void)attributionEntryView:(id)arg1 didTapURL:(id)arg2 ;
-(void)_replaceOldActionWithNewAction:(id)arg1 optionalCTAData:(id)arg2 ;
-(void)_onReplaceActionMutationsFailure:(id)arg1 failureStage:(id)arg2 ;
-(void)pageEditAddableActionsTableViewControllerDidFinishAddingActions;
-(void)pageEditAddableActionsTableViewControllerDidChooseBarActionToAdd:(id)arg1 ;
-(void)pageEditAddableActionsTableViewControllerDidChooseCTAToAdd:(id)arg1 ;
-(id)initWithSession:(id)arg1 page:(id)arg2 ctaId:(id)arg3 pagePhoneNumber:(id)arg4 countryCode:(id)arg5 currentCTAType:(id)arg6 currentCTALabel:(id)arg7 actionChannelType:(id)arg8 ctaPositionOnActionBar:(long long)arg9 delegate:(id)arg10 analyticsUUID:(id)arg11 getQuoteFormName:(id)arg12 ;
-(void)setPageEditLogger:(id)arg1 ;
-(void)linkToExtraConfigTapped;
-(void)selectToSetUpDeepLink;
-(void)_cancelButtonItemTapped;
-(void)_fetchRequestTimeCTASetupInfo;
-(void)_receiveAddServiceNotification:(id)arg1 ;
-(FBPhoneInputHandler *)phoneInputHandler;
-(UIAlertView *)emptyPhoneNumberAlertView;
-(UIAlertView *)genericErrorAlertView;
-(void)_updateCTA;
-(void)_dismissCreateOrEditCTAViewController:(id)arg1 ;
-(void)_updateCountryCode;
-(void)_updateEditView;
-(UIAlertView *)deleteAlertView;
-(void)_pushNuxViewControllerWithNuxButtonType:(unsigned long long)arg1 ;
-(void)_presentServiceViewController;
-(void)setDeleteAlertView:(UIAlertView *)arg1 ;
-(void)_dismissPresentedServiceViewController;
-(void)_onMutationSuccess:(id)arg1 newCTAData:(id)arg2 ;
-(void)ctaAdminInfoFetcher:(id)arg1 didFetchCTAItems:(id)arg2 adminInfo:(id)arg3 createPrompt:(id)arg4 ;
-(void)ctaAdminInfoFetcher:(id)arg1 didFailFetchWithError:(id)arg2 ;
-(void)didTapDeleteButton;
-(void)didTapEditButton;
-(void)didTapPromoteButton;
-(void)didTapInsightsButton;
-(void)didTapServicesButton;
-(void)didTapBack;
-(void)setEmptyPhoneNumberAlertView:(UIAlertView *)arg1 ;
-(void)setGenericErrorAlertView:(UIAlertView *)arg1 ;
-(void)setPhoneInputHandler:(FBPhoneInputHandler *)arg1 ;
-(void)didUpdateGetQuoteForm:(id)arg1 ;
-(BOOL)fb_hidesTabBar;
-(void)setViewStateManager:(FBTransientViewStateManager *)arg1 ;
-(void)_saveButtonItemTapped;
-(void)didTapEditGetQuoteForm;
-(void)didFetchRequestTimeSetupInfo:(id)arg1 ;
-(void)didFetchRequestTimeSetupInfoFailedWithError:(id)arg1 ;
-(void)setDelegate:(id<FBPageCTAViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id<FBPageCTAViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

