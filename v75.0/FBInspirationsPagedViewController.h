/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Facebook/FBInspirationsPagedViewDelegate.h>

@class FBInspirationsPagedView, NSMutableArray, _InteractiveTransitionState, _AppearanceStateTracker, FBInspirationPageTransitionPerfLogger, NSArray, NSString;

@interface FBInspirationsPagedViewController : UIViewController <UIScrollViewDelegate, FBInspirationsPagedViewDelegate> {

	FBInspirationsPagedView* _pagedView;
	NSMutableArray* _childViewControllerMemoizers;
	_InteractiveTransitionState* _transitionState;
	_InteractiveTransitionState* _initialTransitionState;
	_AppearanceStateTracker* _appearanceStateTracker;
	LayoutGuides _laskKnownLayoutGuides;
	FBInspirationPageTransitionPerfLogger* _transitionPerfLogger;
	unsigned long long _initialPageIndex;
	BOOL _hasScrolledToInitialPageIndex;
	BOOL _transitionTriggeredPromamtically;
	NSArray* _childViewControllerFactories;

}

@property (nonatomic,copy) NSArray * childViewControllerFactories;              //@synthesize childViewControllerFactories=_childViewControllerFactories - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsPresentedViewController;
-(void)showPageAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(id)currentOrInitialVisiblePages;
-(void)setChildViewControllerFactories:(NSArray *)arg1 ;
-(void)showPageAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 payload:(id)arg3 ;
-(BOOL)inspirationsPagedView:(id)arg1 shouldBeginScrollingAtPoint:(CGPoint)arg2 withVelocity:(CGPoint)arg3 ;
-(id)_childrenForAppearanceTransitions;
-(void)_endInteractive:(BOOL)arg1 ;
-(void)_updateViewControllerHierarchy:(BOOL)arg1 ;
-(id)_visibleChildViewController;
-(void)_updateStatusBar:(unsigned long long)arg1 disappearingIndex:(unsigned long long)arg2 ;
-(void)_endInteractive;
-(NSArray *)childViewControllerFactories;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)addChildViewController:(id)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(BOOL)automaticallyAdjustsScrollViewInsets;
@end

