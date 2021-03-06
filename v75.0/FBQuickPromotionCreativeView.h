/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBQuickPromotionInterstitialConfiguration, FBFacepileView, FBRichTextView, UIView, FBUserSession, UILabel, UIScrollView, FBNetworkImageView, UIImageView;

@interface FBQuickPromotionCreativeView : UIView {

	BOOL _facepileIsSet;
	CGRect _textLabelFrame;
	CGRect _subtitleTextViewFrame;
	CGRect _footerTextViewFrame;
	CGRect _footerDividerViewFrame;
	CGRect _imageViewFrame;
	CGRect _socialContextViewFrame;
	CGRect _facepileViewFrame;
	CGRect _contentScrollContainerFrame;
	double _freeVerticalSpace;
	FBQuickPromotionInterstitialConfiguration* _configuration;
	FBFacepileView* _facepileView;
	FBRichTextView* _socialContextView;
	UIView* _footerDividerView;
	FBUserSession* _session;
	UILabel* _textLabel;
	FBRichTextView* _subtitleTextView;
	FBRichTextView* _footerTextView;
	UIScrollView* _contentScrollContainer;
	FBNetworkImageView* _networkImageView;
	UIImageView* _animatedImageView;
	UIImageView* _imageOverlayView;

}

@property (nonatomic,readonly) UIScrollView * contentScrollContainer;              //@synthesize contentScrollContainer=_contentScrollContainer - In the implementation block
@property (nonatomic,retain) FBNetworkImageView * networkImageView;                //@synthesize networkImageView=_networkImageView - In the implementation block
@property (nonatomic,retain) UIImageView * animatedImageView;                      //@synthesize animatedImageView=_animatedImageView - In the implementation block
@property (nonatomic,retain) UIImageView * imageOverlayView;                       //@synthesize imageOverlayView=_imageOverlayView - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                                //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,readonly) FBRichTextView * subtitleTextView;                  //@synthesize subtitleTextView=_subtitleTextView - In the implementation block
@property (nonatomic,readonly) FBRichTextView * footerTextView;                    //@synthesize footerTextView=_footerTextView - In the implementation block
@property (nonatomic,readonly) FBRichTextView * socialContextView;                 //@synthesize socialContextView=_socialContextView - In the implementation block
-(void)setNetworkImageView:(FBNetworkImageView *)arg1 ;
-(FBNetworkImageView *)networkImageView;
-(id)_animatedImageViewFromURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(id)_networkImageViewFromURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(FBRichTextView *)subtitleTextView;
-(void)setImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 imageOverlayImage:(id)arg4 ;
-(void)setFacepileWithText:(id)arg1 imageURLs:(id)arg2 ;
-(void)setAnimatedImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(void)setImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(void)unsetImage;
-(void)setAnimatedImageView:(UIImageView *)arg1 ;
-(UIImageView *)animatedImageView;
-(FBRichTextView *)footerTextView;
-(void)_computeLayoutForBounds:(CGRect)arg1 ;
-(void)setImageOverlayView:(UIImageView *)arg1 ;
-(UIScrollView *)contentScrollContainer;
-(id)_standardLabelTruncatedString;
-(CGRect)_calculateImageViewFrameForSize:(CGSize)arg1 scale:(double)arg2 ;
-(UIImageView *)imageOverlayView;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 configuration:(id)arg3 ;
-(void)unsetFacepile;
-(FBRichTextView *)socialContextView;
-(BOOL)isTakeOverView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)textLabel;
@end

