/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBActivitySharingSimpleActivityTaggingControllerDelegate.h>
#import <Facebook/FBComposerActivityTagObjectPickerModelControllerDelegate.h>
#import <Facebook/FBComposerActivityTagObjectPickerViewControllerDelegate.h>
#import <Facebook/FBComposerActivityTagIconPickerViewControllerDelegate.h>
#import <Facebook/FBPlacePickerSearchBarDelegate.h>
#import <Facebook/FBComposerActivityTagObjectPrefetchControllerDelegate.h>
#import <Facebook/FBTableViewSectionDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Facebook/FBActivitySharingPickerDataSourceProtocol.h>

@protocol FBTableViewMutating, FBActivitySharingPickerDataSourceDelegate, FBActivitySharingActivityPickerDataSourceDelegate;
@class UIViewController, FBActivitySharingComposition, FBUserSession, FBActivitySharingTableViewCellFactory, FBActivitySharingSimpleActivityTaggingController, FBComposerActivityTagObjectPickerViewController, FBComposerActivityTagIconPickerViewController, UITableViewCell, FBTaggableActivityComposition, FBMemTaggableActivity, NSString, FBComposerCompositionState, NSMutableArray, FBAnalyticsPrefetcherLogger, FBComposerActivityTagObjectPrefetchController, FBComposerMinutiaeStickerInComposerSearchExperimentContext, FBComposerActivityTagObjectPickerModelController, NSArray, FBComposerActivityTagPickerModelController, FBActivitySharingActivityPickerSearchField, FBActivitySharingGenericSearchField;

@interface FBActivitySharingActivityPickerDataSource : NSObject <FBActivitySharingSimpleActivityTaggingControllerDelegate, FBComposerActivityTagObjectPickerModelControllerDelegate, FBComposerActivityTagObjectPickerViewControllerDelegate, FBComposerActivityTagIconPickerViewControllerDelegate, FBPlacePickerSearchBarDelegate, FBComposerActivityTagObjectPrefetchControllerDelegate, FBTableViewSectionDataSource, UITableViewDelegate, FBActivitySharingPickerDataSourceProtocol> {

	FBUserSession* _session;
	FBActivitySharingTableViewCellFactory* _cellFactory;
	FBActivitySharingSimpleActivityTaggingController* _activityPicker;
	FBComposerActivityTagObjectPickerViewController* _objectPicker;
	FBComposerActivityTagIconPickerViewController* _iconPicker;
	UITableViewCell* _inactiveSearchField;
	BOOL _verbSearchFieldActivated;
	FBTaggableActivityComposition* _selectedActivityComposition;
	FBMemTaggableActivity* _selectedActivity;
	NSString* _selectedActivityID;
	NSString* _navigationBarTitle;
	FBComposerCompositionState* _compositionState;
	NSMutableArray* _navigationStack;
	FBAnalyticsPrefetcherLogger* _prefetchLogger;
	FBComposerActivityTagObjectPrefetchController* _objectPrefetchController;
	BOOL _isPrefetchingObjects;
	FBComposerMinutiaeStickerInComposerSearchExperimentContext* _inComposerSearchExperimentContext;
	FBComposerActivityTagObjectPickerModelController* _inComposerSearchObjectPickerModelController;
	FBMemTaggableActivity* _taggableActivityFromInComposerSearch;
	NSArray* _taggableActivityObjectsFromInComposerSearch;
	NSString* _previousSearchQueryText;
	BOOL _initialFilledIn;
	id<FBTableViewMutating> _tableViewMutator;
	long long _state;
	id<FBActivitySharingPickerDataSourceDelegate> _delegate;
	UIViewController* _containingViewController;
	FBActivitySharingComposition* _composition;
	long long _initialState;
	FBComposerActivityTagPickerModelController* _prefetchedActivityController;
	NSString* _initialTaggableActivityID;
	NSString* _activityPickerTitle;
	NSString* _flowSource;
	BOOL* _shouldExcludeFeeling;
	id<FBActivitySharingActivityPickerDataSourceDelegate> _dataSourceDelegate;
	FBActivitySharingActivityPickerSearchField* _objectSearchField;
	FBActivitySharingGenericSearchField* _verbSearchField;

}

