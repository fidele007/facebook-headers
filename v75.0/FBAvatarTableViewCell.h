/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBTableViewWithSeparatorCell_DEPRECATED.h>
#import <Facebook/FBTextLabeling.h>

@class FBAvatarReusableView_DEPRECATED, UIView, UIButton, UIColor, NSString, FBAvatarProfilePictureView, NSAttributedString, FBRichTextView;

@interface FBAvatarTableViewCell : FBTableViewWithSeparatorCell_DEPRECATED <FBTextLabeling> {

	FBAvatarReusableView_DEPRECATED* _avatarReusableView;
	UIView* _lineView;
	BOOL _showSeparator;
	BOOL _preSelected;
	UIButton* _actionButton;

}

@property (nonatomic,retain) UIButton * actionButton;                                     //@synthesize actionButton=_actionButton - In the implementation block
@property (assign,nonatomic) BOOL multiSelectionEnabled; 
@property (nonatomic,retain) FBMemModelObject*<FBAvatarProtocol> avatar; 
@property (nonatomic,retain) CGColorRef normalTextColor; 
@property (nonatomic,retain) CGColorRef highlightedTextColor; 
@property (assign,nonatomic) BOOL boldSortedNameComponent; 
@property (assign,nonatomic) BOOL showSeparator;                                          //@synthesize showSeparator=_showSeparator - In the implementation block
@property (nonatomic,retain) UIColor * lineSeparatorColor; 
@property (assign,nonatomic) double fontSize; 
@property (assign,getter=isPreSelected,nonatomic) BOOL preSelected;                       //@synthesize preSelected=_preSelected - In the implementation block
@property (nonatomic,copy) NSString * actionButtonTitle; 
@property (assign,nonatomic) BOOL actionButtonEnabled; 
@property (nonatomic,readonly) FBAvatarProfilePictureView * avatarImageView; 
@property (nonatomic,copy) NSAttributedString * text; 
@property (nonatomic,readonly) FBRichTextView * attributedLabel; 
@property (assign,nonatomic) long long verticalTextAlignment; 
@property (nonatomic,readonly) CGRect textLayoutFrame; 
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 session:(id)arg3 ;
-(void)_O_hoverBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_O_hoverEnded:(id)arg1 withEvent:(id)arg2 ;
-(FBRichTextView *)attributedLabel;
-(void)setVerticalTextAlignment:(long long)arg1 ;
-(CGRect)textLayoutFrame;
-(UIEdgeInsets)textPadding;
-(BOOL)actionButtonEnabled;
-(void)setNormalTextColor:(CGColorRef)arg1 ;
-(void)setActionButtonEnabled:(BOOL)arg1 ;
-(void)setLineSeparatorColor:(UIColor *)arg1 ;
-(FBAvatarProfilePictureView *)avatarImageView;
-(void)setPreSelected:(BOOL)arg1 ;
-(long long)verticalTextAlignment;
-(void)refreshCell;
-(CGColorRef)normalTextColor;
-(BOOL)boldSortedNameComponent;
-(void)setBoldSortedNameComponent:(BOOL)arg1 ;
-(UIColor *)lineSeparatorColor;
-(id)nameAndImageReusableView;
-(BOOL)isPreSelected;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSAttributedString *)text;
-(void)setText:(NSAttributedString *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setHighlightedTextColor:(CGColorRef)arg1 ;
-(CGColorRef)highlightedTextColor;
-(void)setFontSize:(double)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(double)fontSize;
-(void)setShowSeparator:(BOOL)arg1 ;
-(BOOL)showSeparator;
-(UIButton *)actionButton;
-(void)setActionButtonTitle:(NSString *)arg1 ;
-(NSString *)actionButtonTitle;
-(void)setAvatar:(FBMemModelObject*<FBAvatarProtocol>)arg1 ;
-(FBMemModelObject*<FBAvatarProtocol>)avatar;
-(void)setActionButton:(UIButton *)arg1 ;
@end

