/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UITextView.h>

@class NSString, UILabel, UIColor;

@interface FBGrowingTextView : UITextView {

	NSString* _textInputContextIdentifier;
	BOOL _shouldHideCaret;
	BOOL _placeholderShouldHideWhenEditing;
	unsigned long long _maximumNumberOfLines;
	UILabel* _placeholderLabel;
	UIEdgeInsets _hitTestSlop;

}

@property (assign,nonatomic) UIEdgeInsets hitTestSlop;                             //@synthesize hitTestSlop=_hitTestSlop - In the implementation block
@property (assign,nonatomic) BOOL shouldHideCaret;                                 //@synthesize shouldHideCaret=_shouldHideCaret - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfLines;              //@synthesize maximumNumberOfLines=_maximumNumberOfLines - In the implementation block
@property (nonatomic,copy) NSString * placeholderText; 
@property (assign,nonatomic) BOOL placeholderShouldHideWhenEditing;                //@synthesize placeholderShouldHideWhenEditing=_placeholderShouldHideWhenEditing - In the implementation block
@property (nonatomic,readonly) UILabel * placeholderLabel;                         //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (nonatomic,retain) UIColor * placeholderTextColor; 
+(double)requiredHeightForLayoutManager:(id)arg1 maximumNumberOfLines:(unsigned long long)arg2 fallbackHeight:(double)arg3 ;
-(id)initWithFrame:(CGRect)arg1 textInputContextIdentifier:(id)arg2 ;
-(void)setHitTestSlop:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)hitTestSlop;
-(void)setShouldHideCaret:(BOOL)arg1 ;
-(BOOL)shouldHideCaret;
-(void)setPlaceholderShouldHideWhenEditing:(BOOL)arg1 ;
-(BOOL)placeholderShouldHideWhenEditing;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 textInputContextIdentifier:(id)arg3 ;
-(void)_handleTextDidChangeNotification:(id)arg1 ;
-(void)_updatePlaceholderHiddenState;
-(BOOL)_isAboveMaximumHeightThreshold;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setAttributedText:(id)arg1 ;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)setFont:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(void)setMaximumNumberOfLines:(unsigned long long)arg1 ;
-(id)accessibilityLabel;
-(void)setContentOffset:(CGPoint)arg1 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(id)textInputContextIdentifier;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(unsigned long long)maximumNumberOfLines;
-(UILabel *)placeholderLabel;
-(void)setPlaceholderTextColor:(UIColor *)arg1 ;
-(UIColor *)placeholderTextColor;
-(NSString *)placeholderText;
-(void)setPlaceholderText:(NSString *)arg1 ;
@end
