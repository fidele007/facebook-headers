/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBFriendConfirmedNotificationMQTTListener.h>

@protocol FBFriendConfirmedNotificationUnseenCountDelegate;
@class FBUserSession, FBFriendConfirmedNotificationMQTTBroadcaster, NSString;

@interface FBFriendConfirmedNotificationsUnseenCountDataSource : NSObject <FBFriendConfirmedNotificationMQTTListener> {

	FBUserSession* _session;
	FBFriendConfirmedNotificationMQTTBroadcaster* _friendConfirmedNotificationMQTTBroadcaster;
	unsigned long long _unseenCount;
	id<FBFriendConfirmedNotificationUnseenCountDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBFriendConfirmedNotificationUnseenCountDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long unseenCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_loadFinishedWithResponse:(id)arg1 andError:(id)arg2 ;
-(void)friendConfirmedNotificationRecieved;
-(void)loadUnseenCount;
-(unsigned long long)unseenCount;
-(void)clearLocalUnseenCount;
-(void)setDelegate:(id<FBFriendConfirmedNotificationUnseenCountDelegate>)arg1 ;
-(void)dealloc;
-(id<FBFriendConfirmedNotificationUnseenCountDelegate>)delegate;
-(id)initWithSession:(id)arg1 ;
@end

