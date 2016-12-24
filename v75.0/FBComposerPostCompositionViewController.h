/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/CKComponentHostingViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Facebook/FBComposerCompositionStateChangedListener.h>

@protocol FBComposerPostCompositionListener, FBComposerUpdateHandler;
@class UIView, FBComposerPostCompositionNavigationBar, UIScrollView, CKComponentHostingView, FBComposerPostCompositionSheet, FBComposerPostCompositionComponentToolbox, FBComposerPostCompositionTransitionManager, FBUserSession, NSString;

@interface FBComposerPostCompositionViewController : UIViewController <CKComponentHostingViewDelegate, UIScrollViewDelegate, FBComposerCompositionStateChangedListener> {

	BOOL _allowScrollToDismiss;
	UIView* _background;
	PostCompositionContents* _contents;
	FBComposerPostCompositionNavigationBar* _currentNavigationBarModel;
	BOOL _isPullingUp;
	double _lastScrollViewOffset;
	UIScrollView* _listContainer;
	id<FBComposerPostCompositionListener> _listener;
	CKComponentHostingView* _postCompositionView;
	FBComposerPostCompositionSheet* _queuedPostCompositionSheet;
	FBComposerPostCompositionComponentToolbox* _toolbox;
	FBComposerPostCompositionTransitionManager* _transitionManager;
	id<FBComposerUpdateHandler> _updateHandler;
	FBUserSession* _userSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(void)composerCompositionStateChangedFromPreviousCompositionState:(id)arg1 toCurrentCompositionState:(id)arg2 ;
-(id)initWithUserSession:(id)arg1 updateHandler:(id)arg2 listener:(id)arg3 ;
-(void)_updateNavigationBarWithModel:(id)arg1 ;
-(void)_setFramesForSubviews;
-(void)tappedBackButton;
-(void)_didTapBackgroundViewWithTapGestureRecognizer:(id)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

