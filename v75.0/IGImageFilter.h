/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:02 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/IGGLFilter.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IGImageFilter : IGGLFilter <NSCopying> {

	BOOL _needsConfigure;
	BOOL _flip;
	double _strength;
	NSString* _fullFragmentShader;
	long long _inputPixelFormat;
	GLKMatrix4 _contentTransform;
	GLKMatrix4 _textureTransform;

}

@property (assign,nonatomic) BOOL flip;                                 //@synthesize flip=_flip - In the implementation block
@property (assign,nonatomic) _GLKMatrix4 contentTransform;              //@synthesize contentTransform=_contentTransform - In the implementation block
@property (assign,nonatomic) _GLKMatrix4 textureTransform;              //@synthesize textureTransform=_textureTransform - In the implementation block
@property (assign,nonatomic) double strength;                           //@synthesize strength=_strength - In the implementation block
@property (nonatomic,copy) NSString * fullFragmentShader;               //@synthesize fullFragmentShader=_fullFragmentShader - In the implementation block
@property (assign,nonatomic) long long inputPixelFormat;                //@synthesize inputPixelFormat=_inputPixelFormat - In the implementation block
+(id)filterName;
+(long long)filterType;
-(void)setContentTransform:(_GLKMatrix4)arg1 ;
-(void)setTextureTransform:(_GLKMatrix4)arg1 ;
-(long long)inputPixelFormat;
-(id)fullVertexShader;
-(NSString *)fullFragmentShader;
-(id)fragmentFunctions;
-(void)configureProgram:(id)arg1 ;
-(_GLKMatrix4)contentTransform;
-(_GLKMatrix4)textureTransform;
-(void)setFlip:(BOOL)arg1 ;
-(void)setFullFragmentShader:(NSString *)arg1 ;
-(id)generateFullFragmentShader;
-(id)fragmentShaderPrecision;
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(id)strengthShaderCode;
-(void)setInputPixelFormat:(long long)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)flip;
-(double)strength;
-(void)setStrength:(double)arg1 ;
-(id)vertexShader;
-(id)fragmentShader;
@end

