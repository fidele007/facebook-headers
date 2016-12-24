/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMessengerInboxCountsListener.h>
#import <Facebook/FBMessagesJewelBadgeCountTypeListener.h>
#import <Facebook/FBMessengerRedirectionBadgingControllerListener.h>
#import <Facebook/FBMessengerDiodeBadgeableQPCountManagerListener.h>
#import <Facebook/FBJewelNetworkDataSource.h>

@class FBMessengerInboxCountsManager, FBMessengerInboxCounts, FBMessengerDiodeBadgeableQPCountManager, FBMessagesJewelBadgeCountTypeManager, FBMessengerRedirectionBadgingController, NSString;

@interface FBMessagesJewelNetworkDataSource : NSObject <FBMessengerInboxCountsListener, FBMessagesJewelBadgeCountTypeListener, FBMessengerRedirectionBadgingControllerListener, FBMessengerDiodeBadgeableQPCountManagerListener, FBJewelNetworkDataSource> {

	FBMessengerInboxCountsManager* _inboxCountsManager;
	FBMessengerInboxCounts* _latestInboxCounts;
	long long _latestMessengerDiodeBadgeableQPCount;
	FBMessengerDiodeBadgeableQPCountManager* _messengerDiodeBadgeableQPCountManager;
	FBMessagesJewelBadgeCountTypeManager* _badgeCountTypeManager;
	FBMessengerRedirectionBadgingController* _messengerRedirectionBadgingController;
	BOOL _mqttDisconnectionDetectedAfterLastFetch;
	BOOL _needsReload;
	unsigned long long _badgeCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long badgeCount;              //@synthesize badgeCount=_badgeCount - In the implementation block
@property (assign,nonatomic) BOOL needsReload;                             //@synthesize needsReload=_needsReload - In the implementation block
-(void)reloadDataWithReason:(long long)arg1 ;
-(id)initWithInboxCountsManager:(id)arg1 messengerDiodeBadgeableQPCountManager:(id)arg2 badgeCountTypeManager:(id)arg3 messengerRedirectionBadgingController:(id)arg4 ;
-(void)messagesJewelBadgeCountTypeDidUpdate;
-(void)onMQTTConnectedChanged:(id)arg1 ;
-(void)messengerInboxCountsDidUpdate:(id)arg1 ;
-(void)didUpdateShouldBadgeWithRedirectionErrorIndicator;
-(void)messengerDiodeBadgeableQPCountDidUpdate:(long long)arg1 ;
-(id)initWithInboxCountsManager:(id)arg1 ;
-(void)dealloc;
-(void)setNeedsReload:(BOOL)arg1 ;
-(void)cancelAllRequests;
-(BOOL)needsReload;
-(void)setBadgeCount:(unsigned long long)arg1 ;
-(unsigned long long)badgeCount;
@end

