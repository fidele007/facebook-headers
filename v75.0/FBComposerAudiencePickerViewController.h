/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBPresentableViewController.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <Facebook/FBTokenizerContainingDelegate.h>
#import <Facebook/FBEntityPickerTextFieldDelegate.h>
#import <Facebook/FBComposerCustomAudienceViewControllerDelegate.h>
#import <Facebook/FBComposerAudiencePrivacyDataSourceDelegate.h>
#import <Facebook/FBAccessibilityInvalidationEventsListener.h>
#import <Facebook/FBDismissalConfirmationViewControllerProtocol.h>
#import <UIKit/UITableViewDelegate.h>
#import <Facebook/FBComposerAudiencePickerController.h>

@protocol FBComposerCustomAudienceConfigDelegate, FBComposerAudiencePickerControllerDelegate;
@class FBTransientViewStateManager, FBComposerAudiencePickerView, UITableView, FBPopoverController, FBComposerCustomAudienceViewController, FBComposerAudiencePrivacyDataSource, FBUserSession, NSMutableArray, FBMutableTaggableCollection, FBComposerPrivacySetting, FBNuxController, FBPrivacyPickerAnalyticsData, NSString;

@interface FBComposerAudiencePickerViewController : UIViewController <FBPresentableViewController, UIPopoverControllerDelegate, FBTokenizerContainingDelegate, FBEntityPickerTextFieldDelegate, FBComposerCustomAudienceViewControllerDelegate, FBComposerAudiencePrivacyDataSourceDelegate, FBAccessibilityInvalidationEventsListener, FBDismissalConfirmationViewControllerProtocol, UITableViewDelegate, FBComposerAudiencePickerController> {

