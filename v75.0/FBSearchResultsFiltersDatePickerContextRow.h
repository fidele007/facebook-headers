/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class NSLayoutConstraint, FBRichTextView, UIButton;

@interface FBSearchResultsFiltersDatePickerContextRow : UIView {

	NSLayoutConstraint* _accessoryButtonWidthConstraint;
	BOOL _highlighted;
	FBRichTextView* _titleLabel;
	UIButton* _accessoryButton;

}

@property (assign,nonatomic) BOOL highlighted;                           //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,readonly) FBRichTextView * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * accessoryButton;               //@synthesize accessoryButton=_accessoryButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(FBRichTextView *)titleLabel;
-(void)updateConstraints;
-(BOOL)highlighted;
-(UIButton *)accessoryButton;
@end

