/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSString, SYNReminder, NSDate;

@interface SYNReminderNotification : NSObject {

	shared_ptr<Sync::LocalReminderNotificationData>* _nativeReminderData;

}

@property (nonatomic,copy,readonly) NSString * objectUUID; 
@property (nonatomic,readonly) SYNReminder * reminder; 
@property (nonatomic,readonly) NSDate * notificationDate; 
@property (nonatomic,readonly) BOOL isRead; 
@property (nonatomic,readonly) BOOL isSeen; 
-(id)initWithLocalReminderNotification:(const shared_ptr<Sync::LocalReminderNotificationData>*)arg1 ;
-(SYNReminder *)reminder;
-(NSString *)objectUUID;
-(NSDate *)notificationDate;
-(BOOL)isSeen;
-(BOOL)isRead;
@end
