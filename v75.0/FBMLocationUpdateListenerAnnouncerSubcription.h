/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMLocationUpdateListener, OS_dispatch_queue;
@class NSObject;

@interface FBMLocationUpdateListenerAnnouncerSubcription : NSObject {

	id<FBMLocationUpdateListener> _listener;
	NSObject*<OS_dispatch_queue> _listenerQueue;

}

@property (__weak,readonly) id<FBMLocationUpdateListener> listener;              //@synthesize listener=_listener - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> listenerQueue;                 //@synthesize listenerQueue=_listenerQueue - In the implementation block
-(id)initWithListener:(id)arg1 listenerQueue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)listenerQueue;
-(id<FBMLocationUpdateListener>)listener;
@end

