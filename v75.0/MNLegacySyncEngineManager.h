/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/MNLegacySyncEngineManaging.h>

@class FBMessengerSyncEngineManager;

@interface MNLegacySyncEngineManager : NSObject <MNLegacySyncEngineManaging> {

	FBMessengerSyncEngineManager* _syncEngineManager;

}
-(id)initWithSyncEngineManager:(id)arg1 ;
-(void)startSyncEngineManager;
-(void)beginUserSync;
-(void)beginPresenceSync;
-(void)stopSyncEngineManager;
-(void)forceFullUserSync;
-(void)forceDeltaUserSync;
-(void)forceSyncForUserWithId:(id)arg1 ;
-(void)cancelUserSync;
-(BOOL)userSyncPending;
-(void)cancelPresenceSync;
-(BOOL)presenceSyncPending;
-(BOOL)storeRebuildPending;
@end
