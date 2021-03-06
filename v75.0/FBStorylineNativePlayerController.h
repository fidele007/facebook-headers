/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBAudioSessionManagerClient.h>
#import <Facebook/FBStorylineNarrativeEngineDelegate.h>
#import <Facebook/RCTStreamAudioPlayerDelegate.h>
#import <Facebook/FBStorylineVideoActionViewDelegate.h>

@protocol FBStorylineNativePlayerControllerDelegate;
@class FBUserSession, FBStorylineNarrativeEngine, FBStorylineRendererViewManager, FBStorylineRendererTextureLoader, FBStorylineRendererProgramManager, RCTSGGLContext, EAGLContext, RCTStreamAudioPlayer, CADisplayLink, UIButton, FBStorylineAudioMeters, UIImageView, PABlurView, FBActivityIndicatorView, FBStorylineVideoActionView, FBStorylinePlayerBufferOverlayView, FBStorylinePlayerShareView, FBSimpleDownloader, NSCondition, FBTimer, NSMutableDictionary, NSDictionary, NSMutableArray, NSString, FBStorylineVideoDataBundle, FBFontResourceBundle, NSArray, UILabel, FBStorylineRenderingIndicatorView;

@interface FBStorylineNativePlayerController : UIViewController <FBAudioSessionManagerClient, FBStorylineNarrativeEngineDelegate, RCTStreamAudioPlayerDelegate, FBStorylineVideoActionViewDelegate> {

	FBUserSession* _session;
	FBStorylineNarrativeEngine* _engine;
	FBStorylineRendererViewManager* _viewManager;
	FBStorylineRendererTextureLoader* _textureLoader;
	FBStorylineRendererProgramManager* _programManager;
	unsigned long long _frameIndex;
	float _duration;
	BOOL _animationLoaded;
	RCTSGGLContext* _SGGLContext;
	EAGLContext* _context;
	RCTStreamAudioPlayer* _audioPlayer;
	CADisplayLink* _displayLink;
	UIButton* _muteBackgroundMusicButton;
	FBStorylineAudioMeters* _audioMeters;
	UIImageView* _loadingView;
	PABlurView* _blurEffectView;
	FBActivityIndicatorView* _loadingIndicator;
	FBStorylineVideoActionView* _videoActionView;
	FBStorylinePlayerBufferOverlayView* _bufferOverlay;
	FBStorylinePlayerShareView* _shareView;
	FBSimpleDownloader* _staticVideoDownloader;
	NSCondition* _readyToExportCondition;
	BOOL _playingWhenScrub;
	BOOL _playingOnResignActive;
	FBTimer* _audioTimeoutTimer;
	NSMutableDictionary* _localPhotoMap;
	NSDictionary* _moodAssetsMap;
	NSMutableArray* _textureAssetsURLs;
	NSMutableArray* _photoAssetsURLs;
	NSString* _animationDescriptorID;
	NSString* _animationDesctiptorIDWhenPlayerStarts;
	NSMutableArray* _animationDescriptor;
	FBStorylineVideoDataBundle* _bundle;
	BOOL _shouldPlay;
	FBFontResourceBundle* _fontBundle;
	NSArray* _assetMetadata;
	UILabel* _notEnoughPhotosLabel;
	UIButton* _playControlView;
	UIImageView* _playButton;
	unsigned long long _entryPoint;
	BOOL _didTearDown;
	/*^block*/id _exportingCallback;
	BOOL _nextButtonEnabled;
	BOOL _shouldHideShareButton;
	unsigned long long _promptTextureDimension;
	unsigned long long _textureDimension;
	NSString* _productName;
	BOOL _readyToExport;
	BOOL _waitingToPlay;
	BOOL _muteBackgroundMusic;
	BOOL _isReady;
	id<FBStorylineNativePlayerControllerDelegate> _delegate;
	FBStorylineRenderingIndicatorView* _renderingIndicatorView;

}

