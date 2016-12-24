/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBPresentableViewController.h>
#import <Facebook/FBNavigationItemManagerDelegate.h>
#import <Facebook/FBMediaPickerLibraryControllerDelegate.h>
#import <Facebook/FBMediaGalleryViewControllerDelegate.h>
#import <Facebook/FBMediaPickerVideoPlayerViewControllerDelegate.h>
#import <Facebook/FBMediaSourceChooserDelegate.h>
#import <Facebook/FBMediaSourceChooserLabelDelegate.h>
#import <Facebook/FBPopoverControllerDelegate.h>
#import <Facebook/FBCropViewControllerDelegate.h>
#import <Facebook/FBCameraComponentCaptureDelegate.h>
#import <Facebook/FBNuxBannerControllerDelegate.h>

@protocol FBClonePhotoView, FBNuxBannerViewController, FBMediaPickerViewControllerDelegate, FBAssetsLoggingControllerProtocol;
@class FBMediaPickerSession, FBImageProcessingRequestContextHandle, FBNavigationItemManager, FBScenePath, FBCropViewController, FBNumericalScenePathContext, FBMediaSourceChooserLabel, FBMediaSourceChooser, FBMediaPickerLibraryController, FBMediaImageManager, FBPhotoAsset, UIView, UILabel, FBCameraDisplayer, UIViewController, FBMediaGalleryViewController, FBSemiTransparentOverlayPresentingView, FBMediaPickerVideoPlayerViewController, SPAccessPhotoPermissionPromptView, FBPopoverController, NSString;

@interface FBMediaPickerViewController : UIViewController <FBPresentableViewController, FBNavigationItemManagerDelegate, FBMediaPickerLibraryControllerDelegate, FBMediaGalleryViewControllerDelegate, FBMediaPickerVideoPlayerViewControllerDelegate, FBMediaSourceChooserDelegate, FBMediaSourceChooserLabelDelegate, FBPopoverControllerDelegate, FBCropViewControllerDelegate, FBCameraComponentCaptureDelegate, FBNuxBannerControllerDelegate> {

	FBMediaPickerSession* _session;
	FBImageProcessingRequestContextHandle* _handle;
	BOOL _hasViewAppeared;
	FBNavigationItemManager* _navigationItemManager;
	FBScenePath* _scenePath;
	FBCropViewController* _cropViewController;
	FBNumericalScenePathContext* _scenePathContext;
	FBMediaSourceChooserLabel* _sourceChooserLabel;
	FBMediaSourceChooser* _sourceChooser;
	FBMediaPickerLibraryController* _libraryController;
	FBMediaImageManager* _mediaImageManager;
	FBPhotoAsset* _currentPhotoAsset;
	BOOL _currentlyLoadingImageForMediaGallery;
	UIView*<FBClonePhotoView> _currentGalleryViewTransitionFromView;
	CGSize _currentTransitionFromViewImageSize;
	UILabel* _multiPhotoIndicatorBottomLabel;
	UIView* _multiPhotoIndicatorBottomLabelContainerView;
	FBCameraDisplayer* _cameraDisplayer;
	UIViewController*<FBNuxBannerViewController> _ctaQuickPromotionBannerVC;
	FBMediaGalleryViewController* _galleryViewController;
	BOOL _photoAssetDoesNotNeedRecycle;
	unsigned long long _dataSourceShownDefault;
	FBSemiTransparentOverlayPresentingView* _overlayPresentingView;
	BOOL _allowUnselectMediaAttachments;
	unsigned long long _mediaFilter;
	id<FBMediaPickerViewControllerDelegate> _delegate;
	id<FBAssetsLoggingControllerProtocol> _assetLoggingController;
	FBMediaPickerVideoPlayerViewController* _videoPlayerViewController;
	SPAccessPhotoPermissionPromptView* _photoPermissionView;
	FBPopoverController* _sourceChooserPopover;

}

