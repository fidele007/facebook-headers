/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Facebook/FBEventsDashboardBirthdayCellControllerDelegate.h>
#import <Facebook/FBEventsDashboardGenericViewDataSource.h>

@protocol FBEventsDashboardBirthdayCellControllerDelegate;
@class NSString, FBEventsDashboardGenericViewDataSource, FBUserSession, FBEventsDashboardCardView, FBEventsDashboardBirthdayObjectFetcher, UITableView, NSArray, UIViewController, FBEventAnalyticTracker, FBScenePath;

@interface FBEventsDashboardBirthdayPreviewDataSource : NSObject <UITableViewDataSource, UITableViewDelegate, FBEventsDashboardBirthdayCellControllerDelegate, FBEventsDashboardGenericViewDataSource> {

	FBUserSession* _session;
	FBEventsDashboardCardView* _cardView;
	FBEventsDashboardBirthdayObjectFetcher* _fetcher;
	UITableView* _tableView;
	NSArray* _people;
	BOOL _didLoad;
	UIViewController* _viewController;
	FBEventAnalyticTracker* _tracker;
	FBScenePath* _scenePath;
	FBEventsDashboardGenericViewDataSource* genericDataSource;
	NSString* analyticsFilterName;
	id<FBEventsDashboardBirthdayCellControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBEventsDashboardBirthdayCellControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * analyticsFilterName; 
@property (assign,nonatomic,__weak) FBEventsDashboardGenericViewDataSource * genericDataSource; 
-(id)_getAnalyticsExtras;
-(void)didTapComposerButtonForPerson:(id)arg1 ;
-(void)didTapSendMessageForPerson:(id)arg1 ;
-(void)_didTapViewAll:(id)arg1 ;
-(void)_loadBirthdays;
-(FBEventsDashboardGenericViewDataSource *)genericDataSource;
-(NSString *)analyticsFilterName;
-(id)genericDataSourceGetContentView:(id)arg1 ;
-(void)setAnalyticsFilterName:(NSString *)arg1 ;
-(void)setGenericDataSource:(FBEventsDashboardGenericViewDataSource *)arg1 ;
-(id)initWithSession:(id)arg1 viewController:(id)arg2 tracker:(id)arg3 scenePath:(id)arg4 ;
-(void)setDelegate:(id<FBEventsDashboardBirthdayCellControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<FBEventsDashboardBirthdayCellControllerDelegate>)delegate;
-(void)_setup;
@end
