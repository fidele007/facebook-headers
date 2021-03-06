/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBTimelineSectionDataSourceDelegate.h>
#import <Facebook/FBTableViewDataSource.h>
#import <Facebook/FBTableViewMutating.h>
#import <Facebook/FBTableViewSectionDataSource.h>
#import <Facebook/FBInvalidating.h>

@protocol FBAvatarProtocol, FBNavigationCoordinator, FBIntentHandler, FBComposerFlowDelegate, FBTableViewMutating, FBTimelineSectionsDataSourceDelegate;
@class FBTableViewAggregatedDataSource, FBMemModelObject, FBUserSession, FBScenePath, NSString, FBKVOController, FBTimelineSectionDataSource, NSMutableDictionary, FBGraphQLMemPaginatedConnectionController, FBMemTimelineSectionsConnection, NSArray;

@interface FBTimelineSectionsDataSource : NSObject <FBTimelineSectionDataSourceDelegate, FBTableViewDataSource, FBTableViewMutating, FBTableViewSectionDataSource, FBInvalidating> {

	FBTableViewAggregatedDataSource* _aggregatedDataSource;
	FBMemModelObject*<FBAvatarProtocol> _target;
	FBUserSession* _session;
	BOOL _invalidated;
	FBScenePath* _scenePath;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBIntentHandler> _intentHandler;
	NSString* _analyticsModule;
	NSString* _analyticsUUID;
	FBKVOController* _observer;
	FBTimelineSectionDataSource* _nowDataSource;
	NSMutableDictionary* _sectionDataSourcesBySectionID;
	Class _configuratorClass;
	long long _feedType;
	BOOL _needsClearSectionCache;
	BOOL _shouldPageSections;
	BOOL _isDownloadingSections;
	FBGraphQLMemPaginatedConnectionController* _sectionsPaginatedController;
	id<FBComposerFlowDelegate> _composerFlowDelegate;
	BOOL _enableInfiniteScroll;
	BOOL _isUnseenSectionEnabled;
	id<FBTableViewMutating> _tableViewMutator;
	id<FBTimelineSectionsDataSourceDelegate> _delegate;
	FBMemTimelineSectionsConnection* _initialTimelineSections;
	FBTimelineSectionDataSource* _lastSectionDataSource;
	NSArray* _sections;
	NSArray* _allSections;
	unsigned long long _visibleSectionsCount;

}

@property (nonatomic,copy) NSArray * sections;                                                       //@synthesize sections=_sections - In the implementation block
@property (nonatomic,copy) NSArray * allSections;                                                    //@synthesize allSections=_allSections - In the implementation block
@property (assign,nonatomic) unsigned long long visibleSectionsCount;                                //@synthesize visibleSectionsCount=_visibleSectionsCount - In the implementation block
@property (nonatomic,retain) FBTimelineSectionDataSource * nowDataSource; 
@property (nonatomic,retain) FBTimelineSectionDataSource * lastSectionDataSource;                    //@synthesize lastSectionDataSource=_lastSectionDataSource - In the implementation block
@property (nonatomic,copy) NSArray * dataSources; 
@property (nonatomic,retain) FBMemTimelineSectionsConnection * initialTimelineSections;              //@synthesize initialTimelineSections=_initialTimelineSections - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,nonatomic,__weak) id<FBTimelineSectionsDataSourceDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<FBTableViewMutating> tableViewMutator;                               //@synthesize tableViewMutator=_tableViewMutator - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(void)setTableViewMutator:(id<FBTableViewMutating>)arg1 ;
-(void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 forDataSource:(id)arg3 ;
-(void)moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 forDataSource:(id)arg3 ;
-(void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 forDataSource:(id)arg3 ;
-(void)insertRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 forDataSource:(id)arg3 ;
-(id)rootTableView;
-(id<FBTableViewMutating>)tableViewMutator;
-(void)insertSections:(id)arg1 withRowAnimation:(long long)arg2 forDataSource:(id)arg3 ;
-(void)announceRootTableViewChange;
-(FBMemTimelineSectionsConnection *)initialTimelineSections;
-(void)setInitialTimelineSections:(FBMemTimelineSectionsConnection *)arg1 ;
-(void)reloadSections:(id)arg1 withRowAnimation:(long long)arg2 forDataSource:(id)arg3 ;
-(id)absoluteIndexPathFor:(id)arg1 fromDataSource:(id)arg2 ;
-(FBTimelineSectionDataSource *)nowDataSource;
-(id)initWithTarget:(id)arg1 session:(id)arg2 scenePath:(id)arg3 navigationCoordinator:(id)arg4 intentHandler:(id)arg5 analyticsModule:(id)arg6 analyticsUUID:(id)arg7 configuratorClass:(Class)arg8 timelineFeedType:(long long)arg9 enableInfiniteScroll:(BOOL)arg10 composerFlowDelegate:(id)arg11 isUnseenSectionEnabled:(BOOL)arg12 ;
-(void)setNeedsClearSectionCache;
-(id)indexPathsForVisibleRowsInDataSource:(id)arg1 ;
-(CGRect)rectForRowAtIndexPath:(id)arg1 forDataSource:(id)arg2 ;
-(void)_sessionWillInvalidate:(id)arg1 ;
-(id)dataSourceForIndexPath:(id)arg1 translatedIndexPath:(id*)arg2 ;
-(void)timelineSectionDataSource:(id)arg1 didOpenAndHasMore:(BOOL)arg2 ;
-(void)timelineSectionDataSourceDidFullyLoad:(id)arg1 ;
-(id)cellForRowAtIndexPath:(id)arg1 forDataSource:(id)arg2 ;
-(void)moveSection:(long long)arg1 toSection:(long long)arg2 forDataSource:(id)arg3 ;
-(void)deleteSections:(id)arg1 withRowAnimation:(long long)arg2 forDataSource:(id)arg3 ;
-(id)dequeueReusableCellWithIdentifier:(id)arg1 forIndexPath:(id)arg2 forDataSource:(id)arg3 ;
-(unsigned long long)numberOfRowsInSection:(unsigned long long)arg1 forDataSource:(id)arg2 ;
-(void)_configureWithSections:(id)arg1 ;
-(void)setNowDataSource:(FBTimelineSectionDataSource *)arg1 ;
-(void)setLastSectionDataSource:(FBTimelineSectionDataSource *)arg1 ;
-(void)_fetchSectionsIfNeeded;
-(BOOL)_hasMoreSections;
-(void)_handleFailureSections:(id)arg1 withError:(id)arg2 ;
-(void)_handleSuccessSectionsResponse:(id)arg1 ;
-(void)setVisibleSectionsCount:(unsigned long long)arg1 ;
-(BOOL)hasNonRecentSectionOpen;
-(FBTimelineSectionDataSource *)lastSectionDataSource;
-(unsigned long long)visibleSectionsCount;
-(void)setDelegate:(id<FBTimelineSectionsDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
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
-(id<FBTimelineSectionsDataSourceDelegate>)delegate;
-(BOOL)isActive;
-(void)invalidate;
-(BOOL)isValid;
-(void)beginUpdates;
-(void)endUpdates;
-(void)setActive:(BOOL)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(void)setDataSources:(NSArray *)arg1 ;
-(void)setAllSections:(NSArray *)arg1 ;
-(NSArray *)allSections;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(NSArray *)dataSources;
@end

