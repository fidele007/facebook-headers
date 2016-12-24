/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSThread.h>

@protocol OS_dispatch_group;
@class NSObject, NSRunLoop;

@interface _RCTSRRunLoopThread : NSThread {

	NSObject*<OS_dispatch_group> _waitGroup;
	NSRunLoop* _runLoop;

}

@property (nonatomic,readonly) NSRunLoop * runLoop;              //@synthesize runLoop=_runLoop - In the implementation block
-(NSRunLoop *)runLoop;
-(id)init;
-(void)main;
-(void)step;
@end
