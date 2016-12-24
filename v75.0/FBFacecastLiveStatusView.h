/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBFacecastLiveViewerCountManagerDelegate.h>

@protocol FBFacecastLiveStatusViewDelegate;
@class FBUserSession, FBScenePath, NSString, FBFacecastLiveViewerCountManager, NSDate, UILabel, UIImage, UIImageView, NSArray;

@interface FBFacecastLiveStatusView : UIView <FBFacecastLiveViewerCountManagerDelegate> {

	unsigned long long _state;
	FBUserSession* _session;
	FBScenePath* _scenePath;
	NSString* _videoID;
	FBFacecastLiveViewerCountManager* _viewerCountManager;
	long long _alignment;
	CGAffineTransform _styleAttributes;
	CGAffineTransform _compressedStyleAttributes;
	NSDate* _dateFirstStartedUpdating;
	double _duration;
	double _maxDuration;
	UILabel* _liveLabel;
	UILabel* _durationLabel;
	double _durationWidth;
	UILabel* _countLabel;
	double _countWidth;
	UILabel* _descriptionLabel;
	unsigned long long _descriptionLabelSeverity;
	UIImage* _defaultLiveBackgroundImage;
	UIImage* _compressedLiveBackgroundImage;
	UIImage* _defaultCountBackgroundImage;
	UIImage* _compressedCountBackgroundImage;
	NSString* _statusText;
	NSString* _subtitleText;
	long long _viewerCount;
	NSString* _liveText;
	NSString* _badNetworkText;
	UIImageView* _liveView;
	UIImageView* _countView;
	UIImageView* _typeGlyph;
	long long _broadcastType;
	BOOL _viewerFocusedOnVideo;
	BOOL _useDarkText;
	BOOL _allowsCompressedStyle;
	id<FBFacecastLiveStatusViewDelegate> _delegate;
	NSArray* _viewerCountDataPoints;

}

@property (assign,nonatomic) unsigned long long state;                                          //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double maxDuration;                                                //@synthesize maxDuration=_maxDuration - In the implementation block
@property (assign,nonatomic,__weak) id<FBFacecastLiveStatusViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * viewerCountDataPoints;                            //@synthesize viewerCountDataPoints=_viewerCountDataPoints - In the implementation block
@property (assign,nonatomic) BOOL viewerFocusedOnVideo;                                         //@synthesize viewerFocusedOnVideo=_viewerFocusedOnVideo - In the implementation block
@property (assign,nonatomic) BOOL useDarkText;                                                  //@synthesize useDarkText=_useDarkText - In the implementation block
@property (assign,nonatomic) BOOL allowsCompressedStyle;                                        //@synthesize allowsCompressedStyle=_allowsCompressedStyle - In the implementation block
@property (assign,nonatomic) BOOL durationHidden; 
@property (assign,nonatomic) BOOL isInLobbyMode; 
@property (nonatomic,readonly) BOOL viewerCountIconHidden; 
@property (nonatomic,retain) UIImage * viewerCountIcon; 
@property (assign,nonatomic) long long viewerCount; 
@property (nonatomic,readonly) CGRect contentFrame; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setScenePath:(id)arg1 ;
-(void)pauseViewCountPolling;
-(void)resumeViewCountPolling;
-(void)setVideoIdentifier:(id)arg1 ;
-(void)setIsInLobbyMode:(BOOL)arg1 ;
-(void)setDurationHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setAlignment:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)viewerCount;
-(void)setViewerCount:(long long)arg1 ;
-(void)setBroadcastType:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 scenePath:(id)arg3 broadcastType:(long long)arg4 ;
-(BOOL)setText:(id)arg1 withSeverityLevel:(unsigned long long)arg2 ;
-(void)setViewerFocusedOnVideo:(BOOL)arg1 ;
-(void)setUseDarkText:(BOOL)arg1 ;
-(BOOL)durationHidden;
-(void)updateTimerView:(double)arg1 ;
-(NSArray *)viewerCountDataPoints;
-(void)stopBreathingAnimation;
-(void)startBreathingAnimation;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 scenePath:(id)arg3 ;
-(void)setDurationHidden:(BOOL)arg1 ;
-(BOOL)shouldShowCompressedStyle;
-(BOOL)viewerCountIconHidden;
-(BOOL)isInLobbyMode;
-(void)clearViewCountPolling;
-(void)resetViewCountPolling;
-(id)_backgroundImageWithColor:(id)arg1 cornerRadius:(double)arg2 ;
-(void)_didTapLiveIndicator;
-(unsigned long long)_typeGlyphNameForBroadcastType:(long long)arg1 ;
-(void)_didTapViewerCount;
-(double)liveLabelHorizontalPadding;
-(double)liveToCountSpacing;
-(double)countLabelHorizontalPadding;
-(double)glyphToCountSpacing;
-(double)labelVerticalPadding;
-(id)liveBackgroundImage;
-(id)countBackgroundImage;
-(BOOL)_shouldHideViewerCount;
-(void)_updateViewerCount:(long long)arg1 ;
-(BOOL)viewerFocusedOnVideo;
-(void)facecastLiveViewerCountManager:(id)arg1 didUpdateViewerCount:(long long)arg2 ;
-(void)facecastLiveViewerCountManager:(id)arg1 failedToUpdateWithError:(id)arg2 ;
-(UIImage *)viewerCountIcon;
-(void)setViewerCountIcon:(UIImage *)arg1 ;
-(void)setCompressedStyleAttributes:(CGAffineTransform)arg1 ;
-(BOOL)useDarkText;
-(BOOL)allowsCompressedStyle;
-(void)setAllowsCompressedStyle:(BOOL)arg1 ;
-(CGRect)contentFrame;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBFacecastLiveStatusViewDelegate>)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBFacecastLiveStatusViewDelegate>)delegate;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)clearText;
-(double)fontSize;
-(void)setMaxDuration:(double)arg1 ;
-(double)maxDuration;
-(void)setStyleAttributes:(CGAffineTransform)arg1 ;
-(void)setUserSession:(id)arg1 ;
-(void)_layoutSubviews;
@end
