/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBAdPaymentsAnimatedDialogViewDelegate;
@class UIImageView, FBRichTextView, UIView, UIButton, FBAdPaymentsAnimatedDialogViewModel;

@interface FBAdPaymentsAnimatedDialogView : UIView {

	UIImageView* _headerImageView;
	FBRichTextView* _titleTextView;
	FBRichTextView* _messageTextView;
	UIView* _footerContainerView;
	UIButton* _footerPrimaryButton;
	UIButton* _footerSecondaryButton;
	UIView* _footerVerticalSeparator;
	UIView* _footerHorizontalSeparator;
	FBAdPaymentsAnimatedDialogViewModel* _viewModel;
	id<FBAdPaymentsAnimatedDialogViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBAdPaymentsAnimatedDialogViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)showDialogAnimated:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_didPrimaryButtonClicked:(id)arg1 ;
-(void)_didSecondaryButtonClicked:(id)arg1 ;
-(CGRect)_targetRectForView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBAdPaymentsAnimatedDialogViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBAdPaymentsAnimatedDialogViewDelegate>)delegate;
-(void)setViewModel:(id)arg1 ;
@end

