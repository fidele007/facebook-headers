/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBStreamListener.h>
#import <Facebook/FBGraphQLConnectionControllerLoadListener.h>
#import <Facebook/FBGraphQLConnectionControllerNetworkListener.h>
#import <Facebook/FBStoryStreamUpdatesListener.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, FBReachabilityAnnouncer, NSObject, NSString;

@interface FBFeedEndToEndPerformanceLogger : NSObject <FBStreamListener, FBGraphQLConnectionControllerLoadListener, FBGraphQLConnectionControllerNetworkListener, FBStoryStreamUpdatesListener> {

	long long _feedType;
	NSMutableDictionary* _loadTypeToLoadRequestUUIDDictionary;
	NSMutableDictionary* _preparationQueueBatchIDToResponseUUIDDictionary;
	NSMutableDictionary* _loadRequestUUIDToChunkDataDictionary;
	FBReachabilityAnnouncer* _reachabilityAnnouncer;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stream:(id)arg1 didFinishLoading:(unsigned long long)arg2 withResults:(id)arg3 requestAnalyticsUUID:(id)arg4 userInfo:(id)arg5 ;
-(void)stream:(id)arg1 willStartLoading:(unsigned long long)arg2 refreshMode:(id)arg3 requestAnalyticsUUID:(id)arg4 userInfo:(id)arg5 ;
-(void)streamLoadResponseHandlerWillProcessResponseWithLoadType:(unsigned long long)arg1 loadRequestUUID:(id)arg2 loadRequestPriority:(long long)arg3 responseUUID:(id)arg4 responseStatus:(id)arg5 timestamp:(double)arg6 currentResponseChunkIndex:(unsigned long long)arg7 expectedResponseChunks:(unsigned long long)arg8 ;
-(void)stream:(id)arg1 didCancelLoading:(unsigned long long)arg2 requestAnalyticsUUID:(id)arg3 ;
-(void)componentPreparationQueue:(id)arg1 didStartPreparingBatchOfSize:(unsigned long long)arg2 batchID:(unsigned long long)arg3 ;
-(void)componentPreparationQueue:(id)arg1 didFinishPreparingBatchOfSize:(unsigned long long)arg2 batchID:(unsigned long long)arg3 ;
-(void)graphQLConnectionController:(id)arg1 didBeginLoad:(id)arg2 ;
-(void)graphQLConnectionController:(id)arg1 didCompleteLoad:(id)arg2 ;
-(id)initWithFeedType:(long long)arg1 ;
-(void)graphQLConnectionController:(id)arg1 didReceiveEdgesFromNetworkLoad:(id)arg2 ;
-(void)graphQLConnectionController:(id)arg1 didLoadEdgesFromNetworkLoad:(id)arg2 ;
-(void)dataSource:(id)arg1 willEnqueueChangesetToPreparationQueueFromSource:(id)arg2 ;
-(void)dataSource:(id)arg1 didEnqueueChangesetToPreparationQueueFromSource:(id)arg2 batchID:(unsigned long long)arg3 ;
-(void)dataSource:(id)arg1 didInsertEdges:(unsigned long long)arg2 fromSource:(id)arg3 ;
-(void)abortAllLogging:(id)arg1 ;
-(void)_logWillStartLoadingWithLoadRequestUUID:(id)arg1 loadType:(unsigned long long)arg2 refreshMode:(id)arg3 loader:(id)arg4 ;
-(void)_logError:(id)arg1 loadRequestUUID:(id)arg2 ;
-(void)_logCompletionForLoadRequestUUID:(id)arg1 ;
-(void)_logWillProcessResponseWithLoadRequestUUID:(id)arg1 loadRequestPriority:(long long)arg2 responseUUID:(id)arg3 responseStatus:(id)arg4 timestamp:(double)arg5 currentResponseChunkIndex:(unsigned long long)arg6 expectedResponseChunks:(unsigned long long)arg7 ;
-(void)_logDidProcessResponseWithLoadRequestUUID:(id)arg1 loadRequestPriority:(long long)arg2 responseUUID:(id)arg3 responseStatus:(id)arg4 timestamp:(double)arg5 currentResponseChunkIndex:(unsigned long long)arg6 expectedResponseChunks:(unsigned long long)arg7 edgeCount:(unsigned long long)arg8 ;
-(void)_cleanUpAfterEndEventForLoadRequestUUID:(id)arg1 ;
-(void)_logEndEventDueToInvalidResponseChunkIndex:(unsigned long long)arg1 expectedResponseChunks:(unsigned long long)arg2 loadRequestUUID:(id)arg3 step:(id)arg4 ;
-(void)checkAndStopEvent:(id)arg1 withLoggerStatus:(id)arg2 ;
-(void)forResponseUUID:(id)arg1 performBlock:(/*^block*/id)arg2 ;
-(id)_loadTypeKeyForLoadRequestUUID:(id)arg1 ;
-(void)streamLoadResponseHandlerDidProcessResponseWithLoadType:(unsigned long long)arg1 loadRequestUUID:(id)arg2 loadRequestPriority:(long long)arg3 rawReponse:(id)arg4 responseUUID:(id)arg5 responseStatus:(id)arg6 timestamp:(double)arg7 responseChunkResults:(id)arg8 expectedResponseChunks:(unsigned long long)arg9 userInfo:(id)arg10 ;
@end
