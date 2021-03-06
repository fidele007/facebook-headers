/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponentController.h>
#import <Facebook/FBDirectionalPanGestureRecognizerDelegate.h>
#import <Facebook/CAAnimationDelegate.h>

@protocol FBDrawerCellDelegate;
@class FBDirectionalPanGestureRecognizer, UITapGestureRecognizer, NSString;

@interface FBDrawerCellComponentController : CKComponentController <FBDirectionalPanGestureRecognizerDelegate, CAAnimationDelegate> {

	CGPoint _initialDrawerCellCenter;
	CGPoint _initialDrawerItemCenter;
	CGPoint _previousTranslation;
	unsigned long long _drawerState;
	BOOL _delegateShouldPeekDrawer;
	BOOL _delegateShouldBounceForTapWhenClosed;
	BOOL _delegateShouldShowNUXAnimation;
	BOOL _delegateDidFinishNUXAnimation;
	unsigned long long _drawerCellPeekState;
	BOOL _didAnimateInitialContentPeek;
	FBDirectionalPanGestureRecognizer* _panRecognizer;
	UITapGestureRecognizer* _tapRecognizer;
	id<FBDrawerCellDelegate> _drawerCellDelegate;

}

@property (nonatomic,readonly) FBDirectionalPanGestureRecognizer * panRecognizer;              //@synthesize panRecognizer=_panRecognizer - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * tapRecognizer;                         //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<FBDrawerCellDelegate> drawerCellDelegate;               //@synthesize drawerCellDelegate=_drawerCellDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long drawerState;                                   //@synthesize drawerState=_drawerState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didMount;
-(void)willUnmount;
-(void)didUpdateComponent;
-(void)componentTreeWillAppear;
-(id)initWithComponent:(id)arg1 ;
-(id<FBDrawerCellDelegate>)drawerCellDelegate;
-(void)setDrawerCellDelegate:(id<FBDrawerCellDelegate>)arg1 ;
-(void)userDidPan:(id)arg1 ;
-(void)userDidTap:(id)arg1 ;
-(void)_peekDrawerForComponentAppearanceIfNecessary;
-(void)_applyNUXAnimation_DEPRECATED;
-(void)_resetDrawerState;
-(void)_updateAccessibilityElementForDrawerState:(unsigned long long)arg1 ;
-(void)_updatePanRecognizerAllowedDirection:(unsigned long long)arg1 ;
-(void)_updateDrawerItemPositionForDrawerTranslationFromCenter:(CGPoint)arg1 toCenter:(CGPoint)arg2 animated:(BOOL)arg3 animationVelocity:(CGPoint)arg4 animationBeginTime:(double)arg5 animationSpringBounciness:(double)arg6 animationKey:(id)arg7 ;
-(void)_updateDrawerState:(unsigned long long)arg1 ;
-(BOOL)_shouldPeekDrawer;
-(BOOL)_shouldAllowDrawerBounce;
-(BOOL)_shouldBounceForTapWhenClosed;
-(void)_peekContentAnimated:(BOOL)arg1 ;
-(CGPoint)_drawerCenterOffsetForPeek;
-(double)_percentProgressOfSwipeToLeftActionForDrawerCenter:(CGPoint)arg1 drawerWidth:(double)arg2 ;
-(CGPoint)_relativeDrawerItemCenterForDrawerCenter:(CGPoint)arg1 drawerItemView:(id)arg2 drawerItemIndex:(unsigned long long)arg3 drawerItemsCount:(unsigned long long)arg4 drawerWidth:(double)arg5 canPerformSwipeToLeftAction:(BOOL)arg6 ;
-(double)_targetOffsetFromOffset:(double)arg1 withVelocity:(double)arg2 ;
-(void)_applyAnimationForDrawerFullyOpenAndFadeWithVelocity:(CGPoint)arg1 ;
-(void)_applyAnimationForDrawerOpen:(BOOL)arg1 withVelocity:(CGPoint)arg2 ;
-(void)_updateDrawerItemPositionForDrawerTranslationForCenter:(CGPoint)arg1 ;
-(void)_applyBounceAnimation;
-(unsigned long long)drawerState;
-(void)setDrawerState:(unsigned long long)arg1 ;
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(UITapGestureRecognizer *)tapRecognizer;
-(FBDirectionalPanGestureRecognizer *)panRecognizer;
@end

