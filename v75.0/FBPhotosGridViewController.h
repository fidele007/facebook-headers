/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBPhotoViewControllerDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <Facebook/FBComposerFlowDelegate.h>
#import <Facebook/FBComposerPublisherStatusListener.h>
#import <Facebook/FBCompositionListener.h>
#import <Facebook/FBPhotosGridButtonHeaderViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Facebook/FBProfilePictureControllerResponderForwarder.h>
#import <Facebook/FBGraphQLConnectionSyncStoreListener.h>
#import <Facebook/FBClonePhotoViewProviderDelegate.h>
#import <Facebook/FBFullScreenTransitionBoundsProvider.h>
#import <Facebook/FBPhotoCollectionDataSourceArraySubclassSyncDelegate.h>
#import <libobjc.A.dylib/NSCacheDelegate.h>
#import <Facebook/FBAlbumViewerDelegate.h>

@protocol FBGraphQLConnectionSyncStoreProtocol, FBGraphQLConnectionSyncStoreRequestProvider, FBPhotosGridViewControllerDelegate, FBPhotosCollageGridTapHandler, FBMediaContainerProtocol;
@class FBUserSession, UIView, FBAnimationPerformanceLogger, FBPhotosConsumptionReferrer, FBViewStateManagerPerfLogger, FBPhotoGridPerfLogger, FBComposerAuthor, FBComposerPublisherStatusEventFilter, FBPublisherManager, NSString, FBProfilePicturePickerController, FBProfilePictureControllerResponder, FBMemAlbum, FBPhotosGridContainerView, UICollectionView, FBConnectionStoreViewStateManager, FBScenePath;

@interface FBPhotosGridViewController : UIViewController <FBPhotoViewControllerDelegate, UICollectionViewDelegate, UICollectionViewDataSource, FBComposerFlowDelegate, FBComposerPublisherStatusListener, FBCompositionListener, FBPhotosGridButtonHeaderViewDelegate, UICollectionViewDelegateFlowLayout, FBProfilePictureControllerResponderForwarder, FBGraphQLConnectionSyncStoreListener, FBClonePhotoViewProviderDelegate, FBFullScreenTransitionBoundsProvider, FBPhotoCollectionDataSourceArraySubclassSyncDelegate, NSCacheDelegate, FBAlbumViewerDelegate> {

	FBUserSession* _session;
	id<FBGraphQLConnectionSyncStoreProtocol> _mediaSetStore;
	UIView* _sectionHeaderContentView;
	long long _photoGridSectionIndex;
	long long _photoOrder;
	FBAnimationPerformanceLogger* _apTracker;
	FBPhotosConsumptionReferrer* _referrer;
	BOOL _showPhotoUploadViewOnAppear;
	FBViewStateManagerPerfLogger* _viewStateManagerSpinnerLogger;
	id<FBGraphQLConnectionSyncStoreRequestProvider> _requestProvider;
	FBPhotoGridPerfLogger* _photoGridPerfLogger;
	BOOL _isViewVisible;
	FBComposerAuthor* _authorForUploadingPhotos;
	FBComposerPublisherStatusEventFilter* _publisherEventFilter;
	FBPublisherManager* _publisherManager;
	NSString* _compositionIDForCurrentComposer;
	UIView* _topCornerViewForPopoverSource;
	FBProfilePicturePickerController* _profilePicturePickerController;
	FBProfilePictureControllerResponder* _profilePictureControllerResponder;
	FBMemAlbum* _album;
	FBPhotosGridContainerView* _containerView;
	BOOL _refreshGridViewOnViewWillAppear;
	BOOL _onlyAllowPhotoSelection;
	BOOL _hideNavBarSearchField;
	BOOL _useVariableWidthView;
	BOOL _userCanAddPhoto;
	id<FBPhotosGridViewControllerDelegate> _photosGridDelegate;
	id<FBPhotosCollageGridTapHandler> _photoTapHandler;
	UICollectionView* _gridView;
	FBConnectionStoreViewStateManager* _viewStateManager;
	id<FBGraphQLConnectionSyncStoreProtocol> _albumStore;
	id<FBMediaContainerProtocol> _mediaContainer;
	FBScenePath* _scenePath;
	NSString* _analyticsModule;

}

