/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class FBUserSession, NSObject;

@interface FBQuickPromotionDebugLogger : NSObject {

	FBUserSession* _session;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)_extraDataForPromotion:(id)arg1 ;
-(void)logEvent:(id)arg1 promotion:(id)arg2 extraData:(id)arg3 ;
-(id)initWithSession:(id)arg1 ;
-(BOOL)_shouldLog;
@end
