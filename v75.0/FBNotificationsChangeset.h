/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FBNotificationsChangeset : NSObject {

	NSArray* _notificationsAfterChangeset;
	NSArray* _addedNotifications;
	NSArray* _removedNotificationIDs;
	NSArray* _updatedNotifications;

}

@property (nonatomic,copy,readonly) NSArray * notificationsAfterChangeset;              //@synthesize notificationsAfterChangeset=_notificationsAfterChangeset - In the implementation block
@property (nonatomic,copy,readonly) NSArray * addedNotifications;                       //@synthesize addedNotifications=_addedNotifications - In the implementation block
@property (nonatomic,copy,readonly) NSArray * removedNotificationIDs;                   //@synthesize removedNotificationIDs=_removedNotificationIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * updatedNotifications;                     //@synthesize updatedNotifications=_updatedNotifications - In the implementation block
-(NSArray *)addedNotifications;
-(NSArray *)updatedNotifications;
-(NSArray *)removedNotificationIDs;
-(id)initWithNotificationsAfterChangeset:(id)arg1 addedNotifications:(id)arg2 removedNotificationIDs:(id)arg3 updatedNotifications:(id)arg4 ;
-(NSArray *)notificationsAfterChangeset;
@end
