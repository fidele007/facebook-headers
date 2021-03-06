/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIScrollView.h>
#import <Facebook/FBKeyboardObserverDelegate.h>

@class FBUserSession, FBRichTextView, UIImageView, FBNetworkImageView, FBContactPoint, UIActivityIndicatorView, NSString, FBKeyboardObserver, FBPhoneInputView, UIButton;

@interface FBPhoneBouncingView : UIScrollView <FBKeyboardObserverDelegate> {

	FBUserSession* _session;
	FBRichTextView* _headerLabel;
	UIImageView* _separationLine;
	FBNetworkImageView* _imageView;
	FBContactPoint* _contactpoint;
	UIActivityIndicatorView* _activityIndicator;
	NSString* _loadingButtonText;
	FBKeyboardObserver* _keyboardObserver;
	FBPhoneInputView* _phoneInputView;
	UIButton* _updateNumberButton;
	UIButton* _confirmByEmailButton;
	UIButton* _myNumberButton;

}

@property (nonatomic,readonly) FBPhoneInputView * phoneInputView;              //@synthesize phoneInputView=_phoneInputView - In the implementation block
@property (nonatomic,readonly) UIButton * updateNumberButton;                  //@synthesize updateNumberButton=_updateNumberButton - In the implementation block
@property (nonatomic,readonly) UIButton * confirmByEmailButton;                //@synthesize confirmByEmailButton=_confirmByEmailButton - In the implementation block
@property (nonatomic,readonly) UIButton * myNumberButton;                      //@synthesize myNumberButton=_myNumberButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(FBPhoneInputView *)phoneInputView;
-(void)clearLoadingState;
-(void)_composeButtons;
-(void)_composeHeaderLabel;
-(id)_headerLabelText;
-(void)_composeImage;
-(void)_composeInputField;
-(id)initWithContactpoint:(id)arg1 withSession:(id)arg2 ;
-(void)setLoadingStateForButton:(id)arg1 ;
-(UIButton *)updateNumberButton;
-(UIButton *)confirmByEmailButton;
-(UIButton *)myNumberButton;
-(void)dealloc;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end

