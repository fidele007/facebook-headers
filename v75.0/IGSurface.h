/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:02 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/IGSurfaceInputType.h>

@class EAGLContext, NSString;

@interface IGSurface : NSObject <IGSurfaceInputType> {

	unsigned _texture;
	unsigned _framebuffer;
	unsigned _renderbuffer;
	unsigned _internalFormat;
	unsigned _format;
	unsigned long long _planeIndex;
	BOOL _generatedTexture;
	CVOpenGLESTextureCacheRef _textureCache;
	CVBufferRef _cvTexture;
	EAGLContext* _glContext;
	CAEAGLLayer* _layer;
	CGSize _size;
	BOOL _layerRenderBufferStorageNeedsRefresh;
	unsigned char _flipped;
	unsigned _textureTarget;
	CVBufferRef _pixelBuffer;

}

@property (nonatomic,readonly) unsigned texture; 
@property (nonatomic,readonly) unsigned textureTarget;                              //@synthesize textureTarget=_textureTarget - In the implementation block
@property (nonatomic,readonly) unsigned framebuffer; 
@property (nonatomic,readonly) unsigned renderbuffer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CVBufferRef pixelBuffer;                             //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (nonatomic,readonly) CGSize size;                                         //@synthesize size=_size - In the implementation block
@property (getter=isFlipped,nonatomic,readonly) unsigned char flipped;              //@synthesize flipped=_flipped - In the implementation block
@property (nonatomic,readonly) BOOL isConsumable; 
-(id)initWithPixelBuffer:(CVBufferRef)arg1 ;
-(id)initWithIGTexture:(id)arg1 ;
-(id)initWithTexture:(unsigned)arg1 target:(unsigned)arg2 size:(CGSize)arg3 ;
-(id)initWithTexture:(unsigned)arg1 size:(CGSize)arg2 ;
-(id)initWithFramebuffer:(unsigned)arg1 size:(CGSize)arg2 ;
-(BOOL)isConsumable;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 textureInternalFormat:(int)arg2 textureFormat:(unsigned)arg3 planeIndex:(unsigned long long)arg4 ;
-(CVBufferRef)pixelBuffer;
-(CGSize)size;
-(void)dealloc;
-(id)initWithSize:(CGSize)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)present;
-(id)initWithLayer:(CAEAGLLayer*)arg1 ;
-(unsigned)texture;
-(unsigned)textureTarget;
-(unsigned char)isFlipped;
-(unsigned)framebuffer;
-(unsigned)renderbuffer;
@end

