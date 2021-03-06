/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBTableViewController.h>
#import <Facebook/FBProductsCollectionViewDelegate.h>
#import <Facebook/FBCommerceAdminProductEditDelegate.h>
#import <Facebook/FBCommerceAdminShopDescriptionDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class NSString, FBMemPage, FBUserSession, FBMemCommerceStore, FBCommerceAdminProductsCollectionViewController, FBCommerceAdminShopEditNetworker, FBCommerceAdminShopDescriptionTableViewCell, UITableViewCell, FBPopoverController;

@interface FBShopEditViewController : FBTableViewController <FBProductsCollectionViewDelegate, FBCommerceAdminProductEditDelegate, FBCommerceAdminShopDescriptionDelegate, UIAlertViewDelegate> {

	NSString* _pageID;
	FBMemPage* _page;
	FBUserSession* _session;
	FBMemCommerceStore* _store;
	FBCommerceAdminProductsCollectionViewController* _productsCollectionViewController;
	FBCommerceAdminShopEditNetworker* _networker;
	FBCommerceAdminShopDescriptionTableViewCell* _editDescriptionCell;
	UITableViewCell* _displayCurrencyCell;
	UITableViewCell* _deleteShopCell;
	UITableViewCell* _productsCollectionCell;
	NSString* _updatedShopDescriptionText;
	FBPopoverController* _popoverController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fb_showNavBarSearchField;
-(id)initWithPageID:(id)arg1 session:(id)arg2 ;
-(void)shopProductsDidUpdate;
-(void)shopDescriptionDidChangeWithText:(id)arg1 ;
-(void)openProductEditForItem:(id)arg1 ;
-(void)_saveAndViewShop;
-(void)_fetchStore;
-(void)_openStorefront;
-(void)_showErrorAlertView;
-(void)_didTapDetailsInfoImage:(id)arg1 ;
-(void)_deleteShop;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end

