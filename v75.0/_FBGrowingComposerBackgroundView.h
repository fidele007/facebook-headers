/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface _FBGrowingComposerBackgroundView : UIView {

	UIView* _backgroundView;
	UIView* _visibleBackgroundView;
	UIView* _dividerView;
	UIView* _highlightView;
	unsigned long long _style;
	unsigned long long _dividerStyle;
	UIEdgeInsets _layoutInsets;

}

@property (assign,nonatomic) BOOL dividerHidden; 
@property (assign,nonatomic) unsigned long long dividerStyle;              //@synthesize dividerStyle=_dividerStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets layoutInsets;                    //@synthesize layoutInsets=_layoutInsets - In the implementation block
-(void)setDividerStyle:(unsigned long long)arg1 ;
-(void)setLayoutInsets:(UIEdgeInsets)arg1 ;
-(unsigned long long)dividerStyle;
-(UIEdgeInsets)layoutInsets;
-(BOOL)dividerHidden;
-(void)setDividerHidden:(BOOL)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 style:(unsigned long long)arg2 ;
-(double)dividerHeight;
@end
