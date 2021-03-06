/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBMessengerSyncEngineManager, NSTimer;

@interface FBMChatContextSyncManager : NSObject {

	BOOL _isPeriodicalSyncing;
	BOOL _isObservingNotifications;
	FBUserSession* _session;
	FBMessengerSyncEngineManager* _syncEngineManager;
	NSTimer* _periodicalSyncingTimer;

}

@property (nonatomic,retain) FBUserSession * session;                                       //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FBMessengerSyncEngineManager * syncEngineManager;              //@synthesize syncEngineManager=_syncEngineManager - In the implementation block
@property (nonatomic,retain) NSTimer * periodicalSyncingTimer;                              //@synthesize periodicalSyncingTimer=_periodicalSyncingTimer - In the implementation block
@property (assign,nonatomic) BOOL isPeriodicalSyncing;                                      //@synthesize isPeriodicalSyncing=_isPeriodicalSyncing - In the implementation block
@property (assign,nonatomic) BOOL isObservingNotifications;                                 //@synthesize isObservingNotifications=_isObservingNotifications - In the implementation block
-(void)_onApplicationForeground;
-(id)initWithSession:(id)arg1 syncEngineManager:(id)arg2 ;
-(void)_startObservingNotifications;
-(void)_stopObservingNotifications;
-(void)stopPeriodicalSyncingChatContext;
-(void)startPeriodicalSyncingChatContext;
-(BOOL)_isOptimizationEnabled;
-(void)_startPeriodicalTimer;
-(void)_stopPeriodicalTimer;
-(void)_cancelSync;
-(void)_onApplicationBackground;
-(void)_onLocationChanged;
-(void)_periodicalTimerDidFire:(id)arg1 ;
-(void)setPeriodicalSyncingTimer:(NSTimer *)arg1 ;
-(NSTimer *)periodicalSyncingTimer;
-(BOOL)isPeriodicalSyncing;
-(void)setIsPeriodicalSyncing:(BOOL)arg1 ;
-(BOOL)isObservingNotifications;
-(void)setIsObservingNotifications:(BOOL)arg1 ;
-(FBMessengerSyncEngineManager *)syncEngineManager;
-(void)setSyncEngineManager:(FBMessengerSyncEngineManager *)arg1 ;
-(void)_sync;
-(void)dealloc;
-(void)sync;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end

