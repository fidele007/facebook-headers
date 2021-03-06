/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Facebook/FBPaymentsCartItemDetailViewControllerDelegate.h>
#import <Facebook/FBPaymentsEventListener.h>
#import <Facebook/FBPaymentsEventAnnouncing.h>

@protocol FBPaymentsLoadingIndicatorFactory, FBPaymentsCartSearchDataRetrieving, FBPaymentsNavigationDelegate, FBPaymentsCartSearchResultTableViewControllerDelegate;
@class FBUserSession, NSArray, FBPaymentsEventListenerAnnouncer, FBPaymentsCartInfo, NSString;

@interface FBPaymentsCartSearchResultTableViewController : UITableViewController <FBPaymentsCartItemDetailViewControllerDelegate, FBPaymentsEventListener, FBPaymentsEventAnnouncing> {

	FBUserSession* _session;
	NSArray* _cartItemInfoSearchResults;
	long long _previousStatusBarStyle;
	BOOL _isViewDisappearing;
	id<FBPaymentsLoadingIndicatorFactory> _loadingIndicatorFactory;
	BOOL _isLoading;
	FBPaymentsEventListenerAnnouncer* _eventAnnouncer;
	FBPaymentsCartInfo* _cartInfo;
	id<FBPaymentsCartSearchDataRetrieving> _dataRetriever;
	NSString* _searchBarText;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;
	id<FBPaymentsCartSearchResultTableViewControllerDelegate> _delegate;

}

@property (nonatomic,copy) FBPaymentsCartInfo * cartInfo;                                                            //@synthesize cartInfo=_cartInfo - In the implementation block
@property (nonatomic,retain) id<FBPaymentsCartSearchDataRetrieving> dataRetriever;                                   //@synthesize dataRetriever=_dataRetriever - In the implementation block
@property (nonatomic,copy) NSString * searchBarText;                                                                 //@synthesize searchBarText=_searchBarText - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;                             //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsCartSearchResultTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(void)addEventListener:(id)arg1 ;
-(void)removeEventListener:(id)arg1 ;
-(void)didTriggerEventWithName:(id)arg1 announcerIdentifier:(id)arg2 collectedData:(id)arg3 ;
-(void)_popViewController;
-(void)cartItemDetailViewController:(id)arg1 didAddCartItem:(id)arg2 ;
-(void)cartItemDetailViewController:(id)arg1 didUpdateCartItem:(id)arg2 ;
-(void)_updateWithCartItemInfos:(id)arg1 ;
-(void)_configureStatusBar;
-(void)_configureCreateCustomItemCell:(id)arg1 ;
-(void)_configureTableViewCell:(id)arg1 withCartItemInfo:(id)arg2 ;
-(void)_configureLoadingIndicatorCell:(id)arg1 ;
-(void)_didSelectCustomItemRow;
-(void)_didSelectPreconfiguredItemRowAtIndexPath:(id)arg1 ;
-(id)_getResizedItemImageFromPaymentsImage:(id)arg1 ;
-(id)_plusImageForCustomItemCell;
-(void)_createAndPushCartItemDetailViewControllerForCartItem:(id)arg1 ;
-(FBPaymentsCartInfo *)cartInfo;
-(id<FBPaymentsCartSearchDataRetrieving>)dataRetriever;
-(NSString *)searchBarText;
-(void)setSearchBarText:(NSString *)arg1 ;
-(void)setCartInfo:(FBPaymentsCartInfo *)arg1 ;
-(void)setDataRetriever:(id<FBPaymentsCartSearchDataRetrieving>)arg1 ;
-(void)setDelegate:(id<FBPaymentsCartSearchResultTableViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<FBPaymentsCartSearchResultTableViewControllerDelegate>)delegate;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
-(void)_pushViewController:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

