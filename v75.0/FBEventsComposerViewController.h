/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBMediaUploadItemDelegate.h>
#import <Facebook/FBEventsComposerCollectionViewDataSourceDelegate.h>
#import <Facebook/FBPresentableViewController.h>

@protocol FBQueriedActorFieldsProtocol, FBEventsComposerViewControllerDelegate;
@class FBUserSession, FBMemEvent, FBEventAnalyticTracker, FBEventCreationSuggestion, FBNavigationBarTitleControl, FBEventsComposerView, FBEventsComposerCollectionViewDataSource, FBTransientViewStateManager, UIView, FBMemModelObject, FBMemPage, FBEventsComposerCoverPhotoFieldController, NSMutableArray, NSMutableDictionary, NSArray, NSString, NSDate, FBMemGroup, FBPopoverActionSheet, FBEventComposerPrivacyModel;

@interface FBEventsComposerViewController : UIViewController <FBMediaUploadItemDelegate, FBEventsComposerCollectionViewDataSourceDelegate, FBPresentableViewController> {

	FBUserSession* _session;
	FBMemEvent* _event;
	FBMemEvent* _downloadedEvent;
	FBEventAnalyticTracker* _tracker;
	FBEventCreationSuggestion* _suggestion;
	unsigned long long _composerMode;
	FBNavigationBarTitleControl* _titleView;
	FBEventsComposerView* _composerView;
	FBEventsComposerCollectionViewDataSource* _composerDataSource;
	FBTransientViewStateManager* _viewStateManager;
	UIView* _loadingOverlay;
	id _headDownloadRequest;
	id _viewerActorDownloadRequest;
	id _defaultHostDownloadRequest;
	FBMemModelObject*<FBQueriedActorFieldsProtocol> _viewerActor;
	FBMemPage* _selectedPage;
	FBEventsComposerCoverPhotoFieldController* _coverPhoto;
	NSMutableArray* _categoryGroupLabels;
	NSMutableDictionary* _categoryGroupLabelToCategories;
	id _pageEventCoverPhotoDownloadRequest;
	id _pageEventCategoriesDownloadRequest;
	NSArray* _inviteeIDs;
	NSString* _createFromPageId;
	NSDate* _timeOpened;
	BOOL _privacyOptionsViewed;
	NSString* _pageCoverPhotoID;
	id<FBEventsComposerViewControllerDelegate> _delegate;
	FBMemGroup* _group;
	FBPopoverActionSheet* _popoverActionSheet;
	FBEventComposerPrivacyModel* _selectedPrivacy;

}

