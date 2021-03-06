/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBViewerContextClassProvidable.h>

@protocol OS_dispatch_queue;
@class FBDiscardableStoreOpener, FBMessengerSyncEngineManager, FBSyncStore, MNMQTTPersonSyncEventProcessor, FBMChatContextManager, MNUserSettings, MNMQTTPresenceUpdateListeningAnnouncer, FBSyncPresenceUpdater, NSObject, FBDelayer, NSString;

@interface FBDiodeModuleStartupManager : NSObject <FBViewerContextClassProvidable> {

	FBDiscardableStoreOpener* _storeOpener;
	FBMessengerSyncEngineManager* _syncEngineManager;
	FBSyncStore* _syncStore;
	MNMQTTPersonSyncEventProcessor* _personSyncProcessor;
	FBMChatContextManager* _chatContextManager;
	MNUserSettings* _userSettings;
	MNMQTTPresenceUpdateListeningAnnouncer* _presenceMqttUpdateAnnouncer;
	FBSyncPresenceUpdater* _presenceUpdater;
	NSObject*<OS_dispatch_queue> _serialStartupQueue;
	FBDelayer* _startupDelayer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cleanupSession;
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithSyncEngineManager:(id)arg1 storeOpener:(id)arg2 syncStore:(id)arg3 presenceMqttUpdateAnnouncer:(id)arg4 chatContextManager:(id)arg5 userSettings:(id)arg6 presenceUpdater:(id)arg7 ;
-(void)_startSync:(/*^block*/id)arg1 ;
-(void)startupWithFinishedBlock:(/*^block*/id)arg1 ;
-(void)executeBlockAfterStartupComplete:(/*^block*/id)arg1 ;
@end

