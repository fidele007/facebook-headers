/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBPaymentsCartItemDetailTableViewControllerDelegate.h>
#import <Facebook/FBPaymentsEventListener.h>
#import <Facebook/FBPaymentsEventAnnouncing.h>

@protocol FBPaymentsCartItemDetailViewControllerDelegate;
@class FBUserSession, FBPaymentsCartItemDetailView, FBPaymentsCartItemDetailTableViewController, FBPaymentsCartInfo, FBPaymentsCartItem, FBPaymentsEventListenerAnnouncer, NSString;

@interface FBPaymentsCartItemDetailViewController : UIViewController <FBPaymentsCartItemDetailTableViewControllerDelegate, FBPaymentsEventListener, FBPaymentsEventAnnouncing> {

	FBUserSession* _session;
	FBPaymentsCartItemDetailView* _cartItemDetailView;
	FBPaymentsCartItemDetailTableViewController* _cartItemDetailTableViewController;
	FBPaymentsCartInfo* _cartInfo;
	FBPaymentsCartItem* _cartItem;
	BOOL _isEditMode;
	FBPaymentsEventListenerAnnouncer* _eventAnnouncer;
	id<FBPaymentsCartItemDetailViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPaymentsCartItemDetailViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(void)addEventListener:(id)arg1 ;
-(void)removeEventListener:(id)arg1 ;
-(void)didTriggerEventWithName:(id)arg1 announcerIdentifier:(id)arg2 collectedData:(id)arg3 ;
-(void)_setNavigationBar;
-(void)_logViewDidLoadEvent;
-(void)_logDidTapBackEvent;
-(void)_updateNavigationItemStatus;
-(void)_logDidFocusFieldEvent;
-(BOOL)_cartItemIsPreconfiguredItem:(id)arg1 ;
-(void)_updateCartItem;
-(void)_addCartItem;
-(void)_logCartItemSaveEvent;
-(id)_preconfiguredItemHeaderViewWithPreconfiguredCartItemInfo:(id)arg1 ;
-(id)_loggingCollectedData;
-(void)paymentsCartItemDetailTableViewControllerDidUpdate:(id)arg1 ;
-(id)initWithSession:(id)arg1 cartInfo:(id)arg2 cartItem:(id)arg3 isEditMode:(BOOL)arg4 ;
-(void)setDelegate:(id<FBPaymentsCartItemDetailViewControllerDelegate>)arg1 ;
-(id<FBPaymentsCartItemDetailViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)_headerView;
@end

