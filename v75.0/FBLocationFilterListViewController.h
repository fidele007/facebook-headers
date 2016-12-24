/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBComponentTableViewDataSourceCellConfigProvider.h>
#import <Facebook/FBComponentTableViewDataSourceEventListener.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <Facebook/CKComponentProvider.h>
#import <Facebook/FBLocationFilterDelegate.h>
#import <Facebook/FBLocationFilterSearchBarDelegate.h>

@protocol FBServiceTransactionMutating, FBLocationFilterListViewControllerDelegate;
@class FBLocationManager, FBUserSession, FBComponentTableViewDataSource, UITableView, UIView, UILabel, FBLocationFilterSearchBar, FBLocationFilterCurrentLocationModel, FBLocationFilterRadiusSelectorModel, NSString;

@interface FBLocationFilterListViewController : UIViewController <FBComponentTableViewDataSourceCellConfigProvider, FBComponentTableViewDataSourceEventListener, UITableViewDelegate, UITableViewDelegate, CKComponentProvider, FBLocationFilterDelegate, FBLocationFilterSearchBarDelegate> {

	FBLocationManager* _locationManager;
	FBUserSession* _session;
	FBComponentTableViewDataSource* _tableViewDataSource;
	UITableView* _tableView;
	UIView* _emptyView;
	UILabel* _emptyViewLabel;
	FBLocationFilterSearchBar* _searchBar;
	id<FBServiceTransactionMutating> _pendingSearch;
	FBLocationFilterCurrentLocationModel* _currentLocationModel;
	long long _radius;
	FBLocationFilterRadiusSelectorModel* _radiusSelectorModel;
	id<FBLocationFilterListViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBLocationFilterListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(FBComponentTableViewDataSourceCellConfig)configForTableCellInDataSource:(id)arg1 ;
-(id)initWithSession:(id)arg1 radius:(long long)arg2 ;
-(void)didSelectCurrentLocationWithRadius:(long long)arg1 ;
-(id)initWithSession:(id)arg1 radius:(long long)arg2 radiusSelectorModel:(id)arg3 ;
-(void)onNewLocationsReceived:(id)arg1 forQuery:(id)arg2 ;
-(void)onFetchFailed;
-(id)_emptyViewMessageWithQuery:(id)arg1 ;
-(void)updateCurrentLocationNodeIsSelected:(BOOL)arg1 selectedRadiusMiles:(long long)arg2 ;
-(void)didSelectCurrentLocation;
-(void)didSelectSearchResult:(id)arg1 ;
-(void)setDelegate:(id<FBLocationFilterListViewControllerDelegate>)arg1 ;
-(id<FBLocationFilterListViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)search:(id)arg1 ;
@end