@property (nonatomic,retain) UICollectionView * gridView;                                                   //@synthesize gridView=_gridView - In the implementation block
@property (nonatomic,retain) FBConnectionStoreViewStateManager * viewStateManager;                          //@synthesize viewStateManager=_viewStateManager - In the implementation block
@property (assign,nonatomic) BOOL userCanAddPhoto;                                                          //@synthesize userCanAddPhoto=_userCanAddPhoto - In the implementation block
@property (nonatomic,retain) id<FBGraphQLConnectionSyncStoreProtocol> albumStore;                           //@synthesize albumStore=_albumStore - In the implementation block
@property (nonatomic,retain) id<FBMediaContainerProtocol> mediaContainer;                                   //@synthesize mediaContainer=_mediaContainer - In the implementation block
@property (nonatomic,retain) FBScenePath * scenePath;                                                       //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,copy) NSString * analyticsModule;                                                      //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (assign,nonatomic) BOOL onlyAllowPhotoSelection;                                                  //@synthesize onlyAllowPhotoSelection=_onlyAllowPhotoSelection - In the implementation block
@property (assign,nonatomic) BOOL hideNavBarSearchField;                                                    //@synthesize hideNavBarSearchField=_hideNavBarSearchField - In the implementation block
@property (assign,nonatomic,__weak) id<FBPhotosGridViewControllerDelegate> photosGridDelegate;              //@synthesize photosGridDelegate=_photosGridDelegate - In the implementation block
@property (assign,nonatomic) BOOL useVariableWidthView;                                                     //@synthesize useVariableWidthView=_useVariableWidthView - In the implementation block
@property (nonatomic,retain) id<FBPhotosCollageGridTapHandler> photoTapHandler;                             //@synthesize photoTapHandler=_photoTapHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)startedPublishingPublisherData:(id)arg1 ;
-(void)attemptedPublicationOfPublisherData:(id)arg1 ;
-(void)failedPublishingPublisherData:(id)arg1 withError:(id)arg2 ;
-(void)failedPublishingAndWaitingForRetryPublisherData:(id)arg1 withError:(id)arg2 ;
-(void)terminallyFailedPublishingPublisherData:(id)arg1 withError:(id)arg2 ;
-(void)startedServerProcessingForUploadedPublication:(id)arg1 ;
-(void)successfullyPublishedPublisherData:(id)arg1 withResponse:(id)arg2 ;
-(void)cancelledPublishingPublisherData:(id)arg1 ;
-(void)pausedPublishingPublisherData:(id)arg1 ;
-(void)retriedPublishingPublisherData:(id)arg1 ;
-(void)startedWaitingForConnectivityForPublicationOfPublisherData:(id)arg1 ;
-(void)scheduledPublicationOfPublisherData:(id)arg1 atDate:(id)arg2 ;
-(void)publicationProgressedWithProgress:(double)arg1 forPublisherData:(id)arg2 ;
-(void)startedUploadingItemOfType:(int)arg1 withThumbnailImage:(id)arg2 forPublisherData:(id)arg3 ;
-(void)uploadQualityDidChange:(id)arg1 forPublisherData:(id)arg2 ;
-(void)canCancelPublishingOfPublisherData:(id)arg1 ;
-(void)cannotCancelPublishingOfPublisherData:(id)arg1 ;
-(FBScenePath *)scenePath;
-(NSString *)analyticsModule;
-(FBConnectionStoreViewStateManager *)viewStateManager;
-(BOOL)fb_showNavBarSearchField;
-(void)setScenePath:(FBScenePath *)arg1 ;
-(void)composerCompletedWithResult:(id)arg1 ;
-(BOOL)analyticsRequiresNetworkContent;
-(BOOL)_isSyncing;
-(void)setAnalyticsModule:(NSString *)arg1 ;
-(void)setViewStateManager:(FBConnectionStoreViewStateManager *)arg1 ;
-(id)initWithMediaStore:(id)arg1 session:(id)arg2 referrer:(id)arg3 analyticsModule:(id)arg4 ;
-(void)setPhotoTapHandler:(id<FBPhotosCollageGridTapHandler>)arg1 ;
-(void)profilePicturePickerDidUploadPic:(id)arg1 ;
-(void)profilePicturePickerDidCancel:(id)arg1 ;
-(CGRect)fullScreenTransitionBoundsForView:(id)arg1 ;
-(void)connectionSyncStore:(id)arg1 didAddNodesAtIndexes:(id)arg2 ;
-(void)connectionSyncStore:(id)arg1 didRemoveNodesAtIndexes:(id)arg2 ;
-(void)connectionSyncStore:(id)arg1 requestProvider:(id)arg2 didReceiveResponse:(id)arg3 fromCache:(BOOL)arg4 ;
-(BOOL)analyticsAutomaticallyLogContent;
-(BOOL)analyticsHasCachedNetworkContent;
-(void)composerStructuredDataUpdated:(id)arg1 ;
-(void)composerPublicationProcessStartedForPublisherData:(id)arg1 ;
-(void)composerFinishedDismissingForCompositionIdentifier:(id)arg1 navigationCoordinator:(id)arg2 ;
-(void)composerDidDismissContentSuggestion:(id)arg1 withCompositionID:(id)arg2 ;
-(void)composerDidSelectContentSuggestion:(id)arg1 withCompositionID:(id)arg2 ;
-(id)clonePhotoViewProvider:(id)arg1 cloneViewForMedia:(id)arg2 ;
-(void)setOnlyAllowPhotoSelection:(BOOL)arg1 ;
-(id)initWithMediaContainer:(id)arg1 session:(id)arg2 referrer:(id)arg3 ;
-(void)setPhotosGridDelegate:(id<FBPhotosGridViewControllerDelegate>)arg1 ;
-(id)_convertToindexPathsFromIndexSet:(id)arg1 ;
-(BOOL)onlyAllowPhotoSelection;
-(void)showMediaUploadViewWithSurveyAfterComposerCompleted:(BOOL)arg1 ;
-(void)gridButtonheaderView:(id)arg1 didTapButton:(id)arg2 ;
-(id<FBGraphQLConnectionSyncStoreProtocol>)albumStore;
-(void)setAlbumStore:(id<FBGraphQLConnectionSyncStoreProtocol>)arg1 ;
-(void)collageGridArrayNeedsSync:(id)arg1 ;
-(BOOL)collageGridArrayCanSync:(id)arg1 ;
-(id)initWithMediaContainer:(id)arg1 session:(id)arg2 referrer:(id)arg3 analyticsModule:(id)arg4 ;
-(BOOL)_isFBID:(id)arg1 ;
-(void)setMediaContainer:(id<FBMediaContainerProtocol>)arg1 ;
-(BOOL)_isPhotosOfUser;
-(void)_logDebug:(id)arg1 ;
-(void)_syncNextPageIfNeeded;
-(BOOL)_isPhotosOfYou;
-(void)_addUploadPhotoButton;
-(void)_loadAlbum;
-(void)_updatePhotosGridWithUpdatedAlbum;
-(void)_showPhotoUploadViewIfNecessary;
-(void)startShowingPublishingOfPublication:(id)arg1 ;
-(void)_createUploadPhotoButton;
-(int)_buttonTypeForAlbum;
-(void)setUserCanAddPhoto:(BOOL)arg1 ;
-(void)_tappedUploadButton:(id)arg1 event:(id)arg2 ;
-(void)_showPhotoUploadView:(id)arg1 event:(id)arg2 ;
-(void)_ensureViewAtIndexPathIsVisible:(id)arg1 ;
-(id)_photoViewForItemAtIndexPath:(id)arg1 ;
-(void)_uploadProfilePhoto:(id)arg1 event:(id)arg2 ;
-(id)_sourceViewFromSender:(id)arg1 event:(id)arg2 ;
-(long long)_extraButtonCount;
-(CGRect)_frameFromEvent:(id)arg1 ;
-(id)fb_segmentShortTitle;
-(BOOL)hideNavBarSearchField;
-(void)setHideNavBarSearchField:(BOOL)arg1 ;
-(id<FBPhotosGridViewControllerDelegate>)photosGridDelegate;
-(BOOL)useVariableWidthView;
-(void)setUseVariableWidthView:(BOOL)arg1 ;
-(id<FBPhotosCollageGridTapHandler>)photoTapHandler;
-(BOOL)userCanAddPhoto;
-(id<FBMediaContainerProtocol>)mediaContainer;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(void)setGridView:(UICollectionView *)arg1 ;
-(UICollectionView *)gridView;
@end

