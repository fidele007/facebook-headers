/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBVideoCreativeToolsLoggerProtocol.h>
#import <Facebook/FBFacecastWithLoggerProtocol.h>

@protocol FBFacecastBroadcastLoggerDataSource;
@class FBFacecastLogger, NSString;

@interface FBFacecastBroadcastLogger : NSObject <FBVideoCreativeToolsLoggerProtocol, FBFacecastWithLoggerProtocol> {

	FBFacecastLogger* _logger;
	id<FBFacecastBroadcastLoggerDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<FBFacecastBroadcastLoggerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_targetType;
-(void)logDidEnterCommentComposerWithExtras:(id)arg1 ;
-(void)logDidCommitCommentComposerWithExtras:(id)arg1 ;
-(id)_broadcastID;
-(void)logCreativeTool:(id)arg1 mainAction:(id)arg2 ;
-(void)logCreativeTool:(id)arg1 changedVisibility:(BOOL)arg2 extraBlock:(/*^block*/id)arg3 ;
-(id)_extrasForDidChangeInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 ;
-(id)_extrasForCurrentOrientation;
-(void)_logEvent:(id)arg1 extraBlock:(/*^block*/id)arg2 ;
-(id)_extrasForDidChangeVideoOrientation:(long long)arg1 toVideoOrientation:(long long)arg2 ;
-(id)_extrasForRTCEvent:(id)arg1 facecastEventExtra:(id)arg2 ;
-(id)_extrasForStabilizationModeChanged;
-(id)_mutableClientStatus;
-(id)_extrasForCaptureSessionInterruptedWithReason:(id)arg1 ;
-(id)_extrasForRecordingStartedWithCompositionState:(id)arg1 ;
-(id)_videoAspectRatioStringFromSize:(CGSize)arg1 ;
-(void)_addDurationIfSpeedTestEvent:(id)arg1 toExtra:(id)arg2 ;
-(void)_addError:(id)arg1 toExtra:(id)arg2 ;
-(id)_extrasForError:(id)arg1 ;
-(id)_extrasForDisconnecting;
-(id)_extrasForCammeraFlippedWithPosition:(long long)arg1 ;
-(void)_logBroadcastExitEvent:(id)arg1 compositionState:(id)arg2 broadcastDuration:(double)arg3 shouldDeleteVideo:(BOOL)arg4 shouldOrHasSavedVideo:(BOOL)arg5 shouldUploadVideo:(BOOL)arg6 uploadingVideoAutomatically:(BOOL)arg7 shouldChangePrivacySetting:(BOOL)arg8 resultingEdits:(id)arg9 ;
-(void)_logFakeTransitionTo:(id)arg1 error:(id)arg2 ;
-(void)logCreativeTool:(id)arg1 mainAction:(id)arg2 objectId:(id)arg3 extraBlock:(/*^block*/id)arg4 ;
-(void)logCreativeTool:(id)arg1 toolbarButtonPressed:(id)arg2 extraBlock:(/*^block*/id)arg3 ;
-(void)logCreativeTool:(id)arg1 changedVisibility:(BOOL)arg2 ;
-(void)logCreativeTool:(id)arg1 toolbarButtonPressed:(id)arg2 ;
-(void)logRtcCallEvent:(id)arg1 participantID:(id)arg2 transitioningFromState:(id)arg3 toState:(id)arg4 ;
-(void)logRTCCallEndedWithReason:(id)arg1 subreason:(id)arg2 remoteEnded:(BOOL)arg3 ;
-(void)logRTCCallStarted;
-(void)logDidChangeInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 ;
-(void)logDidChangeVideoOrientation:(long long)arg1 toVideoOrientation:(long long)arg2 ;
-(void)logShouldRotateWithExtras:(id)arg1 ;
-(void)logStabilizationModeChanged;
-(void)logCaptureSessionInterruptedWithReason:(id)arg1 ;
-(void)logCaptureSessionInterruptionEnded;
-(void)logRecordingStartedWithCompositionState:(id)arg1 videoDimension:(CGSize)arg2 ;
-(void)logTransitionFromState:(long long)arg1 toState:(long long)arg2 reason:(id)arg3 error:(id)arg4 ;
-(void)logDisconnecting;
-(void)logCammeraFlippedWithPosition:(long long)arg1 ;
-(void)logImmediateVideoDeletionWithNetworkFailureTally:(unsigned long long)arg1 broadcastDuration:(double)arg2 ;
-(void)logPostBroadcastExitWithCompositionState:(id)arg1 broadcastDuration:(double)arg2 shouldDeleteVideo:(BOOL)arg3 shouldOrHasSavedVideo:(BOOL)arg4 shouldUploadVideo:(BOOL)arg5 uploadingVideoAutomatically:(BOOL)arg6 shouldChangePrivacySetting:(BOOL)arg7 resultingEdits:(id)arg8 ;
-(void)logPreBroadcastExitWithCompositionState:(id)arg1 broadcastDuration:(double)arg2 shouldDeleteVideo:(BOOL)arg3 shouldOrHasSavedVideo:(BOOL)arg4 shouldUploadVideo:(BOOL)arg5 uploadingVideoAutomatically:(BOOL)arg6 shouldChangePrivacySetting:(BOOL)arg7 resultingEdits:(id)arg8 ;
-(void)logStatsWithClientStatus:(id)arg1 ;
-(void)logSessionDisconnectedWithSendEndOfStreamError:(id)arg1 ;
-(void)logSealRequestStarted;
-(void)logSealRequestSucceeded;
-(void)logSealRequestFailed:(id)arg1 ;
-(void)logApplicationLifeCycleChangeWithNotification:(id)arg1 ;
-(void)logInterruptionNotificationScheduled;
-(void)logInterruptionNotificationCancelled;
-(void)logUserReturnedViaInterruptionNotification;
-(void)logOutOfBandMessageSucceeded:(id)arg1 ;
-(void)logOutOfBandMessageFailed:(id)arg1 withError:(id)arg2 ;
-(void)logGeotargetingEvent:(id)arg1 withExtraData:(id)arg2 ;
-(void)setDataSource:(id<FBFacecastBroadcastLoggerDataSource>)arg1 ;
-(id)init;
-(id<FBFacecastBroadcastLoggerDataSource>)dataSource;
-(void)logError:(id)arg1 ;
@end
