/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBVideoTrimViewDelegate.h>
#import <Facebook/FBVideoEditingPlaybackViewDelegate.h>
#import <Facebook/FBVideoVolumeControlViewDelegate.h>
#import <Facebook/FBAudioSessionManagerClient.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Facebook/FBVideoCreativeToolsApplier.h>
#import <Facebook/FBVideoFilterViewsUpdateProtocol.h>
#import <Facebook/FBVideoScrubberViewDelegate.h>

@protocol FBVideoEditingViewControllerDelegate, FBVideoCreativeToolsApplierVideoOutputDelegate;
@class UIImageView, NSString, FBProfileVideoLogger, FBVideoEditingModuleLogger, UIView, FBVideoSizeView, FBVideoTimeView, FBVideoEditingConfiguration, FBBubbleViewPresenter, FBMediaCreativeToolFilterViewController, FBMediaCreativeToolFilterView, NSArray, UITapGestureRecognizer, FBVideoProcessor, FBVideoCreativeToolsApplierListenerAnnouncer, FBVideoClip, UIImage, FBVideoEditingPlaybackView, FBVideoTrimView, FBVideoVolumeControlView, FBVideoEditingAudioToggle, FBMediaHDUploadButton, FBMediaGalleryBottomBar, FBButton, UIScrollView, FBCropRectangleView, FBVideoScrubberView;

@interface FBVideoEditingViewController : UIViewController <FBVideoTrimViewDelegate, FBVideoEditingPlaybackViewDelegate, FBVideoVolumeControlViewDelegate, FBAudioSessionManagerClient, UIScrollViewDelegate, FBVideoCreativeToolsApplier, FBVideoFilterViewsUpdateProtocol, FBVideoScrubberViewDelegate> {

	UIImageView* _placeHolderImageView;
	unsigned long long _viewControllerStyle;
	BOOL _viewIsVisible;
	BOOL _hasInitializedVideoViews;
	unsigned long long _currentTool;
	unsigned long long _lastTrimDraggingMode;
	unsigned long long _playbackResumeMode;
	BOOL _videoPlayingAtInteractionBegin;
	BOOL _hasTrimValueChangedSinceInteractionBegin;
	BOOL _hasBeganZoomingSinceInteractionBegin;
	NSString* _source;
	NSString* _externalSessionID;
	FBProfileVideoLogger* _profileVideoLogger;
	FBVideoEditingModuleLogger* _logger;
	BOOL _enableCropping;
	BOOL _squareCrop;
	BOOL _enableColorFilter;
	BOOL _enableFrameSelection;
	BOOL _enableHDUploadButton;
	UIView* _bannerView;
	FBVideoSizeView* _videoSizeView;
	FBVideoTimeView* _videoTimeView;
	FBVideoEditingConfiguration* _configuration;
	FBBubbleViewPresenter* _trimBubbleViewPresenter;
	FBMediaCreativeToolFilterViewController* _filterViewController;
	FBMediaCreativeToolFilterView* _filterView;
	NSArray* _filters;
	GLKMatrix4 _contentTransform;
	UITapGestureRecognizer* _tapOnPlayerGestureRecognizer;
	FBVideoProcessor* _videoProcessor;
	double _cropOriginWidthProportion;
	double _cropOriginHeightProportion;
	BOOL _soundControlEnabled;
	BOOL _trimmerBubbleEnabled;
	BOOL _showEstimatedFileSize;
	BOOL _useEstimatedTranscodedFileSize;
	BOOL _disableFilterConfig;
	BOOL _overlayFilterIsApplied;
	FBVideoCreativeToolsApplierListenerAnnouncer* _applierAnnouncer;
	id<FBVideoEditingViewControllerDelegate> _delegate;
	FBVideoClip* _videoClip;
	UIImage* _overlayImage;
	long long _videoTrimViewMode;
	id<FBVideoCreativeToolsApplierVideoOutputDelegate> _cameraOutputDelegate;
	unsigned long long _selectedFilterIndex;
	double _deviceToIPhone6HeightRatio;
	UIView* _contentView;
	FBVideoEditingPlaybackView* _playerView;
	FBVideoTrimView* _trimView;
	FBVideoVolumeControlView* _soundView;
	FBVideoEditingAudioToggle* _audioToggleView;
	FBMediaHDUploadButton* _hdUploadButton;
	FBMediaGalleryBottomBar* _bottomBar;
	UIView* _toolContainerView;
	FBButton* _playButton;
	UIScrollView* _scrollView;
	FBCropRectangleView* _cropRectangleView;
	UIImageView* _overlayImageView;
	FBVideoScrubberView* _scrubberView;
	UIImage* _selectedFrame;
	SCD_Struct_FB100 _videoMinLength;
	SCD_Struct_FB100 _videoMaxLength;
	SCD_Struct_FB100 _frameOffset;
	SCD_Struct_FB100 _keyTime;

}

