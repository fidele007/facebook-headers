/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/RCTView.h>
#import <UIKit/UITextViewDelegate.h>

@class RCTEventDispatcher, NSString, UITextView, RCTText, NSAttributedString, UIScrollView, UITextRange, UIColor, NSNumber, UIFont;

@interface RCTTextView : RCTView <UITextViewDelegate> {

	RCTEventDispatcher* _eventDispatcher;
	NSString* _placeholder;
	UITextView* _placeholderView;
	UITextView* _textView;
	RCTText* _richTextView;
	NSAttributedString* _pendingAttributedText;
	UIScrollView* _scrollView;
	UITextRange* _previousSelectionRange;
	unsigned long long _previousTextLength;
	double _previousContentHeight;
	NSString* _predictedText;
	BOOL _blockTextShouldChange;
	BOOL _nativeUpdatesInFlight;
	long long _nativeEventCount;
	CGSize _previousContentSize;
	BOOL _viewDidCompleteInitialLayout;
	BOOL _blurOnSubmit;
	BOOL _clearTextOnFocus;
	BOOL _selectTextOnFocus;
	BOOL _automaticallyAdjustContentInsets;
	UIColor* _placeholderTextColor;
	long long _mostRecentEventCount;
	NSNumber* _maxLength;
	/*^block*/id _onChange;
	/*^block*/id _onContentSizeChange;
	/*^block*/id _onSelectionChange;
	/*^block*/id _onTextInput;
	/*^block*/id _onScroll;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) BOOL blurOnSubmit;                                  //@synthesize blurOnSubmit=_blurOnSubmit - In the implementation block
@property (assign,nonatomic) BOOL clearTextOnFocus;                              //@synthesize clearTextOnFocus=_clearTextOnFocus - In the implementation block
@property (assign,nonatomic) BOOL selectTextOnFocus;                             //@synthesize selectTextOnFocus=_selectTextOnFocus - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                          //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) BOOL automaticallyAdjustContentInsets;              //@synthesize automaticallyAdjustContentInsets=_automaticallyAdjustContentInsets - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIColor * placeholderTextColor;                     //@synthesize placeholderTextColor=_placeholderTextColor - In the implementation block
@property (nonatomic,retain) UIFont * font; 
@property (assign,nonatomic) long long mostRecentEventCount;                     //@synthesize mostRecentEventCount=_mostRecentEventCount - In the implementation block
@property (nonatomic,retain) NSNumber * maxLength;                               //@synthesize maxLength=_maxLength - In the implementation block
@property (nonatomic,copy) id onChange;                                          //@synthesize onChange=_onChange - In the implementation block
@property (nonatomic,copy) id onContentSizeChange;                               //@synthesize onContentSizeChange=_onContentSizeChange - In the implementation block
@property (nonatomic,copy) id onSelectionChange;                                 //@synthesize onSelectionChange=_onSelectionChange - In the implementation block
@property (nonatomic,copy) id onTextInput;                                       //@synthesize onTextInput=_onTextInput - In the implementation block
@property (nonatomic,copy) id onScroll;                                          //@synthesize onScroll=_onScroll - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)defaultPlaceholderTextColor;
-(void)insertReactSubview:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeReactSubview:(id)arg1 ;
-(void)didUpdateReactSubviews;
-(id)initWithEventDispatcher:(id)arg1 ;
-(void)reactWillMakeFirstResponder;
-(void)reactDidMakeFirstResponder;
-(BOOL)selectTextOnFocus;
-(void)setSelectTextOnFocus:(BOOL)arg1 ;
-(BOOL)blurOnSubmit;
-(void)setBlurOnSubmit:(BOOL)arg1 ;
-(long long)mostRecentEventCount;
-(void)setMostRecentEventCount:(long long)arg1 ;
-(id)onSelectionChange;
-(void)setOnSelectionChange:(id)arg1 ;
-(void)performTextUpdate;
-(void)performPendingTextUpdate;
-(id)defaultPlaceholderFont;
-(BOOL)clearTextOnFocus;
-(void)setClearTextOnFocus:(BOOL)arg1 ;
-(BOOL)automaticallyAdjustContentInsets;
-(void)setAutomaticallyAdjustContentInsets:(BOOL)arg1 ;
-(id)onChange;
-(void)setOnChange:(id)arg1 ;
-(id)onContentSizeChange;
-(void)setOnContentSizeChange:(id)arg1 ;
-(id)onTextInput;
-(void)setOnTextInput:(id)arg1 ;
-(id)onScroll;
-(void)setOnScroll:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(BOOL)resignFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)becomeFirstResponder;
-(UIEdgeInsets)contentInset;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIFont *)font;
-(void)setSelection:(id)arg1 ;
-(long long)autocorrectionType;
-(void)setAutocorrectionType:(long long)arg1 ;
-(long long)spellCheckingType;
-(void)setSpellCheckingType:(long long)arg1 ;
-(void)setPlaceholder:(id)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(void)setMaxLength:(NSNumber *)arg1 ;
-(void)setPlaceholderTextColor:(UIColor *)arg1 ;
-(UIColor *)placeholderTextColor;
-(void)updatePlaceholder;
-(NSNumber *)maxLength;
-(void)updateContentSize;
-(void)updateFrames;
-(void)updatePlaceholderVisibility;
@end