@property (nonatomic,retain) FBActivitySharingActivityPickerSearchField * objectSearchField;                               //@synthesize objectSearchField=_objectSearchField - In the implementation block
@property (nonatomic,retain) FBActivitySharingGenericSearchField * verbSearchField;                                        //@synthesize verbSearchField=_verbSearchField - In the implementation block
@property (nonatomic,retain) FBComposerActivityTagPickerModelController * prefetchedActivityController;                    //@synthesize prefetchedActivityController=_prefetchedActivityController - In the implementation block
@property (nonatomic,copy) NSString * initialTaggableActivityID;                                                           //@synthesize initialTaggableActivityID=_initialTaggableActivityID - In the implementation block
@property (nonatomic,copy) NSString * activityPickerTitle;                                                                 //@synthesize activityPickerTitle=_activityPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * flowSource;                                                                          //@synthesize flowSource=_flowSource - In the implementation block
@property (assign,nonatomic) BOOL* shouldExcludeFeeling;                                                                   //@synthesize shouldExcludeFeeling=_shouldExcludeFeeling - In the implementation block
@property (assign,nonatomic,__weak) id<FBActivitySharingActivityPickerDataSourceDelegate> dataSourceDelegate;              //@synthesize dataSourceDelegate=_dataSourceDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<FBTableViewMutating> tableViewMutator;                                                     //@synthesize tableViewMutator=_tableViewMutator - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,nonatomic,__weak) id<FBActivitySharingPickerDataSourceDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIViewController * containingViewController;                                                  //@synthesize containingViewController=_containingViewController - In the implementation block
@property (assign,nonatomic) long long state;                                                                              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) FBActivitySharingComposition * composition;                                                   //@synthesize composition=_composition - In the implementation block
@property (assign,nonatomic) BOOL initialFilledIn;                                                                         //@synthesize initialFilledIn=_initialFilledIn - In the implementation block
@property (assign,nonatomic) long long initialState;                                                                       //@synthesize initialState=_initialState - In the implementation block
-(void)setTableViewMutator:(id<FBTableViewMutating>)arg1 ;
-(id<FBTableViewMutating>)tableViewMutator;
-(void)composerCompositionStateChangedFromPreviousCompositionState:(id)arg1 toCurrentCompositionState:(id)arg2 ;
-(void)setFlowSource:(NSString *)arg1 ;
-(id)initWithSession:(id)arg1 cellFactory:(id)arg2 composition:(id)arg3 ;
-(void)setShouldExcludeFeeling:(BOOL*)arg1 ;
-(void)setPrefetchedActivityController:(FBComposerActivityTagPickerModelController *)arg1 ;
-(void)cleanupFromEvent:(long long)arg1 ;
-(id)selectedObjectID;
-(unsigned long long)numberOfSectionsWhenExpanded;
-(FBComposerActivityTagPickerModelController *)prefetchedActivityController;
-(FBActivitySharingActivityPickerSearchField *)objectSearchField;
-(void)_prepareObjectPicker;
-(void)_prepareVerbPicker;
-(FBActivitySharingGenericSearchField *)verbSearchField;
-(void)_backButtonTapped:(id)arg1 ;
-(void)_fetchInComposerSearchTaggableActivityWithLegacyApiID:(id)arg1 ;
-(void)_activateVerbSearchField;
-(void)_presentObjectPickerAfterSelectingVerb;
-(void)_pickTaggableActivity:(id)arg1 ;
-(void)_popToRootPickerAnimated:(BOOL)arg1 ;
-(void)_navigateToPicker:(int)arg1 animated:(BOOL)arg2 ;
-(void)_presentPickerWithAnimation:(long long)arg1 ;
-(void)_popLastPickerAnimated:(BOOL)arg1 ;
-(void)_handleInComposerSearchCacheResponse:(id)arg1 willDownloadFreshResponse:(BOOL)arg2 ;
-(void)_handleInComposerSearchDownloadedResponse:(id)arg1 ;
-(void)_handleInComposerSearchQueryFailure;
-(void)_setUpForInComposerSearchTaggableActivity;
-(void)_presentIconPickerWithActivityComposition:(id)arg1 ;
-(void)activityTaggingController:(id)arg1 didPickActivity:(id)arg2 ;
-(void)activityTaggingController:(id)arg1 didPickActivity:(id)arg2 isFreeformEntry:(BOOL)arg3 ;
-(void)activityTaggingControllerWillBeingScrolling:(id)arg1 ;
-(void)activityTaggingControllerDidFinishFetchingVerbs:(id)arg1 ;
-(NSString *)initialTaggableActivityID;
-(void)setInitialTaggableActivityID:(NSString *)arg1 ;
-(NSString *)activityPickerTitle;
-(void)setActivityPickerTitle:(NSString *)arg1 ;
-(NSString *)flowSource;
-(BOOL*)shouldExcludeFeeling;
-(void)setObjectSearchField:(FBActivitySharingActivityPickerSearchField *)arg1 ;
-(void)setVerbSearchField:(FBActivitySharingGenericSearchField *)arg1 ;
-(id)searchFieldCell;
-(id)reuseIdentifierForSearchFieldCell;
-(BOOL)isFilledIn;
-(BOOL)canBeFlowDestination;
-(unsigned long long)pickerSection;
-(BOOL)initialFilledIn;
-(void)setInitialFilledIn:(BOOL)arg1 ;
-(void)activitySharingTableViewFilledInCellDidTapClearButton:(id)arg1 ;
-(void)activitySharingTableViewFilledInCellDidTapIcon:(id)arg1 ;
-(id)inactiveSearchField;
-(void)composerActivityTagObjectPickerModelControllerLoadingDidComplete:(id)arg1 loadedFromCache:(BOOL)arg2 ;
-(void)composerActivityTagObjectPickerModelController:(id)arg1 loadingDidFailWithError:(id)arg2 ;
-(void)prefetchControllerLoadingDidBegin:(id)arg1 forModelController:(id)arg2 ;
-(void)prefetchControllerLoadingDidComplete:(id)arg1 forModelController:(id)arg2 ;
-(void)prefetchControllerLoadingDidFail:(id)arg1 forModelController:(id)arg2 withError:(id)arg3 ;
-(void)composerActivityTagObjectPicker:(id)arg1 didPickTaggableActivity:(id)arg2 isFreeformEntry:(BOOL)arg3 ;
-(void)composerActivityTagIconPicker:(id)arg1 didPickTaggableActivity:(id)arg2 ;
-(void)setDataSourceDelegate:(id<FBActivitySharingActivityPickerDataSourceDelegate>)arg1 ;
-(id<FBActivitySharingActivityPickerDataSourceDelegate>)dataSourceDelegate;
-(void)setDelegate:(id<FBActivitySharingPickerDataSourceDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBActivitySharingPickerDataSourceDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)leftBarButtonItem;
-(id)selection;
-(void)deactivate;
-(void)activate;
-(id)placeholder;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(id)prefix;
-(void)setInitialState:(long long)arg1 ;
-(long long)initialState;
-(id)navigationBarTitle;
-(id)iconImageView;
-(FBActivitySharingComposition *)composition;
-(void)setComposition:(FBActivitySharingComposition *)arg1 ;
-(void)setContainingViewController:(UIViewController *)arg1 ;
-(UIViewController *)containingViewController;
@end

