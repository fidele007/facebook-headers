/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBNotificationTableViewTraits;

@interface FBPageAdminActivitiesViewControllerTraits : FBValueObject <NSCopying> {

	BOOL _shouldShowCommsHub;
	BOOL _shouldShowPMAUpsell;
	BOOL _isEmbeddedTab;
	unsigned long long _pageMessagesNavigationType;
	FBNotificationTableViewTraits* _notificationTableViewTraits;

}

@property (nonatomic,readonly) unsigned long long pageMessagesNavigationType;                                 //@synthesize pageMessagesNavigationType=_pageMessagesNavigationType - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowCommsHub;                                                       //@synthesize shouldShowCommsHub=_shouldShowCommsHub - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowPMAUpsell;                                                      //@synthesize shouldShowPMAUpsell=_shouldShowPMAUpsell - In the implementation block
@property (nonatomic,copy,readonly) FBNotificationTableViewTraits * notificationTableViewTraits;              //@synthesize notificationTableViewTraits=_notificationTableViewTraits - In the implementation block
@property (nonatomic,readonly) BOOL isEmbeddedTab;                                                            //@synthesize isEmbeddedTab=_isEmbeddedTab - In the implementation block
-(unsigned long long)pageMessagesNavigationType;
-(id)initWithPageMessagesNavigationType:(unsigned long long)arg1 shouldShowCommsHub:(BOOL)arg2 shouldShowPMAUpsell:(BOOL)arg3 notificationTableViewTraits:(id)arg4 isEmbeddedTab:(BOOL)arg5 ;
-(BOOL)shouldShowCommsHub;
-(BOOL)shouldShowPMAUpsell;
-(FBNotificationTableViewTraits *)notificationTableViewTraits;
-(BOOL)isEmbeddedTab;
@end

