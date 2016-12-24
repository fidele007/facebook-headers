/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGraphMessageSendListening.h>
#import <Facebook/MNMessageSenderExtensionDelegate.h>
#import <Facebook/MNMessageSendStateMachineSendRequester.h>
#import <Facebook/MNMessageSyncEventListening.h>

@protocol FBMessageOutgoingAttachmentPreparing, MNMessageSendAttachmentContextProvider, MNMessageSendMQTTAdapting, MNMessageSendRequestCoordinatorListening, MNMessageSendAttachmentProgressListening, OS_dispatch_queue;
@class FBGraphMessageSendRequestRunner, MNMQTTMessageBatchCreator, MNMessageSenderExtensionController, FBReachabilityAnnouncer, NSObject, NSMutableDictionary, NSString;

@interface MNMessageSendRequestCoordinator : NSObject <FBGraphMessageSendListening, MNMessageSenderExtensionDelegate, MNMessageSendStateMachineSendRequester, MNMessageSyncEventListening> {

	FBGraphMessageSendRequestRunner* _graphSendRequestRunner;
	id<FBMessageOutgoingAttachmentPreparing> _attachmentPreparer;
	id<MNMessageSendAttachmentContextProvider> _attachmentContextProvider;
	id<MNMessageSendMQTTAdapting> _mqttSender;
	MNMQTTMessageBatchCreator* _mqttMessageBatchCreator;
	MNMessageSenderExtensionController* _extensionSender;
	id<MNMessageSendRequestCoordinatorListening> _requestCoordinatorListener;
	FBReachabilityAnnouncer* _reachabilityAnnouncer;
	id<MNMessageSendAttachmentProgressListening> _attachmentProgressListener;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _stateMachinesByOfflineThreadingId;
	NSMutableDictionary* _graphSendRequestsByOfflineThreadingId;
	NSMutableDictionary* _attachmentPrepareOperationsByOfflineThreadingId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)graphMessageSendRequestRunnerWillSendMessage:(id)arg1 ;
-(void)graphMessageSendRequestRunnerDidUpdateProgressForMessage:(id)arg1 didUpdateUploadProgress:(double)arg2 ;
-(void)graphMessageSendRequestRunnerDidSendMessage:(id)arg1 messageId:(id)arg2 ;
-(void)graphMessageSendRequestRunnerDidCancelSendingMessage:(id)arg1 ;
-(void)graphMessageSendRequestRunnerCouldNotSendMessage:(id)arg1 error:(id)arg2 ;
-(void)graphMessageSendRequestRunnerWillRetrySendingMessage:(id)arg1 ;
-(void)messageDidSyncViaSyncProtocol:(id)arg1 messageId:(id)arg2 ;
-(void)messageDidSyncViaThreadFetch:(id)arg1 messageId:(id)arg2 ;
-(void)messageDidSyncViaOmnistore:(id)arg1 messageId:(id)arg2 ;
-(id)_sendingContextForMessage:(id)arg1 shouldTreatAsBatchHeadIfPossible:(BOOL)arg2 previousError:(id)arg3 ;
-(id)_stateMachineFromMessage:(id)arg1 ;
-(void)_mqttMessageDidPublish:(id)arg1 ;
-(void)_mqttMessageDidSucceed:(id)arg1 ;
-(void)_mqttMessage:(id)arg1 didFailWithError:(id)arg2 shouldTreatAsBatchHeadIfPossible:(BOOL)arg3 lastMessageInBatch:(BOOL)arg4 ;
-(void)sendMessageViaMQTT:(id)arg1 preparedAttachment:(id)arg2 ;
-(void)_mqttMessageBatchDidPublish:(id)arg1 ;
-(void)_mqttMessageBatchDidFinish:(id)arg1 results:(id)arg2 ;
-(void)_message:(id)arg1 preparationProgressDidChange:(double)arg2 ;
-(void)_messageAttachmentPreparationDidSucceed:(id)arg1 withPreparedAttachment:(id)arg2 ;
-(void)_messageAttachmentPreparationDidFail:(id)arg1 error:(id)arg2 isRetriable:(BOOL)arg3 ;
-(void)extension:(id)arg1 didSendMessage:(id)arg2 ;
-(void)extension:(id)arg1 didFailToSendMessage:(id)arg2 error:(id)arg3 ;
-(void)sendMessageViaExtension:(id)arg1 preparedAttachment:(id)arg2 ;
-(void)sendMessageBatchViaMQTTBeginningWithMessage:(id)arg1 maxBatchSize:(unsigned long long)arg2 ;
-(void)sendMessageViaGraph:(id)arg1 preparedAttachment:(id)arg2 ;
-(void)retryMessage:(id)arg1 ;
-(void)prepareAttachment:(id)arg1 forMessage:(id)arg2 ;
-(id)initWithGraphRequestRunner:(id)arg1 attachmentPreparer:(id)arg2 attachmentContextProvider:(id)arg3 mqttSender:(id)arg4 mqttMessageBatchCreator:(id)arg5 extensionSender:(id)arg6 reachabilityAnnouncer:(id)arg7 attachmentProgressListener:(id)arg8 requestCoordinatorListener:(id)arg9 queue:(id)arg10 ;
-(void)prepareSendingMessageWithStateMachine:(id)arg1 ;
-(void)prepareSendingMessageWithOfflineThreadingId:(id)arg1 ;
-(void)beginSendingMessageWithOfflineThreadingId:(id)arg1 ;
-(void)finishSendingMessageWithOfflineThreadingId:(id)arg1 ;
-(void)cancelSendingMessageWithOfflineThreadingId:(id)arg1 ;
-(void)cancelMessage:(id)arg1 ;
@end

