/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBReactionMultiActionViewDelegate;
@class NSArray, CALayer, UIFont, UIColor;

@interface FBReactionMultiActionView : UIView {

	NSArray* _buttons;
	NSArray* _separatorLayers;
	CALayer* _edgeLayer;
	UIFont* _buttonTitleFont;
	UIColor* _backgroundColor;
	BOOL _showsSeparators;
	double _separatorInset;
	double _height;
	double _cornerRadius;
	id<FBReactionMultiActionViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBReactionMultiActionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_configButtons:(id)arg1 ;
-(void)_configDecorations;
-(id)initWithActionTitles:(id)arg1 buttonTitleFont:(id)arg2 backgroundColor:(id)arg3 separators:(BOOL)arg4 separatorInset:(double)arg5 height:(double)arg6 cornerRadius:(double)arg7 ;
-(void)_didTapButton:(id)arg1 ;
-(id)initWithActionTitles:(id)arg1 cornerRadius:(double)arg2 ;
-(void)setDelegate:(id<FBReactionMultiActionViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBReactionMultiActionViewDelegate>)delegate;
@end

