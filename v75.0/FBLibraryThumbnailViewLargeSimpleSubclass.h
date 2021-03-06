/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBLibraryThumbnailView.h>

@class FBLibraryThumbnailViewLargeSimpleSelectedFrameView, FBPreciseControlEventButton, NSTimer, FBPinchGestureRecognizer, FLAnimatedImageView, FBWebImageView, FBMediaPickerVideoLoopingPlayerView, UIImageView;

@interface FBLibraryThumbnailViewLargeSimpleSubclass : FBLibraryThumbnailView {

	FBLibraryThumbnailViewLargeSimpleSelectedFrameView* _selectedFrameView;
	FBPreciseControlEventButton* _imageButton;
	NSTimer* _longPressTimer;
	NSTimer* _doubleTapTimer;
	unsigned long long _tapCount;
	FBPinchGestureRecognizer* _pinchGestureRecognizer;
	BOOL _didLongPressedAnimationStart;
	unsigned long long _gestureRecognizerState;
	unsigned long long _metadataRequestState;
	unsigned long long _longPressTimerState;
	BOOL _didToggleThumbnailSelectionDuringAnimation;
	FLAnimatedImageView* _animatedImageView;
	FBWebImageView* _webImageView;
	FBMediaPickerVideoLoopingPlayerView* _videoView;
	UIImageView* _360IndicatorView;
	UIImageView* _livePhotoIndicatorView;
	BOOL _fnfEnabled;
	BOOL _fnfMemoryOpt;
	BOOL _videoCoordinatorStop;
	BOOL _videoCoordinatorPause;
	BOOL _viewSelected;
	unsigned long long _orderIndex;

}

@property (nonatomic,readonly) BOOL viewSelected;                          //@synthesize viewSelected=_viewSelected - In the implementation block
@property (nonatomic,readonly) unsigned long long orderIndex;              //@synthesize orderIndex=_orderIndex - In the implementation block
-(id)initWithFrame:(CGRect)arg1 fnfEnabled:(BOOL)arg2 fnfMemoryOpt:(BOOL)arg3 ;
-(void)setBackgroundNormalImage:(id)arg1 highlightedImage:(id)arg2 ;
-(void)setThumbnailNormalImage:(id)arg1 highlightedImage:(id)arg2 ;
-(void)setAssociateNormalImage:(id)arg1 highlightedImage:(id)arg2 infiniteLooping:(BOOL)arg3 ;
-(void)setThumbnailViewType:(unsigned long long)arg1 ;
-(void)setSelected:(BOOL)arg1 withOrderIndex:(unsigned long long)arg2 ;
-(BOOL)needsStaticThumbnail;
-(void)setWebImageSpecifier:(id)arg1 ;
-(void)setThumbnailViewSelectionType:(unsigned long long)arg1 ;
-(void)setVideoDurationTimeDuration:(double)arg1 ;
-(void)setThumbnailStyle:(unsigned long long)arg1 ;
-(void)setThumbnailAnimatedImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 thumbnailStyle:(unsigned long long)arg2 fnfEnabled:(BOOL)arg3 fnfMemoryOpt:(BOOL)arg4 ;
-(unsigned long long)orderIndex;
-(void)videoCoordinatorPlay;
-(void)videoCoordinatorPause;
-(void)videoCoordinatorStop;
-(id)thumbnailAnimatedImage;
-(id)thumbnailNormalImage;
-(id)thumbnailHighlightedImage;
-(void)_buttonTouchDown:(id)arg1 ;
-(void)_buttonTouchUpOutside:(id)arg1 ;
-(void)_buttonTouchUpInside:(id)arg1 ;
-(void)_buttonTouchDragInside:(id)arg1 ;
-(void)_buttonTouchCancel:(id)arg1 ;
-(void)_buttonTouchDragOutside:(id)arg1 ;
-(void)_buttonTouchDragEnter:(id)arg1 ;
-(void)_buttonTouchDragExit:(id)arg1 ;
-(void)_buttonPinch:(id)arg1 ;
-(void)_setSelectedFrameViewTypeFromSelected:(BOOL)arg1 selectionType:(unsigned long long)arg2 thumbnailViewType:(unsigned long long)arg3 thumbnailViewStyle:(unsigned long long)arg4 ;
-(void)_update360IndicatorView;
-(void)_updateLivePhotoIndicatorView;
-(void)_setAnimatedImageViewSelected:(BOOL)arg1 ;
-(void)_startShrinkingAnimationAndLongPressTimer;
-(void)_handleLongPressPossible:(id)arg1 ;
-(void)_longPressTimerResetWithState:(unsigned long long)arg1 ;
-(void)_resetDoubleTapCounter;
-(void)_handleTapRecognized;
-(void)_timerReset:(id*)arg1 ;
-(void)_cancelShrinkingAnimation;
-(id)_shrinkingNoBouncingAnimationFromScale:(double)arg1 toScale:(double)arg2 duration:(double)arg3 ;
-(id)_shrinkingBouncingAnimationFromScale:(double)arg1 toScale:(double)arg2 ;
-(void)_startShrinkingAnimation;
-(BOOL)viewSelected;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)prepareForReuse;
-(BOOL)selected;
-(id)accessibilityHint;
-(void)clear;
-(void)setVideoURL:(id)arg1 ;
-(id)videoURL;
-(id)thumbnailImageView;
@end

