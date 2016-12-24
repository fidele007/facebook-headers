/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol FBPageCTAGetQuoteSharedTextInputViewDelegate, FBPageCTAGetQuoteSharedTextInputViewResizeDelegate;
@class UILabel, UITextView, UIButton, UIView, NSString;

@interface FBPageCTAGetQuoteSharedTextInputView : UIView <UITextViewDelegate> {

	UILabel* _titleLabel;
	UITextView* _textView;
	UIButton* _deleteButton;
	UIView* _separatorView;
	CGRect _previousRect;
	id<FBPageCTAGetQuoteSharedTextInputViewDelegate> _delegate;
	id<FBPageCTAGetQuoteSharedTextInputViewResizeDelegate> _resizeDelegate;
	unsigned long long _maximumCharacterCount;
	UILabel* _maximumCharacterLabel;
	UILabel* _errorLabel;

}

@property (nonatomic,retain) UILabel * errorLabel;                        //@synthesize errorLabel=_errorLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * inputContent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)shouldHideDeleteButton:(BOOL)arg1 ;
-(void)configWithTitle:(id)arg1 ;
-(id)initWithTitle:(id)arg1 hint:(id)arg2 content:(id)arg3 showDeleteButton:(BOOL)arg4 delegate:(id)arg5 resizeDelegate:(id)arg6 maximumCharacterCount:(unsigned long long)arg7 ;
-(NSString *)inputContent;
-(void)_configDeleteButton;
-(void)_didTapDelegteButton;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(BOOL)textViewShouldEndEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)setErrorLabel:(UILabel *)arg1 ;
-(UILabel *)errorLabel;
-(void)showErrorAlert;
@end
