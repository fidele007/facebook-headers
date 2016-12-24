/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Facebook/Facebook-Structs.h>
@class FBUserSession, FBFeedbackReactionSettingsPersistenceCoordinator, FBFeedbackReactionSettingsNetworker, FBFeedbackReactionSettingsFetchServiceAnalyticsFactory, NSString, NSObject, FBGraphQLLiveQuery, NSArray;

@interface FBFeedbackReactionSettingsUpdateManager : NSObject {

	FBUserSession* _session;
	FBFeedbackReactionSettingsPersistenceCoordinator* _persistenceCoordinator;
	FBFeedbackReactionSettingsNetworker* _networker;
	FBFeedbackReactionSettingsFetchServiceAnalyticsFactory* _analyticsFactory;
	NSString* _localReactionsLatestBatchUUID;
	NSObject*<OS_dispatch_queue> _localReactionsBatchProcessingQueue;
	ReadWriteLock _consolidatedLocalReactionsLock;
	FBGraphQLLiveQuery* _reactionSettingsLiveQuery;
	mutex _liveQueryMutex;
	NSArray* _consolidatedLocalReactions;

}

@property (nonatomic,copy) NSArray * consolidatedLocalReactions;              //@synthesize consolidatedLocalReactions=_consolidatedLocalReactions - In the implementation block
-(id)reactionsDataProvider;
-(void)_restoreConsolidatedReactionsWithPersistedBatch:(id)arg1 ;
-(NSArray *)consolidatedLocalReactions;
-(void)_handleNewReactionSettingsBatch:(id)arg1 analyticsManager:(id)arg2 ;
-(void)setConsolidatedLocalReactions:(NSArray *)arg1 ;
-(void)_updateConsolidatedReactionsFromBatch:(id)arg1 analyticsManager:(id)arg2 ;
-(void)_updateReactionWithKey:(long long)arg1 inLocalReactionsBatch:(id)arg2 batchUUID:(id)arg3 analyticsManager:(id)arg4 updateBlock:(/*^block*/id)arg5 ;
-(void)_incorporateAnimationModelsFromModels:(id)arg1 batchToUpdate:(id)arg2 analyticsManager:(id)arg3 ;
-(id)initWithSession:(id)arg1 persistenceCoordinator:(id)arg2 reactionSettingsNetworker:(id)arg3 analyticsManagerFactory:(id)arg4 ;
-(void)triggerUpdateFromServer;
@end

