/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/MNServiceControllable.h>

@protocol MNMessageSendQueueRestorationListening, MNAppExtensionMessageSendQueueRestoreListening, MNMessageSendSchedulerListening, MNMessageSyncEventListening, OS_dispatch_queue, MNMessageSendScheduling, MNMessageSendQuerying, MNMessageSenderExtensionRegistrar, MNMessageSendAnalyticsLogging, MNMessageSendClientTriggeredThreadDeletionListening;
@class FBGraphMessageSendRequestRunner, MNMessageSendAttachmentProgressListeningAnnouncer, MNMessageSendQueueMutationListeningAnnouncer, MNMessageSendQueueDiskHandler, MNMessageSendBackgroundTaskTracker, MNMessageSendSchedulerListeningAnnouncer, MNMessageSendQueueDiskRestorationCachePopulator, MNMessageSendReliabilityLogger, NSObject, NSString;

@interface MNMessageSendService : NSObject <MNServiceControllable> {

	FBGraphMessageSendRequestRunner* _graphRequestRunner;
	MNMessageSendAttachmentProgressListeningAnnouncer* _attachmentProgressAnnouncer;
	MNMessageSendQueueMutationListeningAnnouncer* _sendQueueMutationAnnouncer;
	MNMessageSendQueueDiskHandler* _sendQueueDiskHandler;
	MNMessageSendBackgroundTaskTracker* _backgroundTaskTracker;
	MNMessageSendSchedulerListeningAnnouncer* _sendSchedulerAnnouncer;
	id<MNMessageSendQueueRestorationListening> _analyticsLoggerSendQueueRestorationListener;
	MNMessageSendQueueDiskRestorationCachePopulator* _diskRestoreCachePopulator;
	id<MNAppExtensionMessageSendQueueRestoreListening> _appExtSendQueueDispatchedListener;
	id<MNMessageSendSchedulerListening> _reliabilityLoggerSendSchedulerListener;
	MNMessageSendReliabilityLogger* _reliabilityLogger;
	id<MNMessageSyncEventListening> _doublePhaseCoordinator;
	NSObject*<OS_dispatch_queue> _queue;
	id<MNMessageSendScheduling> _scheduler;
	id<MNMessageSendQuerying> _querier;
	id<MNMessageSenderExtensionRegistrar> _extensionRegistrar;
	id<MNMessageSendAnalyticsLogging> _analyticsLogger;
	id<MNMessageSendClientTriggeredThreadDeletionListening> _threadDeletionListener;

}

@property (nonatomic,readonly) id<MNMessageSendScheduling> scheduler;                                                       //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,readonly) id<MNMessageSendQuerying> querier;                                                           //@synthesize querier=_querier - In the implementation block
@property (nonatomic,readonly) id<MNMessageSenderExtensionRegistrar> extensionRegistrar;                                    //@synthesize extensionRegistrar=_extensionRegistrar - In the implementation block
@property (nonatomic,readonly) id<MNMessageSendAnalyticsLogging> analyticsLogger;                                           //@synthesize analyticsLogger=_analyticsLogger - In the implementation block
@property (nonatomic,readonly) id<MNMessageSendClientTriggeredThreadDeletionListening> threadDeletionListener;              //@synthesize threadDeletionListener=_threadDeletionListener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MNMessageSendAnalyticsLogging>)analyticsLogger;
-(id)initWithUserSession:(id)arg1 authManager:(id)arg2 graphRequestRunner:(id)arg3 attachmentPreparer:(id)arg4 attachmentCleaner:(id)arg5 photoQualityPreparer:(id)arg6 mqttSender:(id)arg7 reachabilityAnnouncer:(id)arg8 sendConfigurationFactory:(id)arg9 sendTimestampGenerator:(id)arg10 diskHandlingDelegate:(id)arg11 sendQueueMutationListener:(id)arg12 messageSendListener:(id)arg13 attachmentProgressListener:(id)arg14 messageSyncEventAnnouncer:(id)arg15 appExtensionSendQueueRestoreAnnouncer:(id)arg16 clock:(id)arg17 backgroundTaskHandler:(id)arg18 analytics:(id)arg19 mobileConfigContextManager:(id)arg20 queue:(id)arg21 ;
-(id<MNMessageSendQuerying>)querier;
-(id<MNMessageSenderExtensionRegistrar>)extensionRegistrar;
-(id<MNMessageSendClientTriggeredThreadDeletionListening>)threadDeletionListener;
-(void)stop;
-(void)start:(id)arg1 ;
-(id<MNMessageSendScheduling>)scheduler;
-(void)handleIdle;
@end

