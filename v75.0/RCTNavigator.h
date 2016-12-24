/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/RCTWrapperViewControllerNavigationListener.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Facebook/RCTFrameUpdateObserver.h>

@class RCTBridge, UIView, NSArray, RCTNavigationController, NSTimer, NSString;

@interface RCTNavigator : UIView <RCTWrapperViewControllerNavigationListener, UINavigationControllerDelegate, UIGestureRecognizerDelegate, RCTFrameUpdateObserver> {

	RCTBridge* _bridge;
	long long _numberOfViewControllerMovesToIgnore;
	BOOL _paused;
	BOOL _interactivePopGestureEnabled;
	/*^block*/id _pauseCallback;
	UIView* _reactNavSuperviewLink;
	long long _requestedTopOfStack;
	/*^block*/id _onNavigationProgress;
	/*^block*/id _onNavigationComplete;
	long long _previousRequestedTopOfStack;
	unsigned long long _popGestureState;
	NSArray* _previousViews;
	RCTNavigationController* _navigationController;
	double _mostRecentProgress;
	NSTimer* _runTimer;
	long long _currentlyTransitioningFrom;
	long long _currentlyTransitioningTo;
	UIView* _dummyView;

}

@property (nonatomic,copy) id onNavigationProgress;                                       //@synthesize onNavigationProgress=_onNavigationProgress - In the implementation block
@property (nonatomic,copy) id onNavigationComplete;                                       //@synthesize onNavigationComplete=_onNavigationComplete - In the implementation block
@property (assign,nonatomic) long long previousRequestedTopOfStack;                       //@synthesize previousRequestedTopOfStack=_previousRequestedTopOfStack - In the implementation block
@property (assign,nonatomic) unsigned long long popGestureState;                          //@synthesize popGestureState=_popGestureState - In the implementation block
@property (nonatomic,copy) NSArray * previousViews;                                       //@synthesize previousViews=_previousViews - In the implementation block
@property (nonatomic,retain) RCTNavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,readonly) double mostRecentProgress;                                 //@synthesize mostRecentProgress=_mostRecentProgress - In the implementation block
@property (nonatomic,readonly) NSTimer * runTimer;                                        //@synthesize runTimer=_runTimer - In the implementation block
@property (nonatomic,readonly) long long currentlyTransitioningFrom;                      //@synthesize currentlyTransitioningFrom=_currentlyTransitioningFrom - In the implementation block
@property (nonatomic,readonly) long long currentlyTransitioningTo;                        //@synthesize currentlyTransitioningTo=_currentlyTransitioningTo - In the implementation block
@property (nonatomic,readonly) UIView * dummyView;                                        //@synthesize dummyView=_dummyView - In the implementation block
@property (nonatomic,retain) UIView * reactNavSuperviewLink;                              //@synthesize reactNavSuperviewLink=_reactNavSuperviewLink - In the implementation block
@property (assign,nonatomic) long long requestedTopOfStack;                               //@synthesize requestedTopOfStack=_requestedTopOfStack - In the implementation block
@property (assign,nonatomic) BOOL interactivePopGestureEnabled;                           //@synthesize interactivePopGestureEnabled=_interactivePopGestureEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isPaused,nonatomic,readonly) BOOL paused;                               //@synthesize paused=_paused - In the implementation block
@property (nonatomic,copy) id pauseCallback;                                              //@synthesize pauseCallback=_pauseCallback - In the implementation block
-(id)reactViewController;
-(UIView *)dummyView;
-(void)reactBridgeDidFinishTransaction;
-(id)initWithBridge:(id)arg1 ;
-(void)insertReactSubview:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeReactSubview:(id)arg1 ;
-(void)didUpdateReactSubviews;
-(id)reactSuperview;
-(void)didUpdateFrame:(id)arg1 ;
-(id)pauseCallback;
-(void)setPauseCallback:(id)arg1 ;
-(void)dispatchFakeScrollEvent;
-(void)freeLock;
-(unsigned long long)popGestureState;
-(UIView *)reactNavSuperviewLink;
-(void)handleTopOfStackChanged;
-(void)wrapperViewController:(id)arg1 didMoveToNavigationController:(id)arg2 ;
-(void)setInteractivePopGestureEnabled:(BOOL)arg1 ;
-(BOOL)requestSchedulingJavaScriptNavigation;
-(void)setReactNavSuperviewLink:(UIView *)arg1 ;
-(long long)requestedTopOfStack;
-(void)setRequestedTopOfStack:(long long)arg1 ;
-(BOOL)interactivePopGestureEnabled;
-(id)onNavigationProgress;
-(void)setOnNavigationProgress:(id)arg1 ;
-(id)onNavigationComplete;
-(void)setOnNavigationComplete:(id)arg1 ;
-(long long)previousRequestedTopOfStack;
-(void)setPreviousRequestedTopOfStack:(long long)arg1 ;
-(void)setPopGestureState:(unsigned long long)arg1 ;
-(NSArray *)previousViews;
-(void)setPreviousViews:(NSArray *)arg1 ;
-(double)mostRecentProgress;
-(NSTimer *)runTimer;
-(long long)currentlyTransitioningFrom;
-(long long)currentlyTransitioningTo;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(RCTNavigationController *)navigationController;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)setNavigationController:(RCTNavigationController *)arg1 ;
-(BOOL)isPaused;
@end

