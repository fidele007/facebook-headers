/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBMediaGalleryBannerTapHandlerProtocol.h>
#import <Facebook/FBComposerMediaEditingViewDelegate.h>
#import <Facebook/FBProfileStagingGroundTapResponder.h>
#import <Facebook/FBProfileStagingGroundUpdateHandler.h>
#import <Facebook/FBProfilePictureFrameSelectionViewControllerDelegate.h>
#import <Facebook/FBKeyboardObserverDelegate.h>
#import <Facebook/FBMediaPickerViewControllerDelegate.h>
#import <Facebook/FBProfilePicRemotePhotoSelectionDelegate.h>
#import <Facebook/FBProfileSwipeableFramesViewControllerDelegate.h>
#import <Facebook/FBProfileMediaStagingGroundEditEventHandlerDelegate.h>
#import <Facebook/FBProfileMediaNavigationProtocol.h>

@protocol FBMediaGalleryBannerProviderProtocol, FBProfileMediaStagingGroundViewControllerDelegate, FBProfilePictureStagingGroundLoggerProtocol, FBUpdateUIViewControllerStateHandler, FBProfileMediaStagingGroundEditEventHandler, FBProfileMediaUploadEventHandler, FBMediaAttachmentProtocol;
@class FBUserSession, UIViewController, FBComposerMediaEditingView, FBMediaOverlayButton, FBMediaPickerDataSourceManager, FBProfileStagingGroundTraits, UIScrollView, UIImage, FBMemPhoto, UIImageView, FBProfileSwipeableFramesDataSource, FBProfileSwipeableFramesViewController, FBProfileVideoStagingGroundPlaybackViewController, CKComponentHostingView, NSString, FBKeyboardObserver, FBKeyboardTracker, FBContentInsetTracker, FBMemImage, FBProfileMediaDataPack, FBProfileMediaDependencyPack;

@interface FBProfileMediaStagingGroundViewController : UIViewController <FBMediaGalleryBannerTapHandlerProtocol, FBComposerMediaEditingViewDelegate, FBProfileStagingGroundTapResponder, FBProfileStagingGroundUpdateHandler, FBProfilePictureFrameSelectionViewControllerDelegate, FBKeyboardObserverDelegate, FBMediaPickerViewControllerDelegate, FBProfilePicRemotePhotoSelectionDelegate, FBProfileSwipeableFramesViewControllerDelegate, FBProfileMediaStagingGroundEditEventHandlerDelegate, FBProfileMediaNavigationProtocol> {

	FBUserSession* _session;
	id<FBMediaGalleryBannerProviderProtocol> _bannerProvider;
	UIViewController* _bannerViewController;
	FBComposerMediaEditingView* _editButtonView;
	CGRect _mediaContainerViewFrame;
	FBMediaOverlayButton* _openPickerButton;
	FBMediaPickerDataSourceManager* _mediaDataSourceManager;
	FBProfileStagingGroundTraits* _stagingGroundTraits;
	BOOL _hasSetUpMediaAttachment;
	UIScrollView* _editContentView;
	id<FBProfileMediaStagingGroundViewControllerDelegate> _delegate;
	UIImage* _originalImageToEdit;
	FBMemPhoto* _selectedRemotePhoto;
	UIImage* _frameImage;
	UIImageView* _frameImageView;
	BOOL _hasLayoutSwipeableFrames;
	unsigned long long _initialSwipeableFramesIndex;
	id<FBProfilePictureStagingGroundLoggerProtocol> _logger;
	FBProfileSwipeableFramesDataSource* _swipeableFramesDataSource;
	FBProfileSwipeableFramesViewController* _swipeableFramesViewController;
	FBProfileVideoStagingGroundPlaybackViewController* _videoPlaybackViewController;
	CKComponentHostingView* _stagingGroundView;
	NSString* _caption;
	NSString* _sourcePhotoID;
	FBKeyboardObserver* _keyboardObserver;
	FBKeyboardTracker* _keyboardTracker;
	FBContentInsetTracker* _contentInsetTracker;
	NSString* _frameId;
	NSString* _categoryId;
	BOOL _canChangeFrame;
	NSString* _existingPhotoId;
	NSString* _currentProfilePhotoId;
	NSString* _photoSource;
	BOOL _hasAddedFrame;
	FBMemImage* _currentPageImage;
	BOOL _underlayFromQPEnabled;
	UIImageView* _blendedImageView;
	id<FBUpdateUIViewControllerStateHandler> _updateUIViewControllerStateHandler;
	FBProfileMediaDataPack* _dataPack;
	FBProfileMediaDependencyPack* _dependencyPack;
	id<FBProfileMediaStagingGroundEditEventHandler> _editButtonTapHandler;
	id<FBProfileMediaUploadEventHandler> _uploadHandler;
	id<FBMediaAttachmentProtocol> _mediaAttachment;
	UIImage* _displayImage;

}

