/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBComponentTableViewDataSourceEventListener.h>
#import <Facebook/FBComponentTableViewDataSourceCellConfigProvider.h>
#import <Facebook/FBComponentCollectionViewDataSourceEventListener.h>
#import <Facebook/FBComponentCollectionViewDataSourceCellConfigProvider.h>
#import <Facebook/FBAccessibilityInvalidationEventsListener.h>
#import <Facebook/FBNotificationsNotificationChangeProvidingListener.h>
#import <Facebook/FBNotificationsSyncManagerListener.h>
#import <Facebook/FBNotificationsSyncManagerProtocol.h>

@protocol FBNotificationsNotificationChangeProviding, FBNotificationsComponentsAdapterDelegate;
@class NSArray, FBNotificationsSyncManager, FBNotificationsWildeNotificationsService, FBNotificationsComponentToolbox, NSMutableDictionary, FBUserSession, FBNotificationsComponentDataSourceWrapper, NSString;

@interface FBNotificationsComponentsAdapter : NSObject <FBComponentTableViewDataSourceEventListener, FBComponentTableViewDataSourceCellConfigProvider, FBComponentCollectionViewDataSourceEventListener, FBComponentCollectionViewDataSourceCellConfigProvider, FBAccessibilityInvalidationEventsListener, FBNotificationsNotificationChangeProvidingListener, FBNotificationsSyncManagerListener, FBNotificationsSyncManagerProtocol> {

	NSArray* _objects;
	id<FBNotificationsNotificationChangeProviding> _notificationChangeProvider;
	FBNotificationsSyncManager* _notificationsSyncManager;
	FBNotificationsWildeNotificationsService* _notificationsService;
	FBNotificationsComponentToolbox* _toolbox;
	NSMutableDictionary* _enqueuedObjects;
	BOOL _didSetupInitialChangeset;
	BOOL _renderingTailBatch;
	long long _renderBatchSize;
	vector<CK::ArrayController::Input::Items, std::__1::allocator<CK::ArrayController::Input::Items> >* _pendingChangesets;
	FBUserSession* _session;
	BOOL _useOptimizedDiffAlgorithm;
	id<FBNotificationsComponentsAdapterDelegate> _delegate;
	FBNotificationsComponentDataSourceWrapper* _dataSourceWrapper;

}

@property (assign,nonatomic,__weak) id<FBNotificationsComponentsAdapterDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBNotificationsComponentDataSourceWrapper * dataSourceWrapper;              //@synthesize dataSourceWrapper=_dataSourceWrapper - In the implementation block
@property (nonatomic,copy,readonly) NSArray * notifications; 
@property (nonatomic,readonly) BOOL loading; 
@property (nonatomic,readonly) BOOL loadingHead; 
@property (nonatomic,readonly) BOOL loadingTail; 
@property (nonatomic,readonly) BOOL needsReload; 
@property (nonatomic,copy,readonly) NSString * actorFBID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addSyncManagerListener:(id)arg1 ;
-(void)removeSyncManagerListener:(id)arg1 ;
-(void)notificationsSyncManager:(id)arg1 didFinishLoading:(unsigned long long)arg2 withLoadDataReason:(long long)arg3 changeset:(id)arg4 ;
-(BOOL)loadingTail;
-(void)dataSourceDidEndUpdates:(id)arg1 changeset:(Changeset*)arg2 userInfo:(id)arg3 ;
-(BOOL)isFinishedInitializing;
-(Items*)_initialChangeset;
-(void)loadHeadWithReason:(long long)arg1 ;
-(BOOL)loadingHead;
-(void)notificationChangeProvider:(id)arg1 didUpdateWithChanges:(id)arg2 ;
-(void)dataSourceDidEndUpdates:(id)arg1 changeset:(Changeset*)arg2 ;
-(FBComponentTableViewDataSourceCellConfig)configForTableCellInDataSource:(id)arg1 ;
-(FBNotificationsSyncManagerInitialLoadResult)initialHeadLoadResult;
-(id)workingRangeController;
-(NSString *)actorFBID;
-(void)didReceiveAccessibilityInvalidation;
-(FBComponentCollectionViewDataSourceCellConfig)configForCollectionCellInDataSource:(id)arg1 ;
-(id)initWithSession:(id)arg1 notificationChangeProvider:(id)arg2 notificationsService:(id)arg3 componentToolbox:(id)arg4 componentProviderClass:(Class)arg5 useOptimizedDiffAlgorithm:(BOOL)arg6 dataSourceFactory:(/*^block*/id)arg7 ;
-(void)_internalSetupInitialChangeset;
-(Sections*)_sectionsChangeset;
-(void)_updateObjects;
-(void)_enqueuePendingChangesets;
-(void)_updateWithChanges:(id)arg1 ;
-(id)_enqueuedObjectsForCurrentModels:(id)arg1 ;
-(void)_dataSourceDidEndUpdates;
-(void)reloadNotification:(id)arg1 atIndexPath:(id)arg2 ;
-(id)optionRowModificationService;
-(id)initWithSession:(id)arg1 notificationChangeProvider:(id)arg2 notificationsService:(id)arg3 componentToolbox:(id)arg4 componentProviderClass:(Class)arg5 defaultWidth:(double)arg6 useOptimizedDiffAlgorithm:(BOOL)arg7 useCollectionView:(BOOL)arg8 useTransactionalDataSource:(BOOL)arg9 ;
-(FBNotificationsComponentDataSourceWrapper *)dataSourceWrapper;
-(void)loadTailWithReason:(long long)arg1 ;
-(void)setDelegate:(id<FBNotificationsComponentsAdapterDelegate>)arg1 ;
-(void)dealloc;
-(id<FBNotificationsComponentsAdapterDelegate>)delegate;
-(NSArray *)notifications;
-(BOOL)loading;
-(BOOL)needsReload;
-(void)_setupSections;
@end

