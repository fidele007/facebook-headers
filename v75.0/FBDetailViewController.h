/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBDetailComponentControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Facebook/FBScrolling.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, NSArray, FBTableViewAggregatedDataSource, NSString;

@interface FBDetailViewController : UIViewController <FBDetailComponentControllerDelegate, UIScrollViewDelegate, FBScrolling, UITableViewDelegate> {

	UITableView* _tableView;
	NSArray* _componentControllers;
	FBTableViewAggregatedDataSource* _aggregatedDataSource;

}

@property (nonatomic,readonly) FBTableViewAggregatedDataSource * aggregatedDataSource;              //@synthesize aggregatedDataSource=_aggregatedDataSource - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                             //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSArray * componentControllers;                                        //@synthesize componentControllers=_componentControllers - In the implementation block
@property (nonatomic,readonly) BOOL hasHeaderView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableViewMutator;
-(FBTableViewAggregatedDataSource *)aggregatedDataSource;
-(NSArray *)componentControllers;
-(void)setComponentControllers:(NSArray *)arg1 ;
-(void)tableViewDidLoad;
-(void)controller:(id)arg1 openViewController:(id)arg2 ;
-(void)controller:(id)arg1 openURL:(id)arg2 ;
-(void)_loadTableView;
-(void)_deliverNotification:(id)arg1 ;
-(void)updateTableHeaderViewHeight;
-(BOOL)hasHeaderView;
-(void)dealloc;
-(id)init;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(UITableView *)tableView;
-(id)tableHeaderView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)headerView;
-(void)_loadHeaderView;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
@end

