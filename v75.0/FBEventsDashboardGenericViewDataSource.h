/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAccessibilityInvalidationEventsListener.h>
#import <Facebook/FBEventsDashboardDataSourceProtocol.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol FBTableViewMutating, FBEventsDashboardGenericViewDataSource;
@class NSString, FBEventAnalyticTracker, FBEventsDashboardWrapperTableViewCell, UIViewController, UITableView, UITableViewCell;

@interface FBEventsDashboardGenericViewDataSource : NSObject <FBAccessibilityInvalidationEventsListener, FBEventsDashboardDataSourceProtocol, UITableViewDataSource, UITableViewDelegate> {

	FBEventsDashboardWrapperTableViewCell* _cell;
	id<FBTableViewMutating> _mutator;
	UIViewController* _viewController;
	UITableView* _tableView;
	UITableViewCell* _emptyCell;
	NSString* analyticsFilterName;
	FBEventAnalyticTracker* tracker;
	id<FBEventsDashboardGenericViewDataSource> _dataSource;
	double _topMargin;
	double _bottomMargin;

}

@property (nonatomic,retain) id<FBEventsDashboardGenericViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) double topMargin;                                                   //@synthesize topMargin=_topMargin - In the implementation block
@property (assign,nonatomic) double bottomMargin;                                                //@synthesize bottomMargin=_bottomMargin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * analyticsFilterName; 
@property (nonatomic,retain) FBEventAnalyticTracker * tracker; 
-(FBEventAnalyticTracker *)tracker;
-(void)setTracker:(FBEventAnalyticTracker *)arg1 ;
-(void)didReceiveFontInvalidation;
-(NSString *)analyticsFilterName;
-(void)setAnalyticsFilterName:(NSString *)arg1 ;
-(void)prepareDataSourceForTable:(id)arg1 mutator:(id)arg2 viewController:(id)arg3 ;
-(void)unloadDataSourceFromTable:(id)arg1 mutator:(id)arg2 viewController:(id)arg3 ;
-(void)setDataSource:(id<FBEventsDashboardGenericViewDataSource>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBEventsDashboardGenericViewDataSource>)dataSource;
-(double)topMargin;
-(id)initWithDataSource:(id)arg1 ;
-(void)loadMore;
-(void)reloadContentView;
-(double)bottomMargin;
-(void)setTopMargin:(double)arg1 ;
-(void)setBottomMargin:(double)arg1 ;
@end
