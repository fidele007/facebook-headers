/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBNotificationsStoryPrefetchConfiguration : FBValueObject <NSCopying> {

	NSString* _notificationGraphQLID;
	NSString* _storyGraphQLID;
	long long _requestPriority;

}

@property (nonatomic,copy,readonly) NSString * notificationGraphQLID;              //@synthesize notificationGraphQLID=_notificationGraphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSString * storyGraphQLID;                     //@synthesize storyGraphQLID=_storyGraphQLID - In the implementation block
@property (nonatomic,readonly) long long requestPriority;                          //@synthesize requestPriority=_requestPriority - In the implementation block
-(NSString *)storyGraphQLID;
-(NSString *)notificationGraphQLID;
-(id)initWithNotificationGraphQLID:(id)arg1 storyGraphQLID:(id)arg2 requestPriority:(long long)arg3 ;
-(long long)requestPriority;
@end

