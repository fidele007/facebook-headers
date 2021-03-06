/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVCaptureSession.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface FBAVCaptureSessionWithNotifications : AVCaptureSession {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _logname;

}

@property (nonatomic,copy,readonly) NSString * logname;              //@synthesize logname=_logname - In the implementation block
-(id)initWithLogname:(id)arg1 ;
-(NSString *)logname;
-(id)init;
-(void)addInput:(id)arg1 ;
-(void)removeInput:(id)arg1 ;
@end

