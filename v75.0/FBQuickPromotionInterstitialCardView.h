/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBQuickPromotionInterstitial.h>

@class NSString, UILabel, FBRichTextView, UIButton, FBQuickPromotionInterstitialConfiguration, FBQuickPromotionInterstitialHorizontalButtonBarView, UIImageView, FBUserSession, FBQuickPromotionCreativeView, FBQuickPromotionCardWithBlurredBackgroundView;

@interface FBQuickPromotionInterstitialCardView : UIView <FBQuickPromotionInterstitial> {

	FBQuickPromotionInterstitialHorizontalButtonBarView* _buttonBarView;
	UIImageView* _backgroundImageView;
	FBUserSession* _session;
	NSString* _promotionID;
	UIButton* _dismissButton;
	FBQuickPromotionCreativeView* _interstitialView;
	FBQuickPromotionCardWithBlurredBackgroundView* _cardView;

}

@property (nonatomic,retain) FBQuickPromotionCardWithBlurredBackgroundView * cardView;                 //@synthesize cardView=_cardView - In the implementation block
@property (nonatomic,retain) FBQuickPromotionCreativeView * interstitialView;                          //@synthesize interstitialView=_interstitialView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * promotionID;                                                     //@synthesize promotionID=_promotionID - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel; 
@property (nonatomic,readonly) FBRichTextView * subtitleTextView; 
@property (nonatomic,readonly) FBRichTextView * footerTextView; 
@property (nonatomic,readonly) UIButton * primaryButton; 
@property (nonatomic,readonly) UIButton * secondaryButton; 
@property (nonatomic,readonly) UIButton * dismissButton;                                               //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,readonly) FBRichTextView * socialContextView; 
@property (nonatomic,readonly) FBQuickPromotionInterstitialConfiguration * configuration; 
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 ;
-(NSString *)promotionID;
-(UIButton *)secondaryButton;
-(void)setPromotionID:(NSString *)arg1 ;
-(FBRichTextView *)subtitleTextView;
-(void)setFacepileWithText:(id)arg1 imageURLs:(id)arg2 ;
-(UIButton *)primaryButton;
-(void)setAnimatedImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(void)setImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(void)unsetImage;
-(FBRichTextView *)footerTextView;
-(CGSize)buttonBarSizeForCardBounds:(CGRect)arg1 ;
-(void)layoutButtonItemsForInterstitialSize:(CGSize)arg1 cardBounds:(CGRect)arg2 ;
-(void)unsetFacepile;
-(FBRichTextView *)socialContextView;
-(BOOL)isTakeOverView;
-(void)layoutSubviews;
-(UILabel *)textLabel;
-(void)setBackgroundImage:(id)arg1 ;
-(FBQuickPromotionInterstitialConfiguration *)configuration;
-(FBQuickPromotionCardWithBlurredBackgroundView *)cardView;
-(void)setCardView:(FBQuickPromotionCardWithBlurredBackgroundView *)arg1 ;
-(FBQuickPromotionCreativeView *)interstitialView;
-(void)setInterstitialView:(FBQuickPromotionCreativeView *)arg1 ;
-(UIButton *)dismissButton;
@end

