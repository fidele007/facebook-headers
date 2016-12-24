/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBAnimatedTransitionDelegate.h>

@protocol FBAnimatedTransitionRunnerDelegate;
@class NSMutableSet, NSString;

@interface FBAnimatedTransitionRunner : NSObject <FBAnimatedTransitionDelegate> {

	NSMutableSet* _transitionsRunning;
	id<FBAnimatedTransitionRunnerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBAnimatedTransitionRunnerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animatedTransition:(id)arg1 willBeginWithTransitionType:(unsigned long long)arg2 transitionContext:(id)arg3 ;
-(void)animatedTransition:(id)arg1 willBeginInteractivelyWithTransitionType:(unsigned long long)arg2 transitionContext:(id)arg3 ;
-(void)animatedTransition:(id)arg1 didEndWithTransitionType:(unsigned long long)arg2 transitionContext:(id)arg3 completedSuccessfully:(BOOL)arg4 ;
-(id)transitionContextForTransitionType:(unsigned long long)arg1 ;
-(void)animatedTransition:(id)arg1 didEndInteractivelyWithTransitionType:(unsigned long long)arg2 transitionContext:(id)arg3 shouldCommit:(BOOL)arg4 ;
-(BOOL)animatedTransition:(id)arg1 shouldBeginForTransitionType:(unsigned long long)arg2 point:(CGPoint)arg3 ;
-(void)presentWithAnimatedTransition:(id)arg1 transitionContext:(id)arg2 animated:(BOOL)arg3 ;
-(void)dismissWithAnimatedTransition:(id)arg1 transitionContext:(id)arg2 animated:(BOOL)arg3 ;
-(void)cancelWithAnimatedTransition:(id)arg1 transitionContext:(id)arg2 animated:(BOOL)arg3 ;
-(void)setDelegate:(id<FBAnimatedTransitionRunnerDelegate>)arg1 ;
-(id)init;
-(id<FBAnimatedTransitionRunnerDelegate>)delegate;
@end
