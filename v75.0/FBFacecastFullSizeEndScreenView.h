/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBFacecastFullSizeEndScreenFooterViewDelegate.h>
#import <Facebook/FBFacecastFullSizeEndScreenContentViewDelegate.h>
#import <Facebook/FBFacecastFullSizeEndScreenAccessoriesViewDelegate.h>

@protocol FBFacecastFullSizeEndScreenViewDelegate;
@class FBFacecastSummaryVideoPlayerWrapperView, FBFacecastFullSizeEndScreenAccessoriesView, FBFacecastFullSizeEndScreenContentView, FBFacecastFullSizeEndScreenFooterView, FBSemiTransparentOverlayPresentingView, FBUserSession, UIView;

@interface FBFacecastFullSizeEndScreenView : UIView <FBFacecastFullSizeEndScreenFooterViewDelegate, FBFacecastFullSizeEndScreenContentViewDelegate, FBFacecastFullSizeEndScreenAccessoriesViewDelegate> {

	FBFacecastSummaryVideoPlayerWrapperView* _videoWrapper;
	FBFacecastFullSizeEndScreenAccessoriesView* _accessoriesView;
	FBFacecastFullSizeEndScreenContentView* _contentView;
	FBFacecastFullSizeEndScreenFooterView* _footerView;
	FBSemiTransparentOverlayPresentingView* _overlayPresentingView;
	FBUserSession* _session;
	BOOL _shouldAllowTipJarSetting;
	BOOL _showsHDUploadButton;
	BOOL _isTipJarEnabled;
	BOOL _isFundraiserEnabled;
	id<FBFacecastFullSizeEndScreenViewDelegate> _delegate;
	UIView* _ufiView;

}

@property (assign,nonatomic,__weak) id<FBFacecastFullSizeEndScreenViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long saveToCameraRollSaveState; 
@property (assign,nonatomic) FBProfileScrollingBehavior hdUploadState; 
@property (assign,nonatomic) BOOL showsHDUploadButton;                                                 //@synthesize showsHDUploadButton=_showsHDUploadButton - In the implementation block
@property (assign,nonatomic) BOOL showsEditButton; 
@property (assign,nonatomic) BOOL showsSaveToCameraRollButton; 
@property (assign,nonatomic) BOOL isTipJarEnabled;                                                     //@synthesize isTipJarEnabled=_isTipJarEnabled - In the implementation block
@property (assign,nonatomic) BOOL isFundraiserEnabled;                                                 //@synthesize isFundraiserEnabled=_isFundraiserEnabled - In the implementation block
@property (nonatomic,retain) UIView * ufiView;                                                         //@synthesize ufiView=_ufiView - In the implementation block
-(UIView *)ufiView;
-(void)setUfiView:(UIView *)arg1 ;
-(void)playVideo;
-(void)didTapUploadButtonInAccessoriesView:(id)arg1 ;
-(void)didTapEditButtonInAccessoriesView:(id)arg1 ;
-(void)didTapSaveToCameraRollButtonInAccessoriesView:(id)arg1 ;
-(void)setHdUploadState:(FBProfileScrollingBehavior)arg1 ;
-(void)setShowsHDUploadButton:(BOOL)arg1 ;
-(BOOL)showsHDUploadButton;
-(void)setShowsEditButton:(BOOL)arg1 ;
-(BOOL)showsEditButton;
-(void)setShowsSaveToCameraRollButton:(BOOL)arg1 ;
-(BOOL)showsSaveToCameraRollButton;
-(long long)saveToCameraRollSaveState;
-(void)setSaveToCameraRollSaveState:(long long)arg1 ;
-(void)showForcedUploadTooltip;
-(FBProfileScrollingBehavior)hdUploadState;
-(void)contentViewDidTapPrivacyButton:(id)arg1 ;
-(void)footerViewDidTapPostButton:(id)arg1 ;
-(void)footerViewDidTapDeleteButton:(id)arg1 ;
-(void)setPrivacyContent:(id)arg1 ;
-(void)accessoriesViewEditButtonDidTap:(id)arg1 ;
-(BOOL)isFundraiserEnabled;
-(id)initWithVideoAsset:(id)arg1 videoDuration:(double)arg2 targetType:(unsigned long long)arg3 scenePath:(id)arg4 session:(id)arg5 shouldAllowFundraiserSelection:(BOOL)arg6 shouldAllowTipJarSetting:(BOOL)arg7 ;
-(void)setFundraiser:(id)arg1 numberOfDonation:(long long)arg2 ;
-(void)setIsTipJarEnabled:(BOOL)arg1 ;
-(void)setIsFundraiserEnabled:(BOOL)arg1 ;
-(BOOL)isVideoPlaying;
-(void)flashInfoOverlayWithDescription:(id)arg1 afterDelay:(double)arg2 ;
-(/*^block*/id)showStickyOverlayWithDescription:(id)arg1 afterDelay:(double)arg2 ;
-(BOOL)isTipJarEnabled;
-(void)setDelegate:(id<FBFacecastFullSizeEndScreenViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBFacecastFullSizeEndScreenViewDelegate>)delegate;
-(void)setVideoAsset:(id)arg1 ;
-(void)pauseVideo;
-(void)setVideo:(id)arg1 ;
@end

