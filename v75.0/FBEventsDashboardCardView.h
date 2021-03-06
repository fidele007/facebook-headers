/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, FBItemContentSummaryDisclosureView, UIView, UIButton, FBHorizontalButton;

@interface FBEventsDashboardCardView : UIView {

	UIImageView* _backgroundImageView;
	UILabel* _moreTextLabel;
	FBItemContentSummaryDisclosureView* _disclosureView;
	UIView* _headerSeperatorView;
	UIView* _footerSeperatorView;
	UIEdgeInsets _cardEdgeInsets;
	UIView* _buttomBorderView;
	UIView* _topBorderView;
	BOOL _showDisclosureArrow;
	BOOL _showFooter;
	UIButton* _headerButton;
	UILabel* _titleLabel;
	UIView* _contentView;
	UIButton* _footerButton;
	FBHorizontalButton* _footerLabelIcon;
	UIEdgeInsets _contentViewInsets;

}

@property (nonatomic,readonly) UIButton * headerButton;                           //@synthesize headerButton=_headerButton - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) BOOL showDisclosureArrow;                            //@synthesize showDisclosureArrow=_showDisclosureArrow - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentViewInsets;                      //@synthesize contentViewInsets=_contentViewInsets - In the implementation block
@property (nonatomic,readonly) UIButton * footerButton;                           //@synthesize footerButton=_footerButton - In the implementation block
@property (nonatomic,readonly) FBHorizontalButton * footerLabelIcon;              //@synthesize footerLabelIcon=_footerLabelIcon - In the implementation block
@property (assign,nonatomic) BOOL showFooter;                                     //@synthesize showFooter=_showFooter - In the implementation block
+(UIEdgeInsets)_createCardInsetsWithCardlessUIEnabled:(BOOL)arg1 ;
+(double)titleHorizontalOffset;
-(void)setShowFooter:(BOOL)arg1 ;
-(void)setShowDisclosureArrow:(BOOL)arg1 ;
-(BOOL)showDisclosureArrow;
-(FBHorizontalButton *)footerLabelIcon;
-(BOOL)showFooter;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(id)accessibilityLabel;
-(UILabel *)titleLabel;
-(UIEdgeInsets)contentViewInsets;
-(void)setContentViewInsets:(UIEdgeInsets)arg1 ;
-(void)_setup;
-(UIButton *)headerButton;
-(UIButton *)footerButton;
@end

