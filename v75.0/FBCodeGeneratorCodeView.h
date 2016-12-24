/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBCodeGeneratorCodeViewDelegate;
@class UITextView, FBCodeGeneratorProgressView, UIButton, UITapGestureRecognizer, UILabel;

@interface FBCodeGeneratorCodeView : UIView {

	UITextView* _codeView;
	FBCodeGeneratorProgressView* _progressIndicator;
	UIButton* _codesNotWorkingButton;
	UITapGestureRecognizer* _codeTapRecognizer;
	UILabel* _codeInstructionsLabel;
	id<FBCodeGeneratorCodeViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBCodeGeneratorCodeViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_tappedCode;
-(void)_tappedCodeNotWorking;
-(void)setCode:(id)arg1 countDownTime:(long long)arg2 countDownProgress:(double)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBCodeGeneratorCodeViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBCodeGeneratorCodeViewDelegate>)delegate;
@end

