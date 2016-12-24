/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBAnalyticsPerfLoggerDelegate;
@class NSObject, FBReachabilityAnnouncer, NSMutableDictionary;

@interface FBAnalyticsPerfLogger : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _logResmemEnabled;
	FBReachabilityAnnouncer* _reachabilityAnnouncer;
	id<FBAnalyticsPerfLoggerDelegate> _delegate;
	NSMutableDictionary* _pendingPerfEvents;

}

@property (nonatomic,retain) NSMutableDictionary * pendingPerfEvents;                        //@synthesize pendingPerfEvents=_pendingPerfEvents - In the implementation block
@property (assign,nonatomic,__weak) id<FBAnalyticsPerfLoggerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedPerfLogger;
-(void)markStartForEvent:(id)arg1 ;
-(void)markStartForEvent:(id)arg1 nameSpace:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)markStopForEvent:(id)arg1 nameSpace:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)markStartForEvent:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setTimeMarker:(id)arg1 forEvent:(id)arg2 ;
-(void)markStopForEvent:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)markCancelForEvent:(id)arg1 ;
-(void)markStopForEvent:(id)arg1 ;
-(void)markStopForEvent:(id)arg1 nameSpace:(id)arg2 ;
-(void)markStartForEvent:(id)arg1 fromExistingEvent:(id)arg2 nameSpace:(id)arg3 copyExtras:(BOOL)arg4 usingBlock:(/*^block*/id)arg5 ;
-(void)markStopForEvents:(id)arg1 nameSpace:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)markCancelForEvent:(id)arg1 nameSpace:(id)arg2 ;
-(void)markStopForEvent:(id)arg1 fromExistingEvent:(id)arg2 nameSpace:(id)arg3 copyExtras:(BOOL)arg4 usingBlock:(/*^block*/id)arg5 ;
-(void)logEvent:(id)arg1 timeInterval:(double)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)markCancelForEvents:(id)arg1 nameSpace:(id)arg2 ;
-(void)markStartForEvents:(id)arg1 nameSpace:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)renameExistingEvent:(id)arg1 toNewEventNamed:(id)arg2 nameSpace:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)setExtrasForEvent:(id)arg1 nameSpace:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setExtrasForEvents:(id)arg1 nameSpace:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setTimeMarker:(id)arg1 forEvent:(id)arg2 nameSpace:(id)arg3 ;
-(void)setExtrasForEvent:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)onApplicationDidEnterBackground:(id)arg1 ;
-(void)markStopForEvent:(id)arg1 atTime:(double)arg2 nameSpace:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)logEvent:(id)arg1 module:(id)arg2 timeInterval:(double)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)setTimeMarker:(id)arg1 atTime:(double)arg2 forEvent:(id)arg3 nameSpace:(id)arg4 ;
-(void)markScopedForEvent:(id)arg1 nameSpace:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setTimeMarker:(id)arg1 atTime:(double)arg2 forEvent:(id)arg3 ;
-(void)setTimeMarker:(id)arg1 forEvents:(id)arg2 ;
-(void)onCTScanWillExit;
-(NSMutableDictionary *)pendingPerfEvents;
-(/*^block*/id)_wrapperBlockForContext:(id)arg1 tti:(double)arg2 ;
-(id)nonClosedPerfEventsForBugReporting;
-(void)logEvent:(id)arg1 residentMemoryCount:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)logPersistedObjects:(long long)arg1 forClass:(id)arg2 ;
-(void)logTotalSize:(long long)arg1 forClass:(id)arg2 ;
-(void)markStartForEvent:(id)arg1 nameSpace:(id)arg2 fromExistingEvent:(id)arg3 existingNameSpace:(id)arg4 copyExtras:(BOOL)arg5 usingBlock:(/*^block*/id)arg6 ;
-(double)_startTimeForPendingEvent:(id)arg1 nameSpace:(id)arg2 ;
-(void)_copyExtrasFromSourceEvent:(id)arg1 sourceNameSpace:(id)arg2 toDestinationEvent:(id)arg3 destinationNameSpace:(id)arg4 ;
-(void)markStopForEvent:(id)arg1 nameSpace:(id)arg2 fromExistingEvent:(id)arg3 existingNameSpace:(id)arg4 copyExtras:(BOOL)arg5 usingBlock:(/*^block*/id)arg6 ;
-(id)initWithReachabilityAnnouncer:(id)arg1 ;
-(void)onCTScanDidTriggerAppEventLogging;
-(void)markStartSynchronouslyForEvent:(id)arg1 nameSpace:(id)arg2 startTime:(double)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)addToPendingPerfEventsEventName:(id)arg1 nameSpace:(id)arg2 timeStamp:(double)arg3 ;
-(void)setContext:(id)arg1 forEvent:(id)arg2 nameSpace:(id)arg3 ;
-(void)markStopSynchronouslyForEvent:(id)arg1 module:(id)arg2 nameSpace:(id)arg3 stopTime:(double)arg4 usingBlock:(/*^block*/id)arg5 ;
-(BOOL)hasPendingEvent:(id)arg1 nameSpace:(id)arg2 ;
-(id)contextForEvent:(id)arg1 nameSpace:(id)arg2 ;
-(void)_cleanUpNameSpaceIfNeeded:(id)arg1 ;
-(void)markCancelSynchronouslyForEvent:(id)arg1 nameSpace:(id)arg2 ;
-(void)markScopedForEvent:(id)arg1 nameSpace:(id)arg2 onQueue:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)setExtrasSynchronouslyForEvent:(id)arg1 nameSpace:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)sequenceIdForEvent:(id)arg1 nameSpace:(id)arg2 ;
-(id)generateSequenceId;
-(void)logResidentMemoryEvent;
-(void)logWebKitMemoryEvent;
-(void)syncPerfLoggerQueueInCTScan;
-(void)markScopedForEvent:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)markScopedForEvent:(id)arg1 onQueue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)waitForQueue;
-(void)setPendingPerfEvents:(NSMutableDictionary *)arg1 ;
-(void)setDelegate:(id<FBAnalyticsPerfLoggerDelegate>)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(id<FBAnalyticsPerfLoggerDelegate>)delegate;
-(double)currentTimeStamp;
@end