@property (nonatomic,copy) NSArray * animationDescriptor;                                                //@synthesize animationDescriptor=_animationDescriptor - In the implementation block
@property (nonatomic,readonly) BOOL readyToExport;                                                       //@synthesize readyToExport=_readyToExport - In the implementation block
@property (assign,nonatomic) BOOL waitingToPlay;                                                         //@synthesize waitingToPlay=_waitingToPlay - In the implementation block
@property (assign,nonatomic) BOOL muteBackgroundMusic;                                                   //@synthesize muteBackgroundMusic=_muteBackgroundMusic - In the implementation block
@property (assign,nonatomic) BOOL hideShareButton; 
@property (assign,nonatomic) BOOL hideBackgroundMusicButton; 
@property (assign,nonatomic,__weak) id<FBStorylineNativePlayerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBStorylineRenderingIndicatorView * renderingIndicatorView;               //@synthesize renderingIndicatorView=_renderingIndicatorView - In the implementation block
@property (assign,nonatomic) BOOL isReady;                                                               //@synthesize isReady=_isReady - In the implementation block
@property (nonatomic,readonly) unsigned long long entryPoint;                                            //@synthesize entryPoint=_entryPoint - In the implementation block
@property (nonatomic,readonly) FBStorylineVideoDataBundle * bundle;                                      //@synthesize bundle=_bundle - In the implementation block
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
-(void)_showLoadingIndicator;
-(void)finishInterruptionAndResume:(BOOL)arg1 ;
-(unsigned long long)outputCoordinationMode;
-(unsigned long long)outputOptions;
-(void)_resignActive:(id)arg1 ;
-(void)_onReactReady;
-(void)_toggleMuteBackgroundMusic;
-(void)setMuteBackgroundMusic:(BOOL)arg1 ;
-(void)setHideShareButton:(BOOL)arg1 ;
-(BOOL)_isLastFrame;
-(void)_updateShareView;
-(void)_showTextIndicator;
-(void)setReadyToExport:(BOOL)arg1 ;
-(void)showPlayButton;
-(void)_prepareAnimationDescriptor;
-(void)_hideOverlayViews;
-(void)setHideBackgroundMusicButton:(BOOL)arg1 ;
-(void)pauseAudio;
-(void)_setNextButtonEnabled:(BOOL)arg1 ;
-(FBStorylineRenderingIndicatorView *)renderingIndicatorView;
-(void)_prefetchRenderAudio;
-(void)_configureLoadingViewWithAssets:(id)arg1 ;
-(unsigned long long)_fullLengthCount;
-(BOOL)muteBackgroundMusic;
-(void)_downloadImageURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateWithVideoBundle:(id)arg1 ;
-(void)narrativeEngine:(id)arg1 didReceiveAssetMetadata:(id)arg2 ;
-(void)narrativeEngine:(id)arg1 didReceiveAnimationDuration:(float)arg2 ;
-(void)narrativeEngine:(id)arg1 didReceiveShaderMap:(id)arg2 ;
-(void)narrativeEngine:(id)arg1 didReceiveAnimationDescriptor:(id)arg2 animationDescriptorID:(id)arg3 isFirstInBatch:(BOOL)arg4 isLastInBatch:(BOOL)arg5 ;
-(void)streamAudioPlayerStateDidChange:(id)arg1 state:(unsigned long long)arg2 trackState:(id)arg3 ;
-(void)streamAudioPlayerSeekDidSucceed:(id)arg1 trackState:(id)arg2 ;
-(void)streamAudioPlayerTrackStateDidChange:(id)arg1 trackState:(id)arg2 ;
-(void)storylineVideoActionViewScrubDidStart:(id)arg1 ;
-(void)storylineVideoActionViewScrubDidEnd:(id)arg1 ;
-(void)storylineVideoActionView:(id)arg1 scrubToProgress:(float)arg2 ;
-(void)storylineVideoActionView:(id)arg1 playButtonTapped:(BOOL)arg2 ;
-(id)initWithBridge:(id)arg1 userSession:(id)arg2 entryPoint:(unsigned long long)arg3 ;
-(BOOL)hideShareButton;
-(BOOL)hideBackgroundMusicButton;
-(void)startWithVideoBundle:(id)arg1 ;
-(void)prepareVideoBundleForExporting:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)implicitPause;
-(void)waitForExporterReady;
-(id)createExporter;
-(void)seekToAssetAtIndex:(long long)arg1 ;
-(void)_onShare;
-(NSArray *)animationDescriptor;
-(void)setAnimationDescriptor:(NSArray *)arg1 ;
-(BOOL)readyToExport;
-(BOOL)waitingToPlay;
-(void)setWaitingToPlay:(BOOL)arg1 ;
-(BOOL)isReady;
-(void)setDelegate:(id<FBStorylineNativePlayerControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBStorylineNativePlayerControllerDelegate>)delegate;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(FBStorylineVideoDataBundle *)bundle;
-(void)update;
-(void)pause;
-(unsigned long long)entryPoint;
-(void)beginInterruption;
-(void)_didBecomeActive:(id)arg1 ;
-(float)_videoDuration;
-(void)_playButtonTapped:(id)arg1 ;
-(void)tearDown;
-(void)playAnimation;
-(void)pauseAnimation;
-(void)setIsReady:(BOOL)arg1 ;
-(void)setup;
@end

