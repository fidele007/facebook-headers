/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:02 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface FBMemoryHog : NSObject {

	NSObject*<OS_dispatch_source> _notificationSource;
	NSObject*<OS_dispatch_source> _allocationSource;
	int _allocatedBytes;

}

@property (readonly) unsigned long long allocatedBytes; 
+(id)startWithNotificationHandler:(/*^block*/id)arg1 ;
-(id)initWithNotificationSource:(id)arg1 ;
-(unsigned long long)allocatedBytes;
-(void)cancel;
-(void)dealloc;
-(void)start;
@end

