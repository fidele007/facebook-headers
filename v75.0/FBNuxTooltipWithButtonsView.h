/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBNuxTooltipWithButtonsViewDelegate;
@class FBKVOController, UILabel, UIButton, UIView, FBNuxTooltipWithButtons;

@interface FBNuxTooltipWithButtonsView : UIView {

	FBKVOController* _KVOController;
	id<FBNuxTooltipWithButtonsViewDelegate> _delegate;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIButton* _primaryButton;
	UIButton* _secondaryButton;
	UIView* _buttonsHorizontalLineView;
	UIView* _buttonsVerticalLineView;
	FBNuxTooltipWithButtons* _toolTip;

}

@property (assign,nonatomic,__weak) id<FBNuxTooltipWithButtonsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                           //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UIButton * primaryButton;                                             //@synthesize primaryButton=_primaryButton - In the implementation block
@property (nonatomic,retain) UIButton * secondaryButton;                                           //@synthesize secondaryButton=_secondaryButton - In the implementation block
@property (nonatomic,retain) UIView * buttonsHorizontalLineView;                                   //@synthesize buttonsHorizontalLineView=_buttonsHorizontalLineView - In the implementation block
@property (nonatomic,retain) UIView * buttonsVerticalLineView;                                     //@synthesize buttonsVerticalLineView=_buttonsVerticalLineView - In the implementation block
@property (nonatomic,retain) FBNuxTooltipWithButtons * toolTip;                                    //@synthesize toolTip=_toolTip - In the implementation block
-(UIButton *)secondaryButton;
-(void)setSecondaryButton:(UIButton *)arg1 ;
-(UIButton *)primaryButton;
-(void)didTapPrimaryButton:(id)arg1 ;
-(void)didTapSecondaryButton:(id)arg1 ;
-(void)setPrimaryButton:(UIButton *)arg1 ;
-(void)toolTipDidChange;
-(void)_unobserveToolTip;
-(void)_observeToolTip;
-(UIView *)buttonsHorizontalLineView;
-(void)setButtonsHorizontalLineView:(UIView *)arg1 ;
-(UIView *)buttonsVerticalLineView;
-(void)setButtonsVerticalLineView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBNuxTooltipWithButtonsViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBNuxTooltipWithButtonsViewDelegate>)delegate;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(void)setToolTip:(FBNuxTooltipWithButtons *)arg1 ;
-(FBNuxTooltipWithButtons *)toolTip;
@end