@property (nonatomic,retain) FBPopoverActionSheet * popoverActionSheet;                               //@synthesize popoverActionSheet=_popoverActionSheet - In the implementation block
@property (nonatomic,retain) FBEventComposerPrivacyModel * selectedPrivacy;                           //@synthesize selectedPrivacy=_selectedPrivacy - In the implementation block
@property (assign,nonatomic,__weak) id<FBEventsComposerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBMemGroup * group;                                                      //@synthesize group=_group - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long preferredPresentationMethod; 
@property (nonatomic,readonly) unsigned long long preferredPresentationOptions; 
+(id)titleForComposerMode:(unsigned long long)arg1 ;
+(id)privacyTitleViewPrivacyConfigForPrivacyModel:(id)arg1 composerMode:(unsigned long long)arg2 isPrivacyLocked:(BOOL)arg3 ;
+(id)privacyTitleForPrivacyModel:(id)arg1 ;
-(id)analyticsModule;
-(void)presentWithNavigationInfo:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)fb_showNavBarSearchField;
-(unsigned long long)preferredPresentationMethod;
-(unsigned long long)preferredPresentationOptions;
-(id)initWithSession:(id)arg1 event:(id)arg2 inviteeIDs:(id)arg3 pageId:(id)arg4 tracker:(id)arg5 suggestion:(id)arg6 ;
-(void)dismissViewController:(id)arg1 animated:(BOOL)arg2 ;
-(FBPopoverActionSheet *)popoverActionSheet;
-(void)didSelectCancel:(id)arg1 ;
-(void)_handleDownloadedHeadResponse:(id)arg1 error:(id)arg2 ;
-(void)_showErrorAlertWithMessage:(id)arg1 ;
-(void)setPopoverActionSheet:(FBPopoverActionSheet *)arg1 ;
-(id)partialEventCreateInputDataSet;
-(id)partialEventEditInputDataSet;
-(void)dataSource:(id)arg1 didUpdateTitleText:(id)arg2 ;
-(void)willCancelEventWithDataSource:(id)arg1 ;
-(void)didCancelEventWithDataSource:(id)arg1 withError:(id)arg2 ;
-(void)_downloadPageEventCategories;
-(void)_handleDownloadedPageEventCategoriesResponse:(id)arg1 error:(id)arg2 ;
-(void)_downloadEventHeader;
-(void)_downloadViewerActor;
-(void)_downloadDefaultHost;
-(void)_downloadPageEventCoverPhoto;
-(void)_displayEvent;
-(id)updatedFieldsAnalyticsExtras;
-(void)performEdit;
-(void)performCreate;
-(void)updateTracker;
-(BOOL)_hasModifiedFields;
-(void)setSelectedPrivacy:(FBEventComposerPrivacyModel *)arg1 ;
-(void)_decoratePrivacyActionSheetItem:(id)arg1 privacyOption:(id)arg2 ;
-(void)didSelectTitleView:(id)arg1 ;
-(void)_updateHostFieldController;
-(void)configureForDefaultOverlay;
-(FBEventComposerPrivacyModel *)selectedPrivacy;
-(id)partialCreateEventVisibilityData;
-(BOOL)validateForCreate;
-(void)configureForSavingOverlay;
-(void)_beginUploadOfCoverPhotoAttachment:(id)arg1 ;
-(void)_attachCoverPhotoTheme:(id)arg1 toEvent:(id)arg2 ;
-(void)_attachCoverPhotoWithPhotoID:(id)arg1 toEvent:(id)arg2 ;
-(void)didFailForComposerMode:(unsigned long long)arg1 withError:(id)arg2 ;
-(void)_attachCoverPhotoMediaItem:(id)arg1 toEvent:(id)arg2 ;
-(void)_attachCoverPhotoHelper:(id)arg1 event:(id)arg2 ;
-(void)_handleDownloadedViewerActorResponse:(id)arg1 error:(id)arg2 ;
-(void)_handleDownloadedDefaultHostResponse:(id)arg1 error:(id)arg2 ;
-(void)_handleDownloadedPageEventCoverPhotoResponse:(id)arg1 error:(id)arg2 ;
-(void)mediaUploadItemDidStart:(id)arg1 ;
-(void)mediaUploadItemDidStartProcessingStep:(id)arg1 ;
-(void)mediaUploadItemDidFinishProcessingStep:(id)arg1 ;
-(void)mediaUploadItemDidFinish:(id)arg1 ;
-(void)mediaUploadItem:(id)arg1 didFailWithError:(id)arg2 allowBackgroundTask:(BOOL)arg3 ;
-(void)mediaUploadItemDidSendCancelRequest:(id)arg1 ;
-(void)mediaUploadItemDidCancel:(id)arg1 ;
-(void)mediaUploadItemRestart:(id)arg1 ;
-(void)mediaUploadItem:(id)arg1 didUpdateToProgress:(double)arg2 fromProgress:(double)arg3 ;
-(id)partialEditEventVisibilityData;
-(BOOL)isRetry;
-(void)setDelegate:(id<FBEventsComposerViewControllerDelegate>)arg1 ;
-(id<FBEventsComposerViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)_dismissViewController;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setGroup:(FBMemGroup *)arg1 ;
-(FBMemGroup *)group;
@end

