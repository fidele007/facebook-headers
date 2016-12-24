/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIScrollView.h>

@class UIActivityIndicatorView, UIView, UIScrollView, FBInstantShoppingDocumentStatusBarView, FBInstantShoppingDocumentFooterView, UIImageView;

@interface FBInstantShoppingDocumentView : UIScrollView {

	UIActivityIndicatorView* _loadingIndicator;
	UIView* _videoView;
	BOOL _forceAudioControl;
	BOOL _offsetVideoViewForHeader;
	BOOL _shouldShowDownArrow;
	UIScrollView* _documentView;
	UIView* _photoView;
	FBInstantShoppingDocumentStatusBarView* _statusBarView;
	FBInstantShoppingDocumentFooterView* _footerView;
	UIView* _swipeToOpenView;
	UIImageView* _downArrowImageView;

}

@property (nonatomic,retain) UIScrollView * documentView;                                            //@synthesize documentView=_documentView - In the implementation block
@property (nonatomic,retain) UIView * videoView;                                                     //@synthesize videoView=_videoView - In the implementation block
@property (nonatomic,retain) UIView * photoView;                                                     //@synthesize photoView=_photoView - In the implementation block
@property (nonatomic,readonly) FBInstantShoppingDocumentStatusBarView * statusBarView;               //@synthesize statusBarView=_statusBarView - In the implementation block
@property (nonatomic,readonly) FBInstantShoppingDocumentFooterView * footerView;                     //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) UIView * swipeToOpenView;                                               //@synthesize swipeToOpenView=_swipeToOpenView - In the implementation block
@property (nonatomic,readonly) UIImageView * downArrowImageView;                                     //@synthesize downArrowImageView=_downArrowImageView - In the implementation block
@property (assign,nonatomic,__weak) id<FBInstantShoppingDocumentViewDelegate> delegate; 
+(double)documentViewHeightGivenDocument:(id)arg1 constrainingHeight:(double)arg2 ;
+(double)statusBarHeight;
-(CGRect)frameForMediaView:(id)arg1 ;
-(void)setSwipeToOpenView:(UIView *)arg1 ;
-(UIView *)swipeToOpenView;
-(BOOL)_shouldOverlayHeader;
-(void)setShouldShowDownArrow:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 forceAudioControl:(BOOL)arg2 offsetVideoViewForHeader:(BOOL)arg3 ;
-(FBInstantShoppingDocumentStatusBarView *)statusBarView;
-(UIImageView *)downArrowImageView;
-(void)configureWithViewModel:(id)arg1 document:(id)arg2 analyticsInfo:(id)arg3 session:(id)arg4 ;
-(void)setFooter:(id)arg1 toggleStatus:(id)arg2 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<FBInstantShoppingDocumentViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIScrollView *)documentView;
-(FBInstantShoppingDocumentFooterView *)footerView;
-(void)setDocumentView:(UIScrollView *)arg1 ;
-(void)setFullScreenEnabled:(BOOL)arg1 ;
-(void)setVideoView:(UIView *)arg1 ;
-(void)setPhotoView:(UIView *)arg1 ;
-(UIView *)photoView;
-(UIView *)videoView;
@end
