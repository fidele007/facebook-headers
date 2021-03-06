/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIButton.h>

@protocol FBCancelable;
@class POPSpringAnimation;

@interface FBBouncyButton : UIButton {

	CGSize _sizeWhenNotAnimated;
	double _downTime;
	BOOL _selected;
	BOOL _bounces;
	BOOL _bounceOnlyShrinks;
	BOOL _bounceDragEvents;
	BOOL _highlighted;
	BOOL _useDelayedUnhighlight;
	double _touchesBeganTimestamp;
	double _touchDuration;
	id<FBCancelable> _cancellableDisableHighlightOperation;
	POPSpringAnimation* _bounceAnimation;
	double _bounciness;

}

@property (assign,nonatomic) BOOL bounceOnlyShrinks;                       //@synthesize bounceOnlyShrinks=_bounceOnlyShrinks - In the implementation block
@property (assign,nonatomic) BOOL bounceDragEvents;                        //@synthesize bounceDragEvents=_bounceDragEvents - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,nonatomic) double bounciness;                            //@synthesize bounciness=_bounciness - In the implementation block
@property (nonatomic,readonly) CGSize sizeWhenNotAnimated;                 //@synthesize sizeWhenNotAnimated=_sizeWhenNotAnimated - In the implementation block
-(void)pop_animationDidApply:(id)arg1 ;
-(void)setBounceOnlyShrinks:(BOOL)arg1 ;
-(void)setBounciness:(double)arg1 ;
-(void)setBounceDragEvents:(BOOL)arg1 ;
-(double)bounciness;
-(void)_disableHighlightAfterDelay:(double)arg1 ;
-(void)_disableHighlight;
-(void)_setupDelayedDisableHighlight;
-(void)_bounceUp:(BOOL)arg1 ;
-(BOOL)bounceOnlyShrinks;
-(BOOL)bounceDragEvents;
-(CGSize)sizeWhenNotAnimated;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)touchUp:(id)arg1 ;
-(void)touchDown:(id)arg1 ;
-(void)touchCancelled:(id)arg1 ;
@end

