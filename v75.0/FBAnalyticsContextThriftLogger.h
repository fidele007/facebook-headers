/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSMutableArray;

@interface FBAnalyticsContextThriftLogger : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _logDirectoryPath;
	NSMutableArray* _pendingThriftEvents;
	NSString* _sessionID;

}

@property (nonatomic,readonly) unsigned long long numOfPendingThriftEvents; 
-(void)_writePendingEventBatchToFile:(id)arg1 ;
-(id)initWithQueue:(id)arg1 logDirectoryPath:(id)arg2 sessionID:(id)arg3 ;
-(unsigned long long)numOfPendingThriftEvents;
-(void)addPendingThriftEvent:(id)arg1 module:(id)arg2 uuid:(id)arg3 extraData:(id)arg4 userID:(id)arg5 timestamp:(double)arg6 ;
-(void)savePendingThriftEventsToBatchWithAppID:(id)arg1 appVersion:(id)arg2 sessionSequence:(unsigned long long)arg3 timestamp:(double)arg4 ;
@end
