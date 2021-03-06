/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/RCTBridgeModule.h>

@class RCTSGGLContext, EAGLContext, RCTBridge, NSString;

@interface RCTSGProgramManager : NSObject <RCTBridgeModule> {

	RCTSGGLContext* _SGGLContext;
	EAGLContext* _context;
	RCTBridge* _bridge;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__1050;
+(id)__rct_export__1271;
+(void)load;
-(unsigned)compileShader:(const char*)arg1 withType:(unsigned)arg2 ;
-(void)errorReport;
-(void)lazyCreateContexts;
-(unsigned)compileShaders:(const char*)arg1 fragment:(const char*)arg2 ;
-(void)createProgram:(id)arg1 vertex:(id)arg2 fragment:(id)arg3 callback:(/*^block*/id)arg4 ;
-(void)deleteProgram:(id)arg1 ;
-(RCTBridge *)bridge;
@end

