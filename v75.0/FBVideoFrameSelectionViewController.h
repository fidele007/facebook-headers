/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBVideoScrubberViewDelegate.h>

@protocol FBVideoFrameSelectionDelegate;
@class AVAsset, FBVideoProcessor, FBVideoProcessorConfig, FBVideoProcessorFilterConfig, UIImage, FBVideoClip, FBUserSession, FBVideoAsset, FBVideoScrubberView, FBVideoEditingPlaybackView, UIImageView, UIView, NSURL, NSString;

@interface FBVideoFrameSelectionViewController : UIViewController <FBVideoScrubberViewDelegate> {

	BOOL _viewIsVisible;
	Class _filterClass;
	AVAsset* _asset;
	BOOL _hasInitializedVideoViews;
	BOOL _previousStatusBarState;
	long long _previousStatusBarStyle;
	BOOL _noEditing;
	double _cropOriginWidthProportion;
	double _cropOriginHeightProportion;
	FBVideoProcessor* _videoProcessor;
	FBVideoProcessorConfig* _videoProcessorConfig;
	BOOL _enableColorFilter;
	FBVideoProcessorFilterConfig* _filterConfig;
	BOOL _playerViewFullWidth;
	UIImage* _selectedFrame;
	double _heightOfScrubberBarWrapper;
	double _heightOfPrivacyNotifyBar;
	double _heightOfPlayerView;
	double _deviceToIPhone6HeightRatio;
	double _deviceToIPhone6WidthRatio;
	id<FBVideoFrameSelectionDelegate> _delegate;
	FBVideoClip* _videoClip;
	double _videoPosition;
	FBUserSession* _userSession;
	FBVideoAsset* _video;
	UIImage* _overlayImage;
	double _maxLengthToUpload;
	FBVideoScrubberView* _scrubberView;
	FBVideoEditingPlaybackView* _playerView;
	UIImageView* _overlayImageView;
	UIView* _scrubberWrapper;
	NSURL* _videoURL;
	SCD_Struct_FB100 _keyTime;
	SCD_Struct_FB100 _frameOffset;

}

