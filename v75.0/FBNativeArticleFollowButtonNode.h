/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/ASControlNode.h>
#import <Facebook/FBNativeArticleEngagementActionButton.h>

@class NSString, CALayer, CAGradientLayer, ASTextNode, FBNativeArticleFollowButtonIcon, FBNativeArticleEngagementActionButtonConfiguration;

@interface FBNativeArticleFollowButtonNode : ASControlNode <FBNativeArticleEngagementActionButton> {

	NSString* _text;
	NSString* _selectedText;
	UIEdgeInsets _textContentInsets;
	CGSize _selectedTextSize;
	CGSize _unselectedTextSize;
	CALayer* _coloredTextLayer;
	CALayer* _coloredIconLayer;
	CAGradientLayer* _fadedLayer;
	ASTextNode* _buttonTextNode;
	FBNativeArticleFollowButtonIcon* _buttonIconNode;
	FBNativeArticleEngagementActionButtonConfiguration* _configuration;
	BOOL _selected;
	double _animationProgress;

}

@property (assign,nonatomic) double animationProgress;                     //@synthesize animationProgress=_animationProgress - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
-(void)_staticInitialize;
-(id)buttonIcon;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(CGSize)buttonTextSize;
-(BOOL)_localeIsEnglish;
-(void)_setupButtonTextNode;
-(id)buttonTintColor;
-(void)_updateButtonColor:(id)arg1 ;
-(BOOL)_shouldUseFadeInAnimation;
-(void)updateButtonStateAnimated:(BOOL)arg1 ;
-(id)progressAnimation;
-(double)animationProgress;
-(void)setAnimationProgress:(double)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)layout;
-(id)initWithConfiguration:(id)arg1 ;
-(void)didLoad;
@end