	FBTransientViewStateManager* _viewStateManager;
	FBComposerAudiencePickerView* _audiencePickerView;
	UITableView* _tableView;
	FBPopoverController* _popoverController;
	FBComposerCustomAudienceViewController* _customAudienceController;
	id<FBComposerCustomAudienceConfigDelegate> _customAudienceConfigDelegate;
	FBComposerAudiencePrivacyDataSource* _privacyDataSource;
	FBUserSession* _session;
	NSMutableArray* _availablePrivacySettings;
	FBMutableTaggableCollection* _taggableCollection;
	FBComposerPrivacySetting* _selectedAudience;
	FBNuxController* _nuxController;
	FBPrivacyPickerAnalyticsData* _analyticsData;
	unsigned long long _audiencePickerStyle;
	BOOL _audienceTableIsVisible;
	BOOL _audienceSelectedFromTypeahead;
	BOOL _showTagExpansionOptions;
	composerAudiencePickerFlags _;
	id<FBComposerAudiencePickerControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long preferredPresentationMethod; 
@property (nonatomic,readonly) unsigned long long preferredPresentationOptions; 
@property (assign,nonatomic,__weak) id<FBComposerAudiencePickerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(unsigned long long)defaultAudiencePickerStyleForCurrentDevice;
-(id)analyticsModule;
-(BOOL)fb_showNavBarSearchField;
-(unsigned long long)preferredPresentationMethod;
-(unsigned long long)preferredPresentationOptions;
-(void)didReceiveAccessibilityInvalidation;
-(BOOL)shouldDismissViewController;
-(void)textField:(id)arg1 searchTextChanged:(id)arg2 ;
-(void)textField:(id)arg1 userWillDeleteObjectByTyping:(id)arg2 ;
-(void)showContentState;
-(void)configureWithAvailablePrivacySettings:(id)arg1 selectedAudience:(id)arg2 showTagExpansionOptions:(BOOL)arg3 ;
-(void)expandPrivacyOptionsIfNeeded;
-(void)activateFBComposerAudienceDataSourceWithTaggableCollection:(id)arg1 ;
-(void)showEmptyState;
-(void)forceHideKeyboard;
-(id)initWithSession:(id)arg1 analyticsData:(id)arg2 audiencePickerStyle:(unsigned long long)arg3 ;
-(void)availablePrivacySettingsChanged:(id)arg1 audienceTouchedByUser:(BOOL)arg2 ;
-(void)compositionAudienceChanged:(id)arg1 ;
-(void)taggedAndMentionedUsersChanged:(id)arg1 ;
-(void)pickerControllerWasDismissedByTappingOutsidePopover;
-(void)_configureUIForAudience:(id)arg1 audienceOptions:(id)arg2 ;
-(void)_logCurrentSettingToFunnelWithAction:(id)arg1 ;
-(void)_hideTokenizerKeyboardAndDeselectCells;
-(void)_commitAudienceSelectionChangesIfNeeded;
-(void)_dismissEditableOptionViewController;
-(BOOL)_updateSelectedAudienceFromUIState;
-(id)_primarySelectedPrivacyOption;
-(id)_readAudienceFromUIState;
-(void)_clearSelectedAudienceOption:(id)arg1 ;
-(void)_performBlockWithAnimationForCurrentTraits:(/*^block*/id)arg1 ;
-(void)_willSelectOption:(id)arg1 fromSearch:(BOOL)arg2 primaryPrivacyOption:(id)arg3 ;
-(BOOL)_selectedOptions:(id)arg1 supportsTokenableOptionDeselection:(id)arg2 ;
-(BOOL)_shouldNotifyDelegateOfSelectedAudienceChangesOnTap;
-(BOOL)_shouldDismissAfterChangeFromSelectedOptions:(id)arg1 toOptions:(id)arg2 userSelectedOption:(id)arg3 ;
-(void)_evaluateTagExpansionNUXForSelectionIndexPathIfApplicable:(id)arg1 ;
-(BOOL)_isDefaultFriendExclusionOption:(id)arg1 ;
-(BOOL)_isOnlyTheseFriendsOption:(id)arg1 ;
-(void)_showFriendExclusionUsingSeedOption:(id)arg1 ;
-(void)_showOnlyTheseFriendsUsingSeedOption:(id)arg1 ;
-(void)_clearAllSelectedTokens;
-(void)_handleUserInitiatedAudienceSelectionAddition:(id)arg1 ;
-(BOOL)_isFriendExclusionOption:(id)arg1 ;
-(void)showExclusionsViewWithSeedAudienceOption:(id)arg1 ;
-(BOOL)_isDefaultOnlyTheseFriendsOption:(id)arg1 ;
-(void)showOnlyTheseFriendsViewWithSeedAudienceOption:(id)arg1 ;
-(void)_processTagExpansionOptionsWithPrivacySetting:(id)arg1 ;
-(FBComposerAudienceTagExpansionUIState)computeTagExpansionUIStateForPrivacySetting:(id)arg1 ;
-(void)_populateTextFieldAndTableUsingAudience:(id)arg1 audienceOptions:(id)arg2 ;
-(BOOL)_optionMatchesEditableDefault:(id)arg1 ;
-(void)_processFeedAudienceTokensForTagExpansion;
-(void)_updateNavigationButtonsForAudienceChange;
-(void)_updateNoTagExpansionWithTokenableIfNeeded:(id)arg1 action:(int)arg2 ;
-(BOOL)_shouldAnimateCustomAudienceViewControllerTransitions;
-(void)_setupTagExpansionNUX;
-(int)_determineTagExpansionEligibility;
-(void)privacyDataSourceUserDidTapMore:(id)arg1 ;
-(void)_didTapNavigationDoneButton;
-(void)_didTapNavigationCancelButton;
-(void)tokenizer:(id)arg1 willChangeHeight:(double)arg2 ;
-(void)accessoryViewWasTappedForTokenizer:(id)arg1 ;
-(void)nonInteractiveAudienceViewWasTapped;
-(void)customAudienceControllerDidCancel;
-(void)customAudienceControllerDidUpdateWithNewPrivacySetting:(id)arg1 previousSeedPrivacySetting:(id)arg2 overwriteSeedPrivacySetting:(BOOL)arg3 isFinished:(BOOL)arg4 ;
-(void)_updateDataSourceWithFilteredAvailablePrivacySettings:(id)arg1 ;
-(void)setDelegate:(id<FBComposerAudiencePickerControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(id<FBComposerAudiencePickerControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(CGSize)preferredContentSize;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CGSize)contentSizeForViewInPopover;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)accessibilityPerformEscape;
@end
