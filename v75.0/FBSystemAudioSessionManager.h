/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Facebook/Facebook-Structs.h>
@class AVAudioSession, NSObject, NSHashTable, NSMutableDictionary, FBKVOController;

@interface FBSystemAudioSessionManager : NSObject {

	AVAudioSession* _audioSession;
	NSObject*<OS_dispatch_queue> _audioSessionQueue;
	mutex _clientsLock;
	NSHashTable* _clients;
	NSMutableDictionary* _clientsClasses;
	BOOL _interrupted;
	BOOL _routeIsExternal;
	BOOL _routeIsBluetooth;
	int _mutedToken;
	BOOL _muted;
	mutex _statusObserversLock;
	NSHashTable* _statusObservers;
	mutex _errorObserversLock;
	NSHashTable* _errorObservers;
	FBKVOController* _kvoController;
	BOOL _activateVoipSessions;

}

@property (assign,nonatomic) BOOL activateVoipSessions;              //@synthesize activateVoipSessions=_activateVoipSessions - In the implementation block
+(void)propertiesForClients:(id)arg1 routeIsExternal:(BOOL)arg2 muted:(BOOL)arg3 active:(out BOOL*)arg4 activeOptions:(out unsigned long long*)arg5 category:(out id*)arg6 categoryOptions:(out unsigned long long*)arg7 mode:(out id*)arg8 portOverrideOptions:(out unsigned long long*)arg9 ;
+(id)sharedInstance;
-(void)addAudioSessionStatusObserver:(id)arg1 ;
-(void)removeAudioSessionStatusObserver:(id)arg1 ;
-(void)addActiveClient:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeFinishedClient:(id)arg1 ;
-(void)reloadActiveClient:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)hasActiveHighPriorityClient;
-(void)addAudioSessionErrorObserver:(id)arg1 ;
-(void)removeAudioSessionErrorObserver:(id)arg1 ;
-(BOOL)hasHardwareVoiceCallProcessing;
-(void)resetAudioSessionWithRetries:(unsigned long long)arg1 retryInterval:(double)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithAudioSession:(id)arg1 ;
-(void)_registerForAudioRoutes;
-(void)_registerForInterruptions;
-(void)_registerForMuteState;
-(void)_registerForVolumeChanges;
-(void)_validateClients:(id)arg1 clientsClasses:(id)arg2 ;
-(void)dispatchError:(id)arg1 selector:(SEL)arg2 ;
-(void)announceStatusChange:(SEL)arg1 ;
-(void)_notifyActiveClientsOfActivationPriority:(id)arg1 ;
-(void)_updateInterruptedForAddedClient:(id)arg1 updateSucceeded:(BOOL)arg2 ;
-(void)_notifyActiveClientsOfDeactivationPriority:(id)arg1 ;
-(unsigned long long)_priorityForClient:(id)arg1 ;
-(void)_enumerateClientsUsingBlock:(/*^block*/id)arg1 ;
-(void)_interruptionWithNotification:(id)arg1 ;
-(void)_audioRouteChangedWithNotification:(id)arg1 ;
-(void)_updateRouteIsBluetooth;
-(void)_updateRouteIsExternal;
-(void)_updateMuteState;
-(BOOL)activateVoipSessions;
-(void)setActivateVoipSessions:(BOOL)arg1 ;
-(BOOL)isExternal;
-(void)_update:(/*^block*/id)arg1 ;
-(float)outputVolume;
-(BOOL)isBluetooth;
-(BOOL)isMuted;
@end