@property (nonatomic,retain) id<FBMediaAttachmentProtocol> mediaAttachment;                                                   //@synthesize mediaAttachment=_mediaAttachment - In the implementation block
@property (nonatomic,retain) UIImage * displayImage;                                                                          //@synthesize displayImage=_displayImage - In the implementation block
@property (nonatomic,retain) UIImage * frameImage;                                                                            //@synthesize frameImage=_frameImage - In the implementation block
@property (nonatomic,retain) id<FBProfileMediaStagingGroundEditEventHandler> editButtonTapHandler;                            //@synthesize editButtonTapHandler=_editButtonTapHandler - In the implementation block
@property (nonatomic,retain) id<FBProfileMediaUploadEventHandler> uploadHandler;                                              //@synthesize uploadHandler=_uploadHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBUpdateUIViewControllerStateHandler> updateUIViewControllerStateHandler;              //@synthesize updateUIViewControllerStateHandler=_updateUIViewControllerStateHandler - In the implementation block
@property (nonatomic,copy,readonly) FBProfileMediaDataPack * dataPack;                                                        //@synthesize dataPack=_dataPack - In the implementation block
@property (nonatomic,readonly) FBProfileMediaDependencyPack * dependencyPack;                                                 //@synthesize dependencyPack=_dependencyPack - In the implementation block
@property (nonatomic,readonly) unsigned long long preferredPresentationMethod; 
@property (nonatomic,readonly) unsigned long long preferredPresentationOptions; 
+(id)createViewController:(id)arg1 dependencyPack:(id)arg2 ;
-(void)setDisplayImage:(UIImage *)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(unsigned long long)preferredPresentationMethod;
-(unsigned long long)preferredPresentationOptions;
-(CGSize)_imageViewSize;
-(void)mediaPickerPermissionDenied:(id)arg1 ;
-(void)mediaPicker:(id)arg1 didSelectMediaAssetAttachments:(id)arg2 fromSource:(long long)arg3 currentPhotoAssetShown:(id)arg4 ;
-(BOOL)CONTACT_APP_EXPERIENCE_BEFORE_OVERRIDING_fb_shouldBeginSwipeBackAtPoint:(CGPoint)arg1 ;
-(void)setVideoViewMuted:(BOOL)arg1 ;
-(id)initWithDataPack:(id)arg1 dependencyPack:(id)arg2 ;
-(void)setEditButtonTapHandler:(id<FBProfileMediaStagingGroundEditEventHandler>)arg1 ;
-(void)setUploadHandler:(id<FBProfileMediaUploadEventHandler>)arg1 ;
-(void)profilePicSelectionControllerDidFinish:(id)arg1 ;
-(void)swapInHighResolutionImage:(id)arg1 ;
-(void)profilePicSelectionControllerDidCancel:(id)arg1 ;
-(void)profilePicSelectionController:(id)arg1 didChoosePhoto:(id)arg2 view:(id)arg3 ;
-(void)framePickerDidCancel:(id)arg1 ;
-(void)framePickerDidPickStickerId:(id)arg1 frameUri:(id)arg2 title:(id)arg3 pageImage:(id)arg4 picker:(id)arg5 ;
-(void)framePickerDidRemoveFrame:(id)arg1 ;
-(void)profilePictureDidStartUpdateWithVC:(id)arg1 ;
-(void)profilePictureDidFinishUpdateWithVC:(id)arg1 ;
-(void)profilePictureDidFailToUpdateWithVC:(id)arg1 ;
-(void)didCancelEdit:(id)arg1 ;
-(void)didFinishEdit:(id)arg1 image:(id)arg2 attachment:(id)arg3 ;
-(id<FBMediaAttachmentProtocol>)mediaAttachment;
-(UIImage *)frameImage;
-(id)checkValidation;
-(void)_didTapBack;
-(void)didTapBanner;
-(void)didChooseTime;
-(id)_frameId;
-(id)_frameImage;
-(void)setMediaAttachment:(id<FBMediaAttachmentProtocol>)arg1 ;
-(id<FBUpdateUIViewControllerStateHandler>)updateUIViewControllerStateHandler;
-(void)setUpdateUIViewControllerStateHandler:(id<FBUpdateUIViewControllerStateHandler>)arg1 ;
-(FBProfileMediaDataPack *)dataPack;
-(FBProfileMediaDependencyPack *)dependencyPack;
-(id)_mediaDataSourceManager;
-(BOOL)_isViewingVideo;
-(void)_updateStagingGroundViewModel:(unsigned long long)arg1 ;
-(void)_openPicker;
-(void)singleTapToEndEdit:(id)arg1 ;
-(void)_didTapUse;
-(void)_displayedImageFromOriginalImage;
-(void)_setUpMediaAttachment:(id)arg1 ;
-(id)_autoCroppedImage:(id)arg1 ;
-(void)_updateImageFromAttachmentForAssetID:(id)arg1 ;
-(void)_dismissEditViewCcontroller:(id)arg1 animated:(BOOL)arg2 ;
-(void)mediaEditingViewDidTapUMGEntryButton;
-(void)_reConfigureStagingGround:(id)arg1 selectedPhoto:(id)arg2 originalImageToEdit:(id)arg3 ;
-(void)mediaEditingViewDidTapLivePhoto;
-(void)didTapEditFrameButton;
-(void)didTapMakeTemporary;
-(void)didTapVideoThumbnail;
-(void)captionDidChangeText:(id)arg1 ;
-(id<FBProfileMediaStagingGroundEditEventHandler>)editButtonTapHandler;
-(id<FBProfileMediaUploadEventHandler>)uploadHandler;
-(void)setFrameImage:(UIImage *)arg1 ;
-(void)updateBlendedImageWithIndex:(long long)arg1 ;
-(void)hideBlendedImageView;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(UIImage *)displayImage;
-(void)mediaPickerDidCancel:(id)arg1 ;
@end

