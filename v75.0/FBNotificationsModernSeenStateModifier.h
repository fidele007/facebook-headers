/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNotificationsSeenStateModifying.h>

@protocol FBNotificationsSeenNotificationMemModelConstructing, FBNotificationsSeenStateModifierLogging;
@class FBNotificationsModernSeenStateModifierConfiguration, FBGraphQLConsistentLookasideCache, FBUserSession, NSString;

@interface FBNotificationsModernSeenStateModifier : NSObject <FBNotificationsSeenStateModifying> {

	FBNotificationsModernSeenStateModifierConfiguration* _configuration;
	id<FBNotificationsSeenNotificationMemModelConstructing> _seenNotificationMemModelFactory;
	FBGraphQLConsistentLookasideCache* _consistentLookasideCache;
	FBUserSession* _session;
	id<FBNotificationsSeenStateModifierLogging> _logger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)markNotificationAsRead:(id)arg1 ;
-(void)markNotificationsAsSeen:(id)arg1 ;
-(void)markPushNotificationAsRead:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 consistentLookasideCache:(id)arg2 logger:(id)arg3 seenNotificationMemModelFactory:(id)arg4 session:(id)arg5 ;
-(void)_markNotificationAsRead:(id)arg1 markReadLocally:(BOOL)arg2 ;
-(void)_markNotificationsAsSeenLocally:(id)arg1 ;
-(id)_notificationIdsFromNotifications:(id)arg1 ;
@end

