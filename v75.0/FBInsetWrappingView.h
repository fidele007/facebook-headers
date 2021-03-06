/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface FBInsetWrappingView : UIView {

	UIView* _wrappedView;
	UIView* _touchForwardingView;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,retain) UIView * wrappedView;                      //@synthesize wrappedView=_wrappedView - In the implementation block
@property (nonatomic,retain) UIView * touchForwardingView;              //@synthesize touchForwardingView=_touchForwardingView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                //@synthesize contentInsets=_contentInsets - In the implementation block
-(UIView *)touchForwardingView;
-(void)setTouchForwardingView:(UIView *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(UIView *)wrappedView;
-(void)setWrappedView:(UIView *)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
@end

