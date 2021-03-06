/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class FBUserSession, NSObject, FBAnalyticsPrefetcherLogger, FBAnalyticsPerfLogger, NSMutableDictionary, NSArray, NSMapTable;

@interface FBNotificationStoriesPrefetchController : NSObject {

	FBUserSession* _session;
	unsigned long long _secondsBeforeStale;
	NSObject*<OS_dispatch_queue> _queuePerformer;
	FBAnalyticsPrefetcherLogger* _prefetcherLogger;
	FBAnalyticsPerfLogger* _perfLogger;
	NSMutableDictionary* _targetGraphQLIDToPerfLoggerNamespace;
	NSMutableDictionary* _perfLoggerNamespaceToActiveRequestCount;
	NSArray* _notificationsToPrefetchOnForeground;
	NSArray* _prefetchConfigurationsForNotificationsToPrefetchOnForeground;
	NSMutableDictionary* _notificationGraphQLIDToTargetGraphQLID;
	NSMutableDictionary* _targetGraphQLIDToNotificationGraphQLID;
	NSMapTable* _targetGraphQLIDToQueryMap;
	NSMapTable* _queryToTargetGraphQLIDMap;
	NSMapTable* _targetGraphQLIDToRequestTokenMap;
	BOOL _refreshPermalinkOnClick;
	BOOL _unifyPrefetching;

}
-(void)_applicationFinishedEnteringForegroundAndIsNowIdle:(id)arg1 ;
-(BOOL)_shouldPrefetchStoryForTargetGraphQLID:(id)arg1 ;
-(void)_beginPerfLoggerForTargetGraphQLID:(id)arg1 namespace:(id)arg2 ;
-(id)_prefetchQueryForNotificationGraphQLID:(id)arg1 targetGraphQLID:(id)arg2 ;
-(void)_sendBatchQueries:(id)arg1 withPriority:(long long)arg2 accessTokenOverride:(id)arg3 ;
-(void)_cancelPrefetchForTargetGraphQLID:(id)arg1 ;
-(void)prefetchNotificationStoriesForMemNotifications:(id)arg1 ;
-(void)prefetchNotificationStoriesForPrefetchConfigurations:(id)arg1 ;
-(BOOL)isStoryPrefetchedForNotificationGraphQLID:(id)arg1 ;
-(void)_processDownloadedStory:(id)arg1 fromQuery:(id)arg2 withError:(id)arg3 cancelled:(BOOL)arg4 ;
-(void)_processDownloadedStory:(id)arg1 fromTargetGraphQLID:(id)arg2 withError:(id)arg3 cancelled:(BOOL)arg4 ;
-(void)_cleanupMapsForQuery:(id)arg1 ;
-(void)_endPerfLoggerForTargetGraphQLID:(id)arg1 succeeded:(BOOL)arg2 cancelled:(BOOL)arg3 ;
-(id)initWithSession:(id)arg1 secondsBeforeStale:(unsigned long long)arg2 ;
-(void)cancelPrefetchNotificationStoryForNotificationGraphQLID:(id)arg1 ;
-(void)cancelAllPrefetches;
-(void)clearPrefetchedNotificationStoriesForNotificationGraphQLIDs:(id)arg1 ;
-(void)logPrefetchCacheEfficiencyEventForNotificationGraphQLID:(id)arg1 ;
-(void)dealloc;
@end

