/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, FBRichTextView, NSString, FBButton;

@interface FBPaymentsKitCardViewSectionFooterView : UIView {

	UIImageView* _iconView;
	FBRichTextView* _titleTextView;
	FBRichTextView* _errorDescriptionTextView;
	BOOL _displayLearnMoreLink;
	BOOL _displayErrorsOverTitle;
	NSString* _title;
	FBButton* _actionButton;

}

@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * errorDescription; 
@property (assign,nonatomic) BOOL displayLearnMoreLink; 
@property (assign,nonatomic) BOOL displayErrorsOverTitle;              //@synthesize displayErrorsOverTitle=_displayErrorsOverTitle - In the implementation block
@property (nonatomic,readonly) FBButton * actionButton;                //@synthesize actionButton=_actionButton - In the implementation block
-(void)setDisplayLearnMoreLink:(BOOL)arg1 ;
-(double)frameCalculationReturningHeightWithLayout:(BOOL)arg1 ;
-(CGSize)actionButtonSizeForConstrainingSize:(CGSize)arg1 ;
-(BOOL)displayErrorsOverTitle;
-(BOOL)displayLearnMoreLink;
-(void)addTargetForLinkTap:(id)arg1 action:(SEL)arg2 ;
-(void)removeTargetForLinkTap:(id)arg1 action:(SEL)arg2 ;
-(void)setDisplayErrorsOverTitle:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setAttributedTitle:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(id)attributedTitle;
-(FBButton *)actionButton;
-(void)setErrorDescription:(NSString *)arg1 ;
-(NSString *)errorDescription;
@end

