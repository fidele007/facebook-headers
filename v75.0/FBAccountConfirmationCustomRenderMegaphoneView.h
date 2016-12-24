/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBQPCustomRenderView.h>

@protocol FBAccountConfirmationMegaphoneViewDelegate;
@class FBUserSession, FBQPPromotion, UIView, UIBarButtonItem, UITapGestureRecognizer, UITextField, UILabel, FBRichTextView, CKComponentHostingView, UIButton, FBBezelView, UIActivityIndicatorView, NSString;

@interface FBAccountConfirmationCustomRenderMegaphoneView : UIView <FBQPCustomRenderView> {

	FBUserSession* _session;
	FBQPPromotion* _promotion;
	UIView* _inputAccessoryView;
	UIBarButtonItem* _inputAccessoryPrimaryButton;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIView* _codeInputFieldWrapper;
	UIView* _codeInputFieldTopLine;
	UIView* _codeInputFieldBottomLine;
	UITextField* _codeInputField;
	UILabel* _titleLabel;
	FBRichTextView* _subtitleTextView;
	UIView* _bottomLine;
	CKComponentHostingView* _primaryButtonHostingView;
	UIButton* _secondaryButton;
	FBBezelView* _bezelView;
	BOOL _loading;
	UIActivityIndicatorView* _primaryButtonActivityIndicator;
	id<FBAccountConfirmationMegaphoneViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBAccountConfirmationMegaphoneViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * code; 
+(CGSize)viewSizeWithPromotion:(id)arg1 frame:(CGRect)arg2 session:(id)arg3 ;
-(id)initWithPromotion:(id)arg1 frame:(CGRect)arg2 session:(id)arg3 ;
-(id)inputAccessoryPrimaryButton;
-(void)showConfirmedBezelView;
-(void)_didTapPrimaryButton;
-(void)_setUpTitleLabel;
-(void)_setUpSubtitleViewWithContactpoint:(id)arg1 ;
-(void)_setUpCodeInputFieldWithContactpointType:(int)arg1 ;
-(void)_setUpPrimaryButton;
-(void)_setUpSecondaryButton;
-(void)_setUpBottomLine;
-(void)_setUpActivityIndicator;
-(void)_setUpBezelView;
-(id)_subtitleTextWithContactpoint:(id)arg1 ;
-(void)_didTapSecondaryButton;
-(double)_layoutTitleWithSize:(CGSize)arg1 ;
-(double)_layoutSubtitleFrom:(double)arg1 withSize:(CGSize)arg2 ;
-(double)_layoutCodeInputFieldFrom:(double)arg1 withSize:(CGSize)arg2 ;
-(double)_layoutPrimaryButtonFrom:(double)arg1 withSize:(CGSize)arg2 ;
-(double)_layoutSecondaryButtonFrom:(double)arg1 withSize:(CGSize)arg2 ;
-(void)_setUpUIViewWithFrame:(CGRect)arg1 ;
-(CGSize)_layoutSubviewsWithSize:(CGSize)arg1 ;
-(void)setDelegate:(id<FBAccountConfirmationMegaphoneViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBAccountConfirmationMegaphoneViewDelegate>)delegate;
-(NSString *)code;
-(UIEdgeInsets)_contentInsets;
-(id)inputAccessoryView;
-(void)setLoading:(BOOL)arg1 ;
@end

