/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/SRFragmentCell.h>

@class UIButton;

@interface FBMLSuggestionFooterCell : SRFragmentCell {

	BOOL _showSecondaryActionButton;
	UIButton* _primaryActionButton;
	UIButton* _secondaryActionButton;

}

@property (nonatomic,readonly) UIButton * primaryActionButton;                //@synthesize primaryActionButton=_primaryActionButton - In the implementation block
@property (nonatomic,readonly) UIButton * secondaryActionButton;              //@synthesize secondaryActionButton=_secondaryActionButton - In the implementation block
@property (assign,nonatomic) BOOL showSecondaryActionButton;                  //@synthesize showSecondaryActionButton=_showSecondaryActionButton - In the implementation block
-(void)_didTouchDown:(id)arg1 ;
-(void)_didTouchUp:(id)arg1 ;
-(void)setshowSecondaryActionButton:(BOOL)arg1 ;
-(UIButton *)primaryActionButton;
-(BOOL)showSecondaryActionButton;
-(void)setShowSecondaryActionButton:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(UIButton *)secondaryActionButton;
@end

