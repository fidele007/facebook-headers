/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIKeyInput.h>
#import <UIKit/UITextInputTraits.h>

@protocol UITextFieldDelegate;
@class NSMutableString, UITapGestureRecognizer, NSArray, NSString;

@interface FBDBLPinField : UIControl <UIKeyInput, UITextInputTraits> {

	NSMutableString* _textContent;
	UITapGestureRecognizer* _recognizer;
	unsigned long long _pinLength;
	id<UITextFieldDelegate> _delegate;
	NSArray* _displayFields;

}

@property (nonatomic,copy,readonly) NSArray * displayFields;                             //@synthesize displayFields=_displayFields - In the implementation block
@property (nonatomic,readonly) unsigned long long pinLength;                             //@synthesize pinLength=_pinLength - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic,__weak) id<UITextFieldDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,readonly) BOOL hasText; 
-(id)_makePinDisplayField;
-(NSArray *)displayFields;
-(void)_updateDisplayFields;
-(void)_sendActionsOnNextRunLoopForControlEvents:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 pinLength:(unsigned long long)arg2 ;
-(void)setDelegate:(id<UITextFieldDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<UITextFieldDelegate>)delegate;
-(BOOL)becomeFirstResponder;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)hasText;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(BOOL)isSecureTextEntry;
-(void)setSecureTextEntry:(BOOL)arg1 ;
-(long long)keyboardType;
-(unsigned long long)pinLength;
@end

