/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBFacecastLiveStatusViewDelegate.h>
#import <Facebook/FBFacecastEndTimerViewDelegate.h>

@protocol FBFacecastStatusOverlayViewDelegate;
@class FBFacecastLiveStatusView, UIActivityIndicatorView, CAGradientLayer, UIView, FBRichLabel, UIButton, FBTimer, NSString, NSArray;

@interface FBFacecastStatusOverlayView : UIView <FBFacecastLiveStatusViewDelegate, FBFacecastEndTimerViewDelegate> {

	unsigned long long _state;
	FBFacecastLiveStatusView* _liveStatusView;
	UIActivityIndicatorView* _activityIndicatorView;
	CAGradientLayer* _warningVeil;
	UIView* _darkenView;
	UIView* _videoDarkenView;
	UIView* _nonVideoDarkenView;
	UIView* _contentView;
	FBRichLabel* _titleText;
	FBRichLabel* _descriptionText;
	UIButton* _reconnectingFinishButton;
	UIButton* _pauseResumeButton;
	UIButton* _pauseFinishButton;
	long long _maxTimeInSeconds;
	double _videoDuration;
	FBTimer* _clearTextTimer;
	id<FBFacecastStatusOverlayViewDelegate> _delegate;
	NSString* _copyrightViolationDialogTitleText;
	NSString* _copyrightViolationDialogDescriptionText;
	NSString* _copyrightViolationDialogContinueButtonText;
	NSString* _copyrightViolationDialogStopButtonText;
	CGRect _videoFrame;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic,__weak) id<FBFacecastStatusOverlayViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGRect videoFrame;                                                    //@synthesize videoFrame=_videoFrame - In the implementation block
@property (nonatomic,copy,readonly) NSArray * viewerCountDataPoints; 
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                           //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,copy) NSString * copyrightViolationDialogTitleText;                           //@synthesize copyrightViolationDialogTitleText=_copyrightViolationDialogTitleText - In the implementation block
@property (nonatomic,copy) NSString * copyrightViolationDialogDescriptionText;                     //@synthesize copyrightViolationDialogDescriptionText=_copyrightViolationDialogDescriptionText - In the implementation block
@property (nonatomic,copy) NSString * copyrightViolationDialogContinueButtonText;                  //@synthesize copyrightViolationDialogContinueButtonText=_copyrightViolationDialogContinueButtonText - In the implementation block
@property (nonatomic,copy) NSString * copyrightViolationDialogStopButtonText;                      //@synthesize copyrightViolationDialogStopButtonText=_copyrightViolationDialogStopButtonText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)videoFrame;
-(void)setVideoFrame:(CGRect)arg1 ;
-(void)setVideoIdentifier:(id)arg1 ;
-(void)setDurationHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)facecastEndTimerViewReachedTimeLimit:(id)arg1 ;
-(void)setMaxTimeInSeconds:(long long)arg1 ;
-(id)initWithSession:(id)arg1 scenePath:(id)arg2 broadcastType:(long long)arg3 ;
-(void)setBroadcastType:(long long)arg1 ;
-(void)setStatusText:(id)arg1 withSeverityLevel:(unsigned long long)arg2 forTime:(double)arg3 ;
-(void)setCopyrightViolationDialogTitleText:(NSString *)arg1 ;
-(void)setCopyrightViolationDialogDescriptionText:(NSString *)arg1 ;
-(void)setCopyrightViolationDialogStopButtonText:(NSString *)arg1 ;
-(void)setCopyrightViolationDialogContinueButtonText:(NSString *)arg1 ;
-(void)onReconnectingFinishedButtonTapped:(id)arg1 ;
-(void)onPausedFinishedButtonTapped:(id)arg1 ;
-(void)onResumeButtonTapped:(id)arg1 ;
-(id)_exceedTimeLimitImminentDescription;
-(NSString *)copyrightViolationDialogStopButtonText;
-(NSString *)copyrightViolationDialogContinueButtonText;
-(NSString *)copyrightViolationDialogTitleText;
-(NSString *)copyrightViolationDialogDescriptionText;
-(void)_hideDuration;
-(void)facecastLiveStatusView:(id)arg1 didUpdateWithViewerCount:(long long)arg2 ;
-(void)facecastLiveStatusViewLiveIndicatorTapped:(id)arg1 ;
-(void)facecastLiveStatusViewViewerCountTapped:(id)arg1 ;
-(id)initWithSession:(id)arg1 scenePath:(id)arg2 ;
-(void)setUseDarkLiveText:(BOOL)arg1 ;
-(void)updateTimerView:(double)arg1 ;
-(NSArray *)viewerCountDataPoints;
-(void)setDelegate:(id<FBFacecastStatusOverlayViewDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<FBFacecastStatusOverlayViewDelegate>)delegate;
-(void)setState:(unsigned long long)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)clearText;
@end

