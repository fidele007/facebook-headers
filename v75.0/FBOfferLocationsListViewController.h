/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Facebook/CKComponentProvider.h>
#import <Facebook/FBComponentTableViewDataSourceSelectionEventListener.h>

@protocol FBOfferLocationsListViewControllerDelegate;
@class FBComponentTableViewDataSource, NSArray, NSString;

@interface FBOfferLocationsListViewController : UITableViewController <CKComponentProvider, FBComponentTableViewDataSourceSelectionEventListener> {

	FBComponentTableViewDataSource* _dataSource;
	NSArray* _locations;
	id<FBOfferLocationsListViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBOfferLocationsListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(BOOL)fb_showNavBarSearchField;
-(void)dataSource:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)fb_hideNavBarRightButton;
-(id)initWithChildLocations:(id)arg1 toolbox:(id)arg2 ;
-(void)setDelegate:(id<FBOfferLocationsListViewControllerDelegate>)arg1 ;
-(id<FBOfferLocationsListViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end