@property (nonatomic,retain) FBMediaPickerVideoPlayerViewController * videoPlayerViewController;               //@synthesize videoPlayerViewController=_videoPlayerViewController - In the implementation block
@property (nonatomic,retain) SPAccessPhotoPermissionPromptView * photoPermissionView;                          //@synthesize photoPermissionView=_photoPermissionView - In the implementation block
@property (nonatomic,retain) FBPopoverController * sourceChooserPopover;                                       //@synthesize sourceChooserPopover=_sourceChooserPopover - In the implementation block
@property (assign,nonatomic) unsigned long long mediaFilter;                                                   //@synthesize mediaFilter=_mediaFilter - In the implementation block
@property (assign,nonatomic) BOOL allowUnselectMediaAttachments;                                               //@synthesize allowUnselectMediaAttachments=_allowUnselectMediaAttachments - In the implementation block
@property (assign,nonatomic,__weak) id<FBMediaPickerViewControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBAssetsLoggingControllerProtocol> assetLoggingController;              //@synthesize assetLoggingController=_assetLoggingController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long preferredPresentationMethod; 
@property (nonatomic,readonly) unsigned long long preferredPresentationOptions; 
-(id)analyticsModule;
-(BOOL)fb_showNavBarSearchField;
-(unsigned long long)preferredPresentationOptions;
-(void)_didTapDoneButton;
-(id)initWithMediaPickerSession:(id)arg1 dataSourceType:(unsigned long long)arg2 dataSource:(id)arg3 ;
-(void)setMediaFilter:(unsigned long long)arg1 ;
-(void)willBePresentedWithSourceType:(long long)arg1 showTaggingMode:(BOOL)arg2 animateFromView:(id)arg3 photoAssetDoesNotNeedRecycle:(BOOL)arg4 ;
-(void)nuxBannerControllerDidDismissBanner:(id)arg1 ;
-(void)fb_popoverControllerWillDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(BOOL)CONTACT_APP_EXPERIENCE_BEFORE_OVERRIDING_fb_shouldBeginSwipeBackAtPoint:(CGPoint)arg1 ;
-(void)cropViewControllerDidConfirmCrop:(id)arg1 ;
-(void)cropViewControllerDidCancelCrop:(id)arg1 ;
-(void)_didTapCameraButton;
-(void)_logEvent:(id)arg1 ;
-(void)didTapCancelButton;
-(void)resetComposition;
-(void)didCaptureImage:(id)arg1 orientation:(long long)arg2 ;
-(void)didCaptureVideo:(id)arg1 thumbnail:(id)arg2 cameraPosition:(long long)arg3 ;
-(unsigned long long)mediaFilter;
-(void)mediaGalleryDidReturn:(id)arg1 withReason:(unsigned long long)arg2 fromFrame:(CGRect)arg3 animated:(BOOL)arg4 ;
-(void)mediaGalleryDidUpdateComposition:(id)arg1 currentPhotoAssetShown:(id)arg2 ;
-(void)mediaGalleryDidConfirmComposition:(id)arg1 currentPhotoAssetShown:(id)arg2 ;
-(void)mediaGallery:(id)arg1 didToggleSelection:(id)arg2 wasSelected:(BOOL)arg3 ;
-(void)videoPlayerDidReturn:(id)arg1 withDataSourceIndex:(unsigned long long)arg2 ;
-(void)videoPlayer:(id)arg1 didConfirmCompositionWithVideoAsset:(id)arg2 withDataSourceIndex:(unsigned long long)arg3 quality:(unsigned long long)arg4 ;
-(void)setAssetLoggingController:(id<FBAssetsLoggingControllerProtocol>)arg1 ;
-(void)resetAutoTagging;
-(void)commitSelectedMediaAttachments:(long long)arg1 ;
-(void)selectMediaAttachments:(id)arg1 ;
-(BOOL)allowUnselectMediaAttachments;
-(void)setAllowUnselectMediaAttachments:(BOOL)arg1 ;
-(id)applyCropInfo:(id)arg1 toPhotoAssetID:(id)arg2 ;
-(id)applyPhotoOverlayAttachmentsLayer:(id)arg1 photoOverlayAttachmentsInformation:(id)arg2 imageWithPhotoOverlayApplied:(id)arg3 toPhotoAssetID:(id)arg4 ;
-(void)logAttachmentActivityWithExtraData:(id)arg1 published:(BOOL)arg2 ;
-(void)scrollToFirstSelectedAttachment;
-(id)selectedMediaAttachments;
-(void)addMediaAttachments:(id)arg1 ;
-(id)galleryViewController;
-(FBMediaPickerVideoPlayerViewController *)videoPlayerViewController;
-(void)_navigateFromCameraToGallery;
-(void)_navigateFromCameraToVideoPlayer;
-(void)sourceChooser:(id)arg1 didSelectDataSource:(id)arg2 ;
-(void)sourceChooserNumberOfRowsDidChange:(id)arg1 ;
-(void)libraryControllerDidTapCameraInGrid:(id)arg1 ;
-(void)libraryController:(id)arg1 needsToPresentMediaAtGridIndex:(unsigned long long)arg2 ;
-(void)libraryController:(id)arg1 didToggleCheckmarkForThumbnailView:(id)arg2 atGridIndex:(unsigned long long)arg3 wasSelected:(BOOL)arg4 quality:(unsigned long long)arg5 ;
-(BOOL)libraryController:(id)arg1 shouldAllowSelecting:(id)arg2 withNewSelectedAsset:(id)arg3 ;
-(void)libraryController:(id)arg1 needsToPresentWarningWithMessage:(id)arg2 ;
-(void)libraryController:(id)arg1 needsToPresentAlertWithTitle:(id)arg2 message:(id)arg3 ;
-(void)libraryController:(id)arg1 didScroll:(id)arg2 ;
-(void)libraryController:(id)arg1 scrollViewDidEndDecelerating:(id)arg2 ;
-(id)currentDataSource;
-(BOOL)libraryControllerShouldShowNux:(id)arg1 ;
-(void)libraryController:(id)arg1 didSelectMagicStoryCollection:(id)arg2 ;
-(void)setCurrentDataSource:(id)arg1 ;
-(void)_updateNavigationItems;
-(void)_updateMultiPhotoIndicatorBottomLabel;
-(void)_updateGridForCameraRollAcessStatus;
-(void)_updateSourceChooser;
-(void)_setQuickPromotionBannerVC:(id)arg1 ;
-(void)_photoPermissionViewDidTapAuthorize:(id)arg1 ;
-(void)_photoPermissionViewDidTapLinkToSettings:(id)arg1 ;
-(void)_presentMediaAtGridIndex:(unsigned long long)arg1 ;
-(void)_didToggleCheckmarkForThumbnailView:(id)arg1 atIndex:(unsigned long long)arg2 wasSelected:(BOOL)arg3 quality:(unsigned long long)arg4 ;
-(unsigned long long)_gridIndexForGalleryIndex:(unsigned long long)arg1 galleryShowingAll:(BOOL)arg2 ;
-(void)_dismissGalleryAnimated:(BOOL)arg1 withReason:(unsigned long long)arg2 atGridIndex:(unsigned long long)arg3 ;
-(void)_didConfirmCompositionWithSelectedPhotosFromSource:(long long)arg1 currentPhotoAssetShown:(id)arg2 ;
-(void)didToggleSelection:(id)arg1 fromSource:(long long)arg2 wasSelected:(BOOL)arg3 ;
-(unsigned long long)_gridIndexForDataSourceIndex:(unsigned long long)arg1 ;
-(void)_animateFromMediaViewFromFrameOutsideGridForGridIndex:(unsigned long long)arg1 forViewController:(id)arg2 ;
-(void)_didTapComposeButton;
-(void)didTapComposeButton;
-(void)didTapTitleView;
-(void)_logEvent:(id)arg1 info:(id)arg2 ;
-(void)_updateStatusBarForPresentingViewController:(id)arg1 ;
-(void)_navigateToCrop:(unsigned long long)arg1 fromCamera:(BOOL)arg2 ;
-(void)_prepareCameraOutputForComposition:(BOOL)arg1 ;
-(void)_handleCapturedAttachment:(BOOL)arg1 ;
-(unsigned long long)_galleryIndexForGridIndex:(unsigned long long)arg1 ;
-(void)_navigationToViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_logForTools;
-(void)_showCropAfterSelection;
-(void)_navigateToMultiPhotoCreationTool:(unsigned long long)arg1 ;
-(void)_profilePictureSelectionAction;
-(void)_defaultAfterSelection;
-(void)_showCamera;
-(void)_animateToGalleryViewFromThumbnailAtGridIndex:(unsigned long long)arg1 ;
-(void)_animateToVideoViewFromThumbnailAtGridIndex:(unsigned long long)arg1 ;
-(void)_toggleSelectionAtGridIndex:(unsigned long long)arg1 wasSelected:(BOOL)arg2 quality:(unsigned long long)arg3 ;
-(id)_getPreparerForFacerecRequest:(unsigned long long)arg1 ;
-(id)_getVideoAssetPreparerForGridIndex:(unsigned long long)arg1 ;
-(CGSize)_prepareAnimationImageViewForGridIndex:(unsigned long long)arg1 ;
-(void)_presentMediaGalleryWithInitialToolThatRequiresImagePreparation:(unsigned long long)arg1 ;
-(void)_animateToMediaViewFromGridIndex:(unsigned long long)arg1 forViewController:(id)arg2 ;
-(CGRect)_fullScreenMediaFrameWithImageSize:(CGSize)arg1 photoLayoutGuide:(BOOL)arg2 ;
-(void)_handleCapturedAttachmentWithoutPreview;
-(void)_navigateFromCameraToCropView;
-(void)_hideStatusBar;
-(void)_showStatusBar;
-(void)_updateStatusBarColor;
-(CGSize)_sourceChooserSize;
-(CGPoint)_sourceChooserPopoverAnchorPoint;
-(SPAccessPhotoPermissionPromptView *)photoPermissionView;
-(void)_mediaPickerDidSelectMediaAssetAttachmentsFromSource:(long long)arg1 currentPhotoAssetShown:(id)arg2 ;
-(FBPopoverController *)sourceChooserPopover;
-(void)_didConfirmComposition;
-(void)_mediaPickerDidSelectMediaAssetAttachmentsFromSource:(long long)arg1 ;
-(void)didTapLeftBarButton;
-(void)didTapRightBarButton;
-(void)sourceChooserLabel:(id)arg1 didTapFromView:(id)arg2 ;
-(id)thumbnailForAssetID:(id)arg1 ;
-(BOOL)fb_touchShouldPreventSwipeToOpenLeftNav:(id)arg1 ;
-(id<FBAssetsLoggingControllerProtocol>)assetLoggingController;
-(void)setVideoPlayerViewController:(FBMediaPickerVideoPlayerViewController *)arg1 ;
-(void)setPhotoPermissionView:(SPAccessPhotoPermissionPromptView *)arg1 ;
-(void)setSourceChooserPopover:(FBPopoverController *)arg1 ;
-(void)setDelegate:(id<FBMediaPickerViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBMediaPickerViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)viewWillLayoutSubviews;
-(CGSize)preferredContentSize;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CGSize)contentSizeForViewInPopover;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)accessibilityPerformEscape;
-(void)_didCancel;
-(void)_setStatusBarStyle:(long long)arg1 ;
-(void)_restoreStatusBar;
@end

