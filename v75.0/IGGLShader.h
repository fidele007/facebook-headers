/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:02 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IGContext;

@interface IGGLShader : NSObject {

	unsigned _shaderId;
	IGContext* _context;

}

@property (assign,nonatomic,__weak) IGContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) unsigned shaderId;                     //@synthesize shaderId=_shaderId - In the implementation block
-(id)initVertexShaderWithSource:(id)arg1 ;
-(id)initFragmentShaderWithSource:(id)arg1 ;
-(id)initShaderWithSource:(id)arg1 type:(long long)arg2 ;
-(unsigned)shaderId;
-(void)dealloc;
-(IGContext *)context;
-(void)setContext:(IGContext *)arg1 ;
@end

