/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBTableViewController.h>
#import <Facebook/FBPageCTAViewControllerDelegate.h>
#import <Facebook/FBPageEditActionBarActionSettingsViewControllerDelegate.h>
#import <Facebook/FBPageEditActionsPreviewTableViewCellDelegate.h>
#import <Facebook/FBPageEditAddableActionsTableViewControllerDelegate.h>
#import <Facebook/FBPageSectionsReorderTabControllerDelegate.h>
#import <Facebook/FBPageSectionsAddTabControllerDelegate.h>
#import <Facebook/FBPageSectionsToggleTableViewCellDelegate.h>
#import <Facebook/FBPageTemplateListViewControllerDelegate.h>

@protocol FBPageSectionsEditViewControllerDelegate;
@class FBMemPage, FBUserSession, FBPageSectionsNetworker, NSArray, UIView, FBMemPageCreateCTAViewController, FBPageEditCTAViewController, UIViewController, FBPageCTAConfirmationViewController, NSString, FBPageCTALogger, FBPageEditAnalyticsLogger, FBPageSession, FBPageComposerFlowDelegateHandler, FBListViewController, FBPageEditActionSectionDataProvider, FBPageEditAddableActionsTableViewController, FBPageTemplateListViewController, FIGTooltip, FBPagePhotosAlbumsSwitchingViewController;

@interface FBPageSectionsEditViewController : FBTableViewController <FBPageCTAViewControllerDelegate, FBPageEditActionBarActionSettingsViewControllerDelegate, FBPageEditActionsPreviewTableViewCellDelegate, FBPageEditAddableActionsTableViewControllerDelegate, FBPageSectionsReorderTabControllerDelegate, FBPageSectionsAddTabControllerDelegate, FBPageSectionsToggleTableViewCellDelegate, FBPageTemplateListViewControllerDelegate> {

	FBMemPage* _page;
	FBUserSession* _session;
	FBPageSectionsNetworker* _networker;
	NSArray* _sectionOptions;
	NSArray* _tableViewSections;
	NSArray* _tabSections;
	NSArray* _ctaSections;
	NSArray* _actionSections;
	NSArray* _previewOnlyTabsTitle;
	NSArray* _previewOnlyTabsRowIndex;
	UIView* _tabHeaderView;
	UIView* _ctaHeaderView;
	UIView* _actionHeaderView;
	UIView* _templateHeaderView;
	FBMemPageCreateCTAViewController* _createCTAItemController;
	FBPageEditCTAViewController* _editCTAViewController;
	UIViewController* _createCTAViewControllerWithType;
	FBPageCTAConfirmationViewController* _confirmationViewController;
	NSString* _analyticsUUID;
	FBPageCTALogger* _ctaLogger;
	FBPageEditAnalyticsLogger* _pageEditLogger;
	id<FBPageSectionsEditViewControllerDelegate> _delegate;
	BOOL _isActionConfigEnabled;
	FBPageSession* _pageSession;
	UIViewController* _videosVC;
	FBPageComposerFlowDelegateHandler* _composerFlowHandler;
	FBListViewController* _postViewController;
	FBPageEditActionSectionDataProvider* _actionSectionDataProvider;
	FBPageEditAddableActionsTableViewController* _addableActionsViewController;
	BOOL _isTemplatesGKEnabled;
	FBPageTemplateListViewController* _templateViewController;
	FIGTooltip* _infoToolTip;
	FBPagePhotosAlbumsSwitchingViewController* _photosAlbumsViewController;

}

@property (nonatomic,retain) FBPagePhotosAlbumsSwitchingViewController * photosAlbumsViewController;              //@synthesize photosAlbumsViewController=_photosAlbumsViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)navigationCoordinator;
-(BOOL)fb_showNavBarSearchField;
-(void)didAlterActionBarButtonOnActionBar:(id)arg1 newActionType:(id)arg2 position:(unsigned long long)arg3 ;
-(void)pageEditAddableActionsTableViewControllerDidFinishAddingActions;
-(void)pageEditAddableActionsTableViewControllerDidChooseBarActionToAdd:(id)arg1 ;
-(void)pageEditAddableActionsTableViewControllerDidChooseCTAToAdd:(id)arg1 ;
-(void)didTapCTAButton:(unsigned long long)arg1 ctaType:(id)arg2 ;
-(void)didTapActionBarButton:(id)arg1 atIndex:(long long)arg2 ;
-(void)didTapCTAActionBarButton:(id)arg1 atIndex:(long long)arg2 ;
-(void)didTapActionBarAddActionButton;
-(void)dismissCreateOrEditCTAViewControllerWithCTAName:(id)arg1 shouldShowConfirmation:(BOOL)arg2 updatedCallToActionData:(id)arg3 ;
-(void)didUpdateGetQuoteForm;
-(void)tabAdditionCompleted;
-(void)_addNavigationItem;
-(void)_fetchPageSections;
-(void)_handleDidPinPostNotification;
-(void)_handleDidDeletePostNotification;
-(double)_sectionHeaderViewHeightInSection:(long long)arg1 ;
-(id)_rowsInSection:(long long)arg1 ;
-(unsigned long long)_sectionTypeAtIndexPath:(id)arg1 ;
-(void)_didTapDefaultActionsOrdering:(id)arg1 ;
-(id)_createToggleCellForTableView:(id)arg1 rowType:(unsigned long long)arg2 isDefaultOrdering:(BOOL)arg3 switchAction:(SEL)arg4 ;
-(void)_didTapDefaultOrdering:(id)arg1 ;
-(void)_defaultOrderConfirmationTapped;
-(void)_handleTabDefaultOrderingMutationSuccess;
-(void)_performDefaultActionBarActionsMutation;
-(void)_performDefaultPrimaryButtonsMutation;
-(void)_onDefaultActionMutationsSuccess:(id)arg1 ;
-(id)_sectionHeaderViewInSection:(long long)arg1 ;
-(id)_navigationInfoWithController:(id)arg1 ;
-(void)_presentEditCTAViewController:(id)arg1 actionChannelType:(id)arg2 currentCTAPosition:(long long)arg3 ;
-(void)_presentCreateCTAViewController;
-(void)_showReviewsView;
-(void)_showCommunityView;
-(void)_showMenuView;
-(void)_showPostsView;
-(void)_showPhotosView;
-(void)_showVideosView;
-(void)_showEventsView;
-(void)_showOffersView;
-(void)_dismissEditPage;
-(id)_fetchPageActionsSection:(id)arg1 ;
-(void)_showConfirmationOverlay:(id)arg1 actionType:(unsigned long long)arg2 ;
-(id)_ctaAdminConfigFromActionChannel:(id)arg1 forCtaType:(id)arg2 ;
-(void)_didTapTemplateHeaderView;
-(void)_dismissConfirmationOverlay;
-(void)_presentCreateCTAViewControllerForCTAType:(id)arg1 ;
-(void)toggleInfoTapped:(id)arg1 withBodyText:(id)arg2 ;
-(void)didModifyTemplate;
-(id)initWithPage:(id)arg1 session:(id)arg2 analyticsUUID:(id)arg3 delegate:(id)arg4 ;
-(void)didTapMoreInfoForTemplateType:(id)arg1 ;
-(FBPagePhotosAlbumsSwitchingViewController *)photosAlbumsViewController;
-(void)setPhotosAlbumsViewController:(FBPagePhotosAlbumsSwitchingViewController *)arg1 ;
-(void)tabOrderUpdatedFromOldTabsOrder:(id)arg1 newTabsOrder:(id)arg2 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end

