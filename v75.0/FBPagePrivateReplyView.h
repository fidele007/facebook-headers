/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBKeyboardObserverDelegate.h>

@class UIView, UILabel, NSLayoutConstraint, UIColor, FBKeyboardObserver, UIBarButtonItem, FBTextView, NSString;

@interface FBPagePrivateReplyView : UIView <FBKeyboardObserverDelegate> {

	UIView* _scrollContentView;
	UIView* _toWrapView;
	UIView* _snippetWrapView;
	UILabel* _toLabel;
	UILabel* _snippetLabel;
	UIView* _wrapView;
	UIView* _spacer1;
	UIView* _spacer2;
	UIView* _keyboardSpacer;
	NSLayoutConstraint* _keyboardSpacerConstraint;
	UIColor* _fontColor;
	FBKeyboardObserver* _keyboardObserver;
	UIBarButtonItem* _sendButton;
	FBTextView* _inputTextView;

}

@property (nonatomic,readonly) FBTextView * inputTextView;              //@synthesize inputTextView=_inputTextView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)_setupLayoutConstraints;
-(void)_animateBottomConstraintWithDuration:(double)arg1 constant:(double)arg2 ;
-(void)configureWithAuthor:(id)arg1 snippetText:(id)arg2 ;
-(FBTextView *)inputTextView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)_setupViews;
@end

