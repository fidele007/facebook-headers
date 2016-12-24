/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBSwipeToEditNUXDelegate;
@class UIImageView, UILabel, FBTimer;

@interface FBSwipeToEditNUX : UIView {

	UIImageView* _fingerView;
	UILabel* _dragLabel;
	FBTimer* _dragStartTimer;
	FBTimer* _dragStopTimer;
	BOOL _didDragBefore;
	BOOL _frameFocused;
	BOOL _isAnimating;
	id<FBSwipeToEditNUXDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBSwipeToEditNUXDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)startDragAnimation;
-(void)stopDragAnimationAndRemoveAnimations:(BOOL)arg1 manually:(BOOL)arg2 ;
-(void)_createDragAnimation;
-(void)_addMovementAnimationToView:(id)arg1 duration:(double)arg2 xDiff:(double)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBSwipeToEditNUXDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBSwipeToEditNUXDelegate>)delegate;
-(BOOL)isUserInteractionEnabled;
@end