@property (nonatomic,retain) FBVideoScrubberView * scrubberView;                             //@synthesize scrubberView=_scrubberView - In the implementation block
@property (nonatomic,retain) FBVideoEditingPlaybackView * playerView;                        //@synthesize playerView=_playerView - In the implementation block
@property (nonatomic,retain) UIImageView * overlayImageView;                                 //@synthesize overlayImageView=_overlayImageView - In the implementation block
@property (assign,nonatomic) SCD_Struct_FB100 keyTime;                                       //@synthesize keyTime=_keyTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_FB100 frameOffset;                                   //@synthesize frameOffset=_frameOffset - In the implementation block
@property (nonatomic,retain) UIView * scrubberWrapper;                                       //@synthesize scrubberWrapper=_scrubberWrapper - In the implementation block
@property (nonatomic,retain) NSURL * videoURL;                                               //@synthesize videoURL=_videoURL - In the implementation block
@property (assign,nonatomic) double heightOfScrubberBarWrapper;                              //@synthesize heightOfScrubberBarWrapper=_heightOfScrubberBarWrapper - In the implementation block
@property (assign,nonatomic) double heightOfPrivacyNotifyBar;                                //@synthesize heightOfPrivacyNotifyBar=_heightOfPrivacyNotifyBar - In the implementation block
@property (assign,nonatomic) double heightOfPlayerView;                                      //@synthesize heightOfPlayerView=_heightOfPlayerView - In the implementation block
@property (assign,nonatomic) double deviceToIPhone6HeightRatio;                              //@synthesize deviceToIPhone6HeightRatio=_deviceToIPhone6HeightRatio - In the implementation block
@property (assign,nonatomic) double deviceToIPhone6WidthRatio;                               //@synthesize deviceToIPhone6WidthRatio=_deviceToIPhone6WidthRatio - In the implementation block
@property (assign,nonatomic,__weak) id<FBVideoFrameSelectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL playerViewFullWidth;                                       //@synthesize playerViewFullWidth=_playerViewFullWidth - In the implementation block
@property (nonatomic,retain) FBVideoClip * videoClip;                                        //@synthesize videoClip=_videoClip - In the implementation block
@property (assign,nonatomic) double videoPosition;                                           //@synthesize videoPosition=_videoPosition - In the implementation block
@property (nonatomic,retain) FBUserSession * userSession;                                    //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) FBVideoAsset * video;                                           //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) UIImage * selectedFrame;                                      //@synthesize selectedFrame=_selectedFrame - In the implementation block
@property (nonatomic,retain) UIImage * overlayImage;                                         //@synthesize overlayImage=_overlayImage - In the implementation block
@property (assign,nonatomic) double maxLengthToUpload;                                       //@synthesize maxLengthToUpload=_maxLengthToUpload - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGAffineTransform)transformForMovingView:(id)arg1 toFrame:(CGRect)arg2 ;
-(FBVideoClip *)videoClip;
-(void)updateCropOriginByWidthProportion:(double)arg1 heightProportion:(double)arg2 ;
-(void)_enableFiltersModeWithFilter:(id)arg1 ;
-(SCD_Struct_FB100)frameOffset;
-(void)setMaxLengthToUpload:(double)arg1 ;
-(void)setDeviceToIPhone6HeightRatio:(double)arg1 ;
-(void)setVideoClip:(FBVideoClip *)arg1 ;
-(double)videoPosition;
-(void)setPreviewHidden:(BOOL)arg1 ;
-(UIView *)scrubberWrapper;
-(void)disableGestureRecognizers;
-(void)enableGestureRecognizers;
-(void)setHeightOfPrivacyNotifyBar:(double)arg1 ;
-(void)setHeightOfScrubberBarWrapper:(double)arg1 ;
-(void)setHeightOfPlayerView:(double)arg1 ;
-(void)setDeviceToIPhone6WidthRatio:(double)arg1 ;
-(void)setPlayerViewFullWidth:(BOOL)arg1 ;
-(void)setVideoPosition:(double)arg1 ;
-(void)hidePlayerViewToFrame:(CGRect)arg1 ;
-(void)showPlayerViewFromFrame:(CGRect)arg1 thenHide:(BOOL)arg2 ;
-(void)finishThumbnailPicking;
-(void)resetVideoClip;
-(id)initWithColorFilterEnabled:(BOOL)arg1 ;
-(double)maxLengthToUpload;
-(void)_initVideoViews;
-(void)_generateScrubberThumbs;
-(void)_setThumbnailView;
-(void)_resetThumbnailContent;
-(id)_rotatedImage;
-(void)setKeyTime:(SCD_Struct_FB100)arg1 ;
-(void)_resetThumbnailView;
-(SCD_Struct_FB100)keyTime;
-(void)setFrameOffset:(SCD_Struct_FB100)arg1 ;
-(CGSize)preferredVideoSize;
-(UIImageView *)overlayImageView;
-(void)scrubberViewDidMoveHandleToPosition:(double)arg1 gesture:(unsigned long long)arg2 ;
-(void)scrubberViewFinishedMovingHandle;
-(BOOL)_videoNotTrimmedInTolerance:(double)arg1 ;
-(double)heightOfScrubberBarWrapper;
-(double)heightOfPrivacyNotifyBar;
-(double)heightOfPlayerView;
-(double)deviceToIPhone6HeightRatio;
-(double)deviceToIPhone6WidthRatio;
-(BOOL)playerViewFullWidth;
-(void)setScrubberView:(FBVideoScrubberView *)arg1 ;
-(void)setOverlayImageView:(UIImageView *)arg1 ;
-(void)setScrubberWrapper:(UIView *)arg1 ;
-(void)setDelegate:(id<FBVideoFrameSelectionDelegate>)arg1 ;
-(id<FBVideoFrameSelectionDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setPosition:(double)arg1 ;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UIImage *)selectedFrame;
-(UIImage *)overlayImage;
-(CGAffineTransform)preferredTransform;
-(FBUserSession *)userSession;
-(void)setUserSession:(FBUserSession *)arg1 ;
-(FBVideoScrubberView *)scrubberView;
-(void)setVideoURL:(NSURL *)arg1 ;
-(NSURL *)videoURL;
-(FBVideoEditingPlaybackView *)playerView;
-(void)setPlayerView:(FBVideoEditingPlaybackView *)arg1 ;
-(void)setOverlayImage:(UIImage *)arg1 ;
-(FBVideoAsset *)video;
-(void)setVideo:(FBVideoAsset *)arg1 ;
@end

