/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <Facebook/Facebook-Structs.h>
@class NSObject, NSThread, JSContext;

@interface RCTJSContextProvider : NSObject {

	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSThread* _javaScriptThread;
	JSContext* _context;
	BOOL _useCustomJSCLibrary;
	BOOL _tryBytecode;

}

@property (nonatomic,readonly) BOOL useCustomJSCLibrary;              //@synthesize useCustomJSCLibrary=_useCustomJSCLibrary - In the implementation block
@property (nonatomic,readonly) BOOL tryBytecode;                      //@synthesize tryBytecode=_tryBytecode - In the implementation block
-(BOOL)useCustomJSCLibrary;
-(BOOL)tryBytecode;
-(id)initWithUseCustomJSCLibrary:(BOOL)arg1 tryBytecode:(BOOL)arg2 ;
-(RCTJSContextData)data;
-(void)_createContext;
@end
