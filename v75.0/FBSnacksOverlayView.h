/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol FBSnacksOverlayViewDelegate;
@class FBGradientView, UISwipeGestureRecognizer, UILongPressGestureRecognizer, FBTimer, FBSnacksFooterView, NSString;

@interface FBSnacksOverlayView : UIView <UIGestureRecognizerDelegate> {

	FBGradientView* _bottomGradientView;
	BOOL _gesturesEnabled;
	BOOL _lightWeightReactionsEnabled;
	UISwipeGestureRecognizer* _swipeUpGesture;
	UILongPressGestureRecognizer* _pressGesture;
	CGPoint _pressStartLocation;
	BOOL _pressGesturePending;
	FBTimer* _pressTimer;
	FBSnacksFooterView* _footerView;
	id<FBSnacksOverlayViewDelegate> _delegate;

}

@property (nonatomic,readonly) FBSnacksFooterView * footerView;                            //@synthesize footerView=_footerView - In the implementation block
@property (assign,nonatomic,__weak) id<FBSnacksOverlayViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleSwipeUpGesture:(id)arg1 ;
-(void)_handlePressGesture:(id)arg1 ;
-(void)_handlePressGestureBegan:(id)arg1 ;
-(void)_handlePressGestureEnded:(id)arg1 ;
-(void)_pressGestureTimedOut;
-(BOOL)_pressGestureQualifiesAsTap:(CGPoint)arg1 ;
-(BOOL)_pressGestureIsLeftTap:(id)arg1 ;
-(id)initWithGesturesEnabled:(BOOL)arg1 ;
-(void)setDelegate:(id<FBSnacksOverlayViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<FBSnacksOverlayViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(FBSnacksFooterView *)footerView;
-(void)setFooterViewHidden:(BOOL)arg1 ;
@end

