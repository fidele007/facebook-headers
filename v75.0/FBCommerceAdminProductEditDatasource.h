/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBCommerceAdminEditTextTableViewCellDelegate.h>
#import <Facebook/FBCommerceAdminProductStatusInfoViewDelegate.h>
#import <Facebook/FBCommerceAdminProductImagesDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol FBNavigationCoordinator, FBCommerceAdminProductEditDatasourceDelegate;
@class FBCommerceAdminEditTextTableViewCell, FBCommerceAdminEditPriceTableViewCell, FBCommerceAdminSwitchTableViewCell, FBCommerceAdminProductImagesCollectionViewController, FBUserSession, FBMemPage, FBMemCommerceStore, FBMemProductItem, FBPaymentsCurrency, FBPopoverController, UITableView, NSArray, NSDictionary, NSString;

@interface FBCommerceAdminProductEditDatasource : NSObject <FBCommerceAdminEditTextTableViewCellDelegate, FBCommerceAdminProductStatusInfoViewDelegate, FBCommerceAdminProductImagesDelegate, UITableViewDataSource> {

	FBCommerceAdminEditTextTableViewCell* _editNameCell;
	FBCommerceAdminEditPriceTableViewCell* _editPriceCell;
	FBCommerceAdminEditTextTableViewCell* _editDescriptionCell;
	FBCommerceAdminSwitchTableViewCell* _shareToggleCell;
	FBCommerceAdminProductImagesCollectionViewController* _productImagesViewController;
	FBUserSession* _session;
	FBMemPage* _page;
	FBMemCommerceStore* _store;
	FBMemProductItem* _product;
	FBPaymentsCurrency* _currency;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBPopoverController* _popoverController;
	UITableView* _tableView;
	BOOL _isFeatured;
	BOOL _shareToTimeline;
	long long _currentFeaturedItemCount;
	NSArray* _sections;
	NSDictionary* _sectionToRowList;
	id<FBCommerceAdminProductEditDatasourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBCommerceAdminProductEditDatasourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)editTextTableViewCell:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)editTextTableViewCell:(id)arg1 didChangeWithText:(id)arg2 ;
-(void)productImagesDidUpdate;
-(void)configureWithPage:(id)arg1 product:(id)arg2 ;
-(id)initWithSession:(id)arg1 tableView:(id)arg2 navigationCoordinator:(id)arg3 ;
-(id)productItemInfo;
-(unsigned long long)rowTypeForIndexPath:(id)arg1 ;
-(void)_initCellOrderConfiguration;
-(void)_priceTextDidChange:(id)arg1 ;
-(void)_featuredSwitchValueDidChange:(id)arg1 ;
-(void)_didTapFeaturedInfoImage:(id)arg1 ;
-(void)_shareToTimelineValueDidChange:(id)arg1 ;
-(void)_didTapShareToTimelineInfoImage:(id)arg1 ;
-(void)didTapPoliciesLink;
-(void)setDelegate:(id<FBCommerceAdminProductEditDatasourceDelegate>)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBCommerceAdminProductEditDatasourceDelegate>)delegate;
@end

