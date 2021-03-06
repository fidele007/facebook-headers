/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBRichTextView, NSAttributedString;

@interface FBAttributedTextReusableView_DEPRECATED : UIView {

	FBRichTextView* _attributedLabel;
	long long _verticalTextAlignment;
	UIEdgeInsets _textPadding;
	BOOL _opaqueTextBackground;
	BOOL _selected;
	BOOL _highlighted;
	BOOL _hasSubtitle;

}

@property (nonatomic,copy) NSAttributedString * text; 
@property (nonatomic,readonly) FBRichTextView * attributedLabel;                 //@synthesize attributedLabel=_attributedLabel - In the implementation block
@property (assign,nonatomic) long long verticalTextAlignment;                    //@synthesize verticalTextAlignment=_verticalTextAlignment - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textPadding;                           //@synthesize textPadding=_textPadding - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                    //@synthesize selected=_selected - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,getter=hasSubtitle,nonatomic) BOOL hasSubtitle;                //@synthesize hasSubtitle=_hasSubtitle - In the implementation block
-(FBRichTextView *)attributedLabel;
-(void)setVerticalTextAlignment:(long long)arg1 ;
-(UIEdgeInsets)textPadding;
-(void)layoutText;
-(void)_configureSelectedState;
-(void)_configureHighlightedState;
-(void)setTextPadding:(UIEdgeInsets)arg1 ;
-(long long)verticalTextAlignment;
-(void)setHasSubtitle:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSAttributedString *)text;
-(void)setText:(NSAttributedString *)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(BOOL)isSelected;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)hasSubtitle;
@end

