/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBRequestUserInfoDialogViewDelegate;
@class FBRectangleWithRoundedCornerView, UIImageView, UIButton, FBNetworkImageView, UILabel, FBRoundedCornerView, FBRichTextView;

@interface FBRequestUserInfoDialogView : UIView {

	FBRectangleWithRoundedCornerView* _roundedCornerView;
	UIImageView* _iconView;
	UIButton* _closeButton;
	FBNetworkImageView* _profileImageView;
	UILabel* _titleLabel;
	UILabel* _msgLabel;
	FBRectangleWithRoundedCornerView* _roundedCornerButtonView;
	FBRoundedCornerView* _topLeftRoundedCorner;
	FBRoundedCornerView* _topRightRoundedCorner;
	UIButton* _continueButton;
	FBRichTextView* _msgTextView;
	id<FBRequestUserInfoDialogViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBRequestUserInfoDialogViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didTapCloseButton;
-(id)_permissionStringsFromPermissions:(id)arg1 ;
-(void)_didTapMsgTextView:(id)arg1 event:(id)arg2 ;
-(void)_onContinue;
-(id)initWithFrame:(CGRect)arg1 viewModel:(id)arg2 ;
-(void)setDelegate:(id<FBRequestUserInfoDialogViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBRequestUserInfoDialogViewDelegate>)delegate;
@end