@property (nonatomic,retain) UIView * contentView;                                                                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) FBVideoEditingPlaybackView * playerView;                                                     //@synthesize playerView=_playerView - In the implementation block
@property (nonatomic,retain) FBVideoTrimView * trimView;                                                                  //@synthesize trimView=_trimView - In the implementation block
@property (nonatomic,retain) FBVideoVolumeControlView * soundView;                                                        //@synthesize soundView=_soundView - In the implementation block
@property (nonatomic,retain) FBVideoEditingAudioToggle * audioToggleView;                                                 //@synthesize audioToggleView=_audioToggleView - In the implementation block
@property (nonatomic,retain) FBMediaHDUploadButton * hdUploadButton;                                                      //@synthesize hdUploadButton=_hdUploadButton - In the implementation block
@property (assign,nonatomic) SCD_Struct_FB100 keyTime;                                                                    //@synthesize keyTime=_keyTime - In the implementation block
@property (nonatomic,retain) FBMediaGalleryBottomBar * bottomBar;                                                         //@synthesize bottomBar=_bottomBar - In the implementation block
@property (nonatomic,retain) UIView * toolContainerView;                                                                  //@synthesize toolContainerView=_toolContainerView - In the implementation block
@property (nonatomic,retain) FBButton * playButton;                                                                       //@synthesize playButton=_playButton - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                                                   //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) FBCropRectangleView * cropRectangleView;                                                     //@synthesize cropRectangleView=_cropRectangleView - In the implementation block
@property (nonatomic,retain) UIImageView * overlayImageView;                                                              //@synthesize overlayImageView=_overlayImageView - In the implementation block
@property (nonatomic,retain) FBVideoScrubberView * scrubberView;                                                          //@synthesize scrubberView=_scrubberView - In the implementation block
@property (nonatomic,retain) UIImage * selectedFrame;                                                                     //@synthesize selectedFrame=_selectedFrame - In the implementation block
@property (assign,nonatomic) SCD_Struct_FB100 frameOffset;                                                                //@synthesize frameOffset=_frameOffset - In the implementation block
@property (assign,nonatomic,__weak) id<FBVideoEditingViewControllerDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBVideoClip * videoClip;                                                                     //@synthesize videoClip=_videoClip - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage; 
@property (nonatomic,retain) UIImage * overlayImage;                                                                      //@synthesize overlayImage=_overlayImage - In the implementation block
@property (assign,nonatomic) SCD_Struct_FB100 videoMinLength;                                                             //@synthesize videoMinLength=_videoMinLength - In the implementation block
@property (assign,nonatomic) SCD_Struct_FB100 videoMaxLength;                                                             //@synthesize videoMaxLength=_videoMaxLength - In the implementation block
@property (assign,nonatomic) long long videoTrimViewMode;                                                                 //@synthesize videoTrimViewMode=_videoTrimViewMode - In the implementation block
@property (assign,nonatomic) BOOL soundControlEnabled;                                                                    //@synthesize soundControlEnabled=_soundControlEnabled - In the implementation block
@property (nonatomic,readonly) SCD_Struct_FB100 videoPosition; 
@property (assign,getter=isTrimmerBubbleEnabled,nonatomic) BOOL trimmerBubbleEnabled;                                     //@synthesize trimmerBubbleEnabled=_trimmerBubbleEnabled - In the implementation block
@property (assign,nonatomic) BOOL showEstimatedFileSize;                                                                  //@synthesize showEstimatedFileSize=_showEstimatedFileSize - In the implementation block
@property (assign,nonatomic) BOOL useEstimatedTranscodedFileSize;                                                         //@synthesize useEstimatedTranscodedFileSize=_useEstimatedTranscodedFileSize - In the implementation block
@property (assign,nonatomic) BOOL disableFilterConfig;                                                                    //@synthesize disableFilterConfig=_disableFilterConfig - In the implementation block
@property (assign,nonatomic,__weak) id<FBVideoCreativeToolsApplierVideoOutputDelegate> cameraOutputDelegate;              //@synthesize cameraOutputDelegate=_cameraOutputDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long selectedFilterIndex;                                                      //@synthesize selectedFilterIndex=_selectedFilterIndex - In the implementation block
@property (assign,nonatomic) BOOL overlayFilterIsApplied;                                                                 //@synthesize overlayFilterIsApplied=_overlayFilterIsApplied - In the implementation block
@property (assign,nonatomic) double deviceToIPhone6HeightRatio;                                                           //@synthesize deviceToIPhone6HeightRatio=_deviceToIPhone6HeightRatio - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long audioDirection; 
@property (nonatomic,readonly) unsigned long long outputCoordinationMode; 
@property (nonatomic,readonly) unsigned long long outputOptions; 
@property (nonatomic,readonly) unsigned long long inputOptions; 
@property (nonatomic,readonly) unsigned long long clientPriority; 
@property (nonatomic,readonly) unsigned long long audioSessionMode; 
@property (nonatomic,readonly) FBVideoCreativeToolsApplierListenerAnnouncer * applierAnnouncer;                           //@synthesize applierAnnouncer=_applierAnnouncer - In the implementation block
-(void)finishInterruptionAndResume:(BOOL)arg1 ;
-(unsigned long long)outputCoordinationMode;
-(unsigned long long)outputOptions;
-(FBVideoClip *)videoClip;
-(SCD_Struct_FB100)frameOffset;
-(void)videoEditingDidExitWithReason:(id)arg1 ;
-(void)removeFilterAtIndex:(unsigned long long)arg1 ;
-(void)setDeviceToIPhone6HeightRatio:(double)arg1 ;
-(void)setVideoClip:(FBVideoClip *)arg1 ;
-(id)initWithSession:(id)arg1 source:(id)arg2 externalSessionID:(id)arg3 profileVideoLogger:(id)arg4 bannerView:(id)arg5 videoProcessor:(id)arg6 style:(unsigned long long)arg7 enableColorFilter:(BOOL)arg8 enableStaticFilteredImage:(BOOL)arg9 enableFrameSelection:(BOOL)arg10 enableCropping:(BOOL)arg11 enableHDUploadButton:(BOOL)arg12 squareCrop:(BOOL)arg13 ;
-(void)setSoundControlEnabled:(BOOL)arg1 ;
-(void)setVideoMinLength:(SCD_Struct_FB100)arg1 ;
-(void)setVideoMaxLength:(SCD_Struct_FB100)arg1 ;
-(void)setVideoTrimViewMode:(long long)arg1 ;
-(SCD_Struct_FB100)videoPosition;
-(void)_initVideoViews;
-(void)_updateEditControlsFromVideoClip;
-(void)setTrimmerBubbleEnabled:(BOOL)arg1 ;
-(void)setOverlayFilterIsApplied:(BOOL)arg1 ;
-(id)getRenderQueue;
-(void)insertFilter:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceFilterAtIndex:(unsigned long long)arg1 withFilter:(id)arg2 ;
-(void)sendFilterCommand:(id)arg1 toFilterAtIndex:(unsigned long long)arg2 ;
-(void)dispatchOnCameraThread:(/*^block*/id)arg1 ;
-(id<FBVideoCreativeToolsApplierVideoOutputDelegate>)cameraOutputDelegate;
-(void)setCameraOutputDelegate:(id<FBVideoCreativeToolsApplierVideoOutputDelegate>)arg1 ;
-(FBVideoCreativeToolsApplierListenerAnnouncer *)applierAnnouncer;
-(BOOL)overlayFilterIsApplied;
-(void)setKeyTime:(SCD_Struct_FB100)arg1 ;
-(SCD_Struct_FB100)keyTime;
-(void)setFrameOffset:(SCD_Struct_FB100)arg1 ;
-(UIImageView *)overlayImageView;
-(void)scrubberViewDidMoveHandleToPosition:(double)arg1 gesture:(unsigned long long)arg2 ;
-(void)scrubberViewFinishedMovingHandle;
-(double)deviceToIPhone6HeightRatio;
-(void)setScrubberView:(FBVideoScrubberView *)arg1 ;
-(void)setOverlayImageView:(UIImageView *)arg1 ;
-(void)trimViewDidUpdateTrimHandlePosition:(id)arg1 ;
-(void)trimViewDidBeginInteraction:(id)arg1 ;
-(void)trimViewDidChangeScrubTime:(id)arg1 ;
-(void)trimViewDidBeginZooming:(id)arg1 ;
-(void)trimViewDidEndZooming:(id)arg1 ;
-(void)trimViewDidEndInteraction:(id)arg1 ;
-(void)trimViewDidChangeTrimValue:(id)arg1 ;
-(void)setShowEstimatedFileSize:(BOOL)arg1 ;
-(void)setUseEstimatedTranscodedFileSize:(BOOL)arg1 ;
-(void)setDisableFilterConfig:(BOOL)arg1 ;
-(SCD_Struct_FB100)videoMinLength;
-(SCD_Struct_FB100)videoMaxLength;
-(BOOL)soundControlEnabled;
-(BOOL)isTrimmerBubbleEnabled;
-(BOOL)showEstimatedFileSize;
-(BOOL)useEstimatedTranscodedFileSize;
-(BOOL)disableFilterConfig;
-(FBMediaHDUploadButton *)hdUploadButton;
-(void)_stopVideoPlayback;
-(void)_startPlaybackForDraggingMode:(unsigned long long)arg1 ;
-(void)_createTrimBubbleView;
-(void)_layoutForTabbedViewMode;
-(void)_layoutForSingleViewMode;
-(void)_layoutForCustomizedSingleViewMode;
-(FBCropRectangleView *)cropRectangleView;
-(FBVideoTrimView *)trimView;
-(void)_applyConstraintsToVideoClip;
-(void)_updateVideoTimeView;
-(void)_updateVideoSizeView;
-(_GLKMatrix4)_updateVideoEditsWithTrackTransform;
-(void)_updateEditingViews;
-(void)_onVideoTapped;
-(void)_handleAudioToggleChange:(id)arg1 ;
-(void)_handleHDUploadButtonChange:(id)arg1 ;
-(id)_buttonsArray;
-(void)_hideCurrentToolView:(unsigned long long)arg1 ;
-(void)_buttomBarDidSelectTool:(unsigned long long)arg1 ;
-(UIView *)toolContainerView;
-(id)filterView;
-(void)_configVideoViewToStartPlaying;
-(void)_trimValueChanged:(id)arg1 autoplay:(BOOL)arg2 fromScrubTime:(SCD_Struct_FB100)arg3 ;
-(FBVideoVolumeControlView *)soundView;
-(void)_configVideoViewToStopPlaying;
-(void)_generateScrubberThumbs:(double)arg1 ;
-(void)_showPlayButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_togglePlaybackForDraggingMode:(unsigned long long)arg1 ;
-(FBVideoEditingAudioToggle *)audioToggleView;
-(void)_didTapOnTrimming;
-(void)_updateTrimBubbleViewAnimated:(BOOL)arg1 ;
-(void)_continuePlayingAfterUserInteractionFromScrubTime:(SCD_Struct_FB100)arg1 ;
-(void)_handleAudioChange:(BOOL)arg1 ;
-(void)playbackView:(id)arg1 didPlayToTime:(SCD_Struct_FB100)arg2 ;
-(void)playbackViewDidFinishPlaying:(id)arg1 ;
-(void)updateFilterViews:(opaqueCMSampleBufferRef)arg1 ;
-(void)_didTapOnFilter;
-(void)_didTapOnSound;
-(void)_didTapOnCrop;
-(void)_didTapOnCover;
-(long long)videoTrimViewMode;
-(unsigned long long)selectedFilterIndex;
-(void)setSelectedFilterIndex:(unsigned long long)arg1 ;
-(void)setTrimView:(FBVideoTrimView *)arg1 ;
-(void)setSoundView:(FBVideoVolumeControlView *)arg1 ;
-(void)setAudioToggleView:(FBVideoEditingAudioToggle *)arg1 ;
-(void)setHdUploadButton:(FBMediaHDUploadButton *)arg1 ;
-(void)setToolContainerView:(UIView *)arg1 ;
-(void)setCropRectangleView:(FBCropRectangleView *)arg1 ;
-(void)setSelectedFrame:(UIImage *)arg1 ;
-(void)playerMuteStateChanged:(BOOL)arg1 ;
-(void)setDelegate:(id<FBVideoEditingViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<FBVideoEditingViewControllerDelegate>)delegate;
-(void)applicationWillResignActive:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)didReceiveMemoryWarning;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(UIImage *)placeholderImage;
-(UIImage *)selectedFrame;
-(UIImage *)overlayImage;
-(void)beginInterruption;
-(FBButton *)playButton;
-(FBVideoScrubberView *)scrubberView;
-(FBVideoEditingPlaybackView *)playerView;
-(void)setPlayerView:(FBVideoEditingPlaybackView *)arg1 ;
-(void)setOverlayImage:(UIImage *)arg1 ;
-(void)setPlayButton:(FBButton *)arg1 ;
-(void)setBottomBar:(FBMediaGalleryBottomBar *)arg1 ;
-(FBMediaGalleryBottomBar *)bottomBar;
@end

