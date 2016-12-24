/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBComponentScrollEventListener.h>
#import <Facebook/FBViewControllerAppearanceLifecycleListener.h>
#import <Facebook/FBComponentTableViewDataSourceAnimationDelegate.h>
#import <Facebook/FBComponentTableViewDataSourceSelectionHandler.h>
#import <Facebook/FBComponentCollectionViewDataSourceSelectionHandler.h>
#import <Facebook/FBNotificationsDrawerComponentTransitionHandling.h>
#import <Facebook/FBNotificationsDrawerComponentNUXHandling_DEPRECATED.h>
#import <Facebook/FBListViewKitScrollEventListener.h>

@protocol FBNotificationsNotificationChangeProviding, FBNotificationsListChangesetWriting;
@class NSMutableArray, FBViewControllerAppearanceLifecycleListenerAnnouncer, FBUserSession, FBNotificationsComponentDataSourceWrapper, UICollectionView, NSString;

@interface FBNotificationsDrawerComponentActivityHandler : NSObject <FBComponentScrollEventListener, FBViewControllerAppearanceLifecycleListener, FBComponentTableViewDataSourceAnimationDelegate, FBComponentTableViewDataSourceSelectionHandler, FBComponentCollectionViewDataSourceSelectionHandler, FBNotificationsDrawerComponentTransitionHandling, FBNotificationsDrawerComponentNUXHandling_DEPRECATED, FBListViewKitScrollEventListener> {

	NSMutableArray* _currentlyOpenedComponentModels;
	FBViewControllerAppearanceLifecycleListenerAnnouncer* _lifecycleAnnouncer;
	FBUserSession* _session;
	FBNotificationsComponentDataSourceWrapper* _componentDataSource;
	UICollectionView* _collectionView;
	id<FBNotificationsNotificationChangeProviding> _notificationsListProvider;
	id<FBNotificationsListChangesetWriting> _changesetWriter;
	BOOL _isOnScreen;
	long long _inlineActionMaxSwipeNUXAnimations;
	BOOL _hasShownNUX;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewControllerViewDidAppear:(BOOL)arg1 ;
-(void)viewControllerViewDidDisappear:(BOOL)arg1 ;
-(id)initWithControllerLifecycleAnnouncer:(id)arg1 session:(id)arg2 ;
-(void)setUpWithComponentDataSource:(id)arg1 ;
-(void)scrollViewDidScrollWithState:(FBScrollViewState)arg1 ;
-(BOOL)dataSource:(id)arg1 shouldAnimateApplicationOfChangeset:(const Changeset*)arg2 ;
-(BOOL)dataSource:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(FBComponentTableViewDataSourceAnimationContext)dataSource:(id)arg1 rowAnimationContextForChangeset:(const Changeset*)arg2 ;
-(void)_closeCurrentlyOpenDrawers;
-(BOOL)_shouldHighlightRowAtIndexPath:(id)arg1 ;
-(void)_logDrawerClosedIfNecessaryForComponentModel:(id)arg1 ;
-(void)_reloadCellForComponentModel:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)dataSource:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)drawerCellDidTransitionToState:(unsigned long long)arg1 forComponentModel:(id)arg2 ;
-(BOOL)shouldShowNUXForNotification:(id)arg1 ;
-(void)didShowNUXAnimation;
-(void)setUpWithCollectionView:(id)arg1 notificationsListProvider:(id)arg2 changesetWriter:(id)arg3 ;
-(id)currentlyOpenedComponentModels;
-(void)dealloc;
-(void)scrollViewDidScroll:(FBScrollViewState)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
@end

