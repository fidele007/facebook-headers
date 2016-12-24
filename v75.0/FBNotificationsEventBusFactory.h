/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:02 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@interface FBNotificationsEventBusFactory : NSObject {

	mutex _eventBusesLock;
	unordered_map<FBNotificationsEventBusFactoryKey, FBNotificationsEventBus *, std::__1::hash<FBNotificationsEventBusFactoryKey>, std::__1::equal_to<FBNotificationsEventBusFactoryKey>, std::__1::allocator<std::__1::pair<const FBNotificationsEventBusFactoryKey, FBNotificationsEventBus *> > >* _eventBuses;

}
-(id)eventBusWithNotificationGraphQLID:(id)arg1 ;
@end
