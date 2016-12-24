/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString;

@interface FNFGLProgram : NSObject {

	NSMutableArray* _attributes;
	unsigned _program;
	unsigned _vertexShader;
	unsigned _fragmentShader;
	BOOL _initialized;
	NSString* _vertexShaderLog;
	NSString* _fragmentShaderLog;
	NSString* _programLog;

}

@property (nonatomic,readonly) BOOL initialized;                               //@synthesize initialized=_initialized - In the implementation block
@property (nonatomic,copy,readonly) NSString * vertexShaderLog;                //@synthesize vertexShaderLog=_vertexShaderLog - In the implementation block
@property (nonatomic,copy,readonly) NSString * fragmentShaderLog;              //@synthesize fragmentShaderLog=_fragmentShaderLog - In the implementation block
@property (nonatomic,copy,readonly) NSString * programLog;                     //@synthesize programLog=_programLog - In the implementation block
-(id)initWithVertexShader:(const char*)arg1 fragmentShader:(const char*)arg2 ;
-(NSString *)programLog;
-(NSString *)fragmentShaderLog;
-(NSString *)vertexShaderLog;
-(int)uniformIndex:(const char*)arg1 ;
-(void)use;
-(BOOL)validate;
-(BOOL)link;
-(unsigned)addAttribute:(id)arg1 ;
-(BOOL)initialized;
@end

