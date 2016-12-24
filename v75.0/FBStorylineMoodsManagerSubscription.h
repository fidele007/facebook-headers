/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBStorylineMoodsManagerListener, OS_dispatch_queue;
@class NSObject;

@interface FBStorylineMoodsManagerSubscription : NSObject {

	id<FBStorylineMoodsManagerListener> _listener;
	NSObject*<OS_dispatch_queue> _performer;

}

@property (nonatomic,__weak,readonly) id<FBStorylineMoodsManagerListener> listener;              //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> performer;                           //@synthesize performer=_performer - In the implementation block
-(NSObject*<OS_dispatch_queue>)performer;
-(id)initWithListener:(id)arg1 performer:(id)arg2 ;
-(id<FBStorylineMoodsManagerListener>)listener;
@end
