/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBAuthenticationEnterPasscodeKeyboardViewDelegate.h>

@protocol FBDBLViewConfiguring, FBDBLPinViewDelegate;
@class FBAuthenticationEnterPasscodeKeyboardView, NSArray, NSMutableString, UIView, UILabel, NSString;

@interface FBDBLPinView : UIView <FBAuthenticationEnterPasscodeKeyboardViewDelegate> {

	id<FBDBLViewConfiguring> _configuration;
	BOOL _keyboardEnabled;
	FBAuthenticationEnterPasscodeKeyboardView* _keyboardView;
	NSArray* _pinIndicators;
	NSMutableString* _enteredPin;
	UIView* _userImage;
	UILabel* _messageLabel;
	UIView* _pinIndicatorContainer;
	unsigned long long _passcodeLength;
	id<FBDBLPinViewDelegate> _delegate;
	UIEdgeInsets _minimumEdgeInsets;

}

@property (nonatomic,readonly) UIView * userImage;                                  //@synthesize userImage=_userImage - In the implementation block
@property (nonatomic,readonly) UILabel * messageLabel;                              //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,readonly) UIView * pinIndicatorContainer;                      //@synthesize pinIndicatorContainer=_pinIndicatorContainer - In the implementation block
@property (nonatomic,readonly) UIView * keyboard; 
@property (nonatomic,readonly) unsigned long long passcodeLength;                   //@synthesize passcodeLength=_passcodeLength - In the implementation block
@property (assign,nonatomic) UIEdgeInsets minimumEdgeInsets;                        //@synthesize minimumEdgeInsets=_minimumEdgeInsets - In the implementation block
@property (nonatomic,copy,readonly) NSString * pinInputText; 
@property (assign,nonatomic) BOOL keyboardEnabled; 
@property (assign,nonatomic,__weak) id<FBDBLPinViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)userImage;
-(UIView *)pinIndicatorContainer;
-(id)_newPinIndicatorWithLength:(unsigned long long)arg1 configuration:(id)arg2 ;
-(id)_makeMessageLabel;
-(void)_processInputChanged;
-(void)authenticationEnterPasscodeKeyboardView:(id)arg1 didTapNumber:(id)arg2 ;
-(void)authenticationEnterPasscodeKeyboardView:(id)arg1 didTapCancelButton:(id)arg2 ;
-(void)authenticationEnterPasscodeKeyboardView:(id)arg1 didTapDeleteButton:(id)arg2 ;
-(id)initWithUserImage:(id)arg1 message:(id)arg2 passcodeLength:(unsigned long long)arg3 configuration:(id)arg4 ;
-(BOOL)keyboardEnabled;
-(void)setKeyboardEnabled:(BOOL)arg1 ;
-(NSString *)pinInputText;
-(void)setMinimumEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)clearPinInput;
-(UIEdgeInsets)minimumEdgeInsets;
-(void)setDelegate:(id<FBDBLPinViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBDBLPinViewDelegate>)delegate;
-(UILabel *)messageLabel;
-(UIView *)keyboard;
-(unsigned long long)passcodeLength;
@end
