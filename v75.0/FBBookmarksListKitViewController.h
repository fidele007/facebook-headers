/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBAccessibilityInvalidationEventsListener.h>
#import <Facebook/FBBookmarksAddFavoritesViewControllerDelegate.h>
#import <Facebook/FBBookmarksListKitScrollListenerAnnouncer.h>
#import <Facebook/FBBookmarksNavigationHandlerDelegate.h>
#import <Facebook/FBBookmarksActionSheetControllerDelegate.h>
#import <Facebook/FBBookmarksListKitTapHandler.h>

@class FBListViewController, FBUserSession, FBBookmarksNavigationHandler, NSString;

@interface FBBookmarksListKitViewController : UIViewController <FBAccessibilityInvalidationEventsListener, FBBookmarksAddFavoritesViewControllerDelegate, FBBookmarksListKitScrollListenerAnnouncer, FBBookmarksNavigationHandlerDelegate, FBBookmarksActionSheetControllerDelegate, FBBookmarksListKitTapHandler> {

	FBListViewController* _listViewController;
	FBUserSession* _session;
	FBBookmarksNavigationHandler* _navigationHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)addComponentScrollEventListener:(id)arg1 ;
-(void)didReceiveAccessibilityInvalidation;
-(BOOL)fb_enableChatBarButton;
-(void)didNavigateToBookmark:(id)arg1 indexPath:(id)arg2 navigationHandler:(id)arg3 ;
-(void)handleHardcodedBookmark:(id)arg1 atIndexPath:(id)arg2 tappedView:(id)arg3 ;
-(void)removeComponentScrollEventListener:(id)arg1 ;
-(void)didTapBookmarkComponent:(id)arg1 withBookmark:(id)arg2 inSection:(id)arg3 atIndexPath:(id)arg4 ;
-(void)openAddFavoritesViewController;
-(void)deleteFavoriteBookmark:(id)arg1 inSection:(id)arg2 ;
-(void)addFavoritesViewController:(id)arg1 addedNewFavorites:(id)arg2 optimistically:(BOOL)arg3 ;
-(void)_postNotificationForBookmark:(id)arg1 ;
-(void)bookmarksActionSheetController:(id)arg1 tappedBookmark:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

