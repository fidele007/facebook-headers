/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAnimatedTransition.h>

@class NSMapTable;

@interface FBAnimatedFadeTransition : FBAnimatedTransition {

	NSMapTable* _transitionContextToAnimationGroupMap;
	unsigned long long _navigationDirection;

}
-(void)presentWithTransitionContext:(id)arg1 animated:(BOOL)arg2 ;
-(/*^block*/id)_completionBlockForPresentationAnimationWithTransitionType:(unsigned long long)arg1 transitionContext:(id)arg2 ;
-(void)dismissWithTransitionContext:(id)arg1 animated:(BOOL)arg2 ;
-(void)cancelWithTransitionContext:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithFadeDirection:(unsigned long long)arg1 ;
-(BOOL)allowsInteraction;
-(id)interactiveGestureRecognizer;
@end

