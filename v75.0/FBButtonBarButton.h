/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIButton.h>

@class UIImageView, FBBadgeView;

@interface FBButtonBarButton : UIButton {

	UIImageView* _disclosureIndicatorView;
	FBBadgeView* _badgeView;
	unsigned long long _layoutStyle;
	unsigned long long _actionBarButtonType;
	long long _badgeCount;

}

@property (assign,nonatomic) unsigned long long layoutStyle;                      //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) unsigned long long actionBarButtonType;              //@synthesize actionBarButtonType=_actionBarButtonType - In the implementation block
@property (assign,nonatomic) long long badgeCount;                                //@synthesize badgeCount=_badgeCount - In the implementation block
+(id)buttonWithItem:(id)arg1 ;
+(id)_newBadgeView;
-(void)setActionBarButtonType:(unsigned long long)arg1 ;
-(unsigned long long)actionBarButtonType;
-(void)updateTitlesUsingItem:(id)arg1 ;
-(void)updateImagesUsingItem:(id)arg1 ;
-(void)updateTitleColorsUsingItem:(id)arg1 ;
-(void)updateDisclosureIndicatorAlpha;
-(void)updateDisclosureIndicatorUsingItem:(id)arg1 ;
-(void)addDisclosureIndicatorView;
-(void)updateBadgeCountUsingItem:(id)arg1 ;
-(void)removeDisclosureIndicatorView;
-(BOOL)_isShowingDisclosureIndicator;
-(UIEdgeInsets)fb_imageEdgeInsets;
-(UIEdgeInsets)fb_titleEdgeInsets;
-(CGSize)fb_currentTitleWrappedTextSizeWithBoundingSize:(CGSize)arg1 ;
-(CGSize)fb_currentTitleTextSizeWithBoundingWidth:(double)arg1 ;
-(double)fb_contentVerticalMargin;
-(void)layoutSubviews;
-(void)didMoveToSuperview;
-(unsigned long long)layoutStyle;
-(void)setLayoutStyle:(unsigned long long)arg1 ;
-(void)setBadgeCount:(long long)arg1 ;
-(long long)badgeCount;
@end

