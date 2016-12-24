/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNotificationsSyncManagerListener.h>
#import <Facebook/FBNotificationsSectionsChangeTriggering.h>

@class FBNotificationsSyncManager, FBNotificationsSectionsChangeTriggeringListenerAnnouncer, NSString;

@interface FBNotificationsSectionsChangePTRTrigger : NSObject <FBNotificationsSyncManagerListener, FBNotificationsSectionsChangeTriggering> {

	FBNotificationsSyncManager* _syncManager;
	FBNotificationsSectionsChangeTriggeringListenerAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)notificationsSyncManager:(id)arg1 didFinishLoading:(unsigned long long)arg2 withLoadDataReason:(long long)arg3 changeset:(id)arg4 ;
-(id)initWithSyncManager:(id)arg1 ;
-(void)addChangeTriggeringListener:(id)arg1 ;
-(void)removeChangeTriggeringListener:(id)arg1 ;
-(void)dealloc;
@end
