/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface RTCVideoSnapshotRequest : NSObject {

	/*^block*/id _onComplete;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	double _timeout;

}

@property (nonatomic,readonly) double timeout;              //@synthesize timeout=_timeout - In the implementation block
+(id)snapshotRequestWithTimeout:(double)arg1 callBackQueue:(id)arg2 onComplete:(/*^block*/id)arg3 ;
-(void)onAbort;
-(id)initWithTimeout:(double)arg1 callBackQueue:(id)arg2 onComplete:(/*^block*/id)arg3 ;
-(void)_onComplete:(id)arg1 ;
-(void)onSnapshot:(id)arg1 ;
-(double)timeout;
@end
