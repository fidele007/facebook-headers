/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIControl.h>
#import <Facebook/FBAccessibilityInvalidationEventsListener.h>

@class UIButton, UILabel, UIImageView, NSString, UIImage;

@interface FBPillView : UIControl <FBAccessibilityInvalidationEventsListener> {

	UIButton* _pillButton;
	UILabel* _textLabel;
	UIImageView* _leftImageView;
	unsigned long long _arrowDirection;
	NSString* _displayMessage;
	double _pillCenterY;
	UIEdgeInsets _leftAccessoryMargins;
	UIEdgeInsets _pillMargins;

}

@property (assign,nonatomic) unsigned long long arrowDirection;              //@synthesize arrowDirection=_arrowDirection - In the implementation block
@property (nonatomic,copy) NSString * displayMessage;                        //@synthesize displayMessage=_displayMessage - In the implementation block
@property (nonatomic,retain) UIImage * leftAccessoryImage; 
@property (assign,nonatomic) UIEdgeInsets leftAccessoryMargins;              //@synthesize leftAccessoryMargins=_leftAccessoryMargins - In the implementation block
@property (nonatomic,readonly) UIButton * pillButton;                        //@synthesize pillButton=_pillButton - In the implementation block
@property (assign,nonatomic) UIEdgeInsets pillMargins;                       //@synthesize pillMargins=_pillMargins - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                          //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic) double pillCenterY;                             //@synthesize pillCenterY=_pillCenterY - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)shadowHeight;
-(UIButton *)pillButton;
-(void)didReceiveAccessibilityInvalidation;
-(id)initWithFrame:(CGRect)arg1 pillImage:(id)arg2 pillHighlightedImage:(id)arg3 ;
-(void)setLeftAccessoryImage:(UIImage *)arg1 ;
-(void)setPillMargins:(UIEdgeInsets)arg1 ;
-(void)setPillCenterY:(double)arg1 ;
-(UIImage *)leftAccessoryImage;
-(UIEdgeInsets)leftAccessoryMargins;
-(void)setLeftAccessoryMargins:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)pillMargins;
-(double)pillCenterY;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UILabel *)textLabel;
-(void)_updateState;
-(unsigned long long)arrowDirection;
-(void)setArrowDirection:(unsigned long long)arg1 ;
-(NSString *)displayMessage;
-(void)setDisplayMessage:(NSString *)arg1 ;
@end

