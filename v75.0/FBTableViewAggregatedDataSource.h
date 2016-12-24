/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBFeedDataSourceDeferredUpdating.h>
#import <Facebook/FBTableViewDataSource.h>
#import <Facebook/FBTableViewMutating.h>
#import <Facebook/FBTableViewSectionDataSource.h>

@protocol FBTableViewMutating, UITableViewDataSource;
@class NSMutableArray, NSMapTable, FBTableViewAggregatedDataSourceListenerAnnouncer, NSArray, NSString;

@interface FBTableViewAggregatedDataSource : NSObject <FBFeedDataSourceDeferredUpdating, FBTableViewDataSource, FBTableViewMutating, FBTableViewSectionDataSource> {

	NSMutableArray* _dataSources;
	map<id<FBTableViewSectionDataSource>, FBTableViewDelegateRespondsToCache, std::__1::less<id<FBTableViewSectionDataSource> >, std::__1::allocator<std::__1::pair<const id<FBTableViewSectionDataSource>, FBTableViewDelegateRespondsToCache> > >* _dataSourceRespondsTo;
	NSMapTable* _cellToDataSourceIndexPathMap;
	FBTableViewAggregatedDataSourceListenerAnnouncer* _announcer;
	BOOL _active;
	id<FBTableViewMutating> _tableViewMutator;
	id<UITableViewDataSource> _indexDataSource;

}

@property (nonatomic,retain) NSArray * dataSources; 
@property (assign,nonatomic,__weak) id<FBTableViewMutating> tableViewMutator;                             //@synthesize tableViewMutator=_tableViewMutator - In the implementation block
@property (assign,nonatomic,__weak) id<UITableViewDataSource> indexDataSource;                            //@synthesize indexDataSource=_indexDataSource - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                                 //@synthesize active=_active - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBTableViewDataSourceDelegateTransitioning> delegate; 
-(void)setTableViewMutator:(id<FBTableViewMutating>)arg1 ;
-(void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 forDataSource:(id)arg3 ;
-(void)moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 forDataSource:(id)arg3 ;
-(void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 forDataSource:(id)arg3 ;
-(void)insertRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 forDataSource:(id)arg3 ;
-(id)rootTableView;
-(id<FBTableViewMutating>)tableViewMutator;
-(void)insertSections:(id)arg1 withRowAnimation:(long long)arg2 forDataSource:(id)arg3 ;
-(void)reloadSections:(id)arg1 withRowAnimation:(long long)arg2 forDataSource:(id)arg3 ;
-(id)absoluteIndexPathFor:(id)arg1 fromDataSource:(id)arg2 ;
-(void)setIndexDataSource:(id<UITableViewDataSource>)arg1 ;
-(id)indexPathsForVisibleRowsInDataSource:(id)arg1 ;
-(CGRect)rectForRowAtIndexPath:(id)arg1 forDataSource:(id)arg2 ;
-(BOOL)hasDeferredUpdates;
-(void)setUpdatesDeferred:(BOOL)arg1 identifier:(id)arg2 ;
-(id)dataSourceForIndexPath:(id)arg1 translatedIndexPath:(id*)arg2 ;
-(id)cellForRowAtIndexPath:(id)arg1 forDataSource:(id)arg2 ;
-(void)moveSection:(long long)arg1 toSection:(long long)arg2 forDataSource:(id)arg3 ;
-(void)deleteSections:(id)arg1 withRowAnimation:(long long)arg2 forDataSource:(id)arg3 ;
-(id)dequeueReusableCellWithIdentifier:(id)arg1 forIndexPath:(id)arg2 forDataSource:(id)arg3 ;
-(unsigned long long)numberOfRowsInSection:(unsigned long long)arg1 forDataSource:(id)arg2 ;
-(void)_clearDataSource:(id)arg1 ;
-(void)_prepDataSource:(id)arg1 ;
-(id)_translatedIndexPaths:(id)arg1 inDataSource:(id)arg2 ;
-(id)firstDataSourceForIndexPath:(id)arg1 translatedIndexPath:(id*)arg2 ;
-(id)_translatedSections:(id)arg1 inDataSource:(id)arg2 ;
-(unsigned long long)_sectionIndexForSection:(unsigned long long)arg1 inDataSource:(id)arg2 ;
-(void)_announceRootTableViewChange;
-(long long)_startSectionIndexForSection:(long long)arg1 tableView:(id)arg2 dataSource:(id*)arg3 ;
-(id)_translateIndexPath:(id)arg1 fromTableView:(id)arg2 dataSource:(id*)arg3 ;
-(id)_translateIndexPath:(id)arg1 fromDataSource:(id)arg2 forTableView:(id)arg3 ;
-(id<UITableViewDataSource>)indexDataSource;
-(void)dealloc;
-(void)reloadData;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(NSString *)description;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(BOOL)isActive;
-(void)beginUpdates;
-(void)endUpdates;
-(void)setActive:(BOOL)arg1 ;
-(void)setDataSources:(NSArray *)arg1 ;
-(id)initWithDataSources:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(NSArray *)dataSources;
@end
