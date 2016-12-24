/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBShrinkableButtonDelegate;
@class FBButtonWithExtendedTapTarget, UIView, FBRichTextView;

@interface FBShrinkableButton : UIView {

	FBButtonWithExtendedTapTarget* _backgroundView;
	UIView* _normalIconView;
	UIView* _selectedIconView;
	UIView* _iconContainer;
	FBRichTextView* _normalLabel;
	FBRichTextView* _selectedLabel;
	BOOL _animating;
	long long _displayMode;
	BOOL _selected;
	id<FBShrinkableButtonDelegate> _delegate;

}

@property (assign,nonatomic) BOOL selected;                                               //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) long long currentDisplayMode; 
@property (assign,nonatomic,__weak) id<FBShrinkableButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)saveButtonWithDisplayMode:(long long)arg1 ;
-(void)_didPressButton;
-(void)_updateDisplayMode:(long long)arg1 ;
-(void)updateUIBasedOnSelectedState;
-(CGRect)_frameForDisplayMode:(long long)arg1 selectedState:(BOOL)arg2 ;
-(id)_easeForKey:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 ;
-(id)_shrinkButtonToRight:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 initialDisplayMode:(long long)arg2 ;
-(void)setIconView:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)transitionToDisplayMode:(long long)arg1 isBeingSelected:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)setTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setDelegate:(id<FBShrinkableButtonDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBShrinkableButtonDelegate>)delegate;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(long long)currentDisplayMode;
@end

