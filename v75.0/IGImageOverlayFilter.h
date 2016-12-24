/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:02 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/IGImageFilter.h>

@class IGSurface;

@interface IGImageOverlayFilter : IGImageFilter {

	IGSurface* _overlay;
	BOOL _ignoreTextureTransform;

}

@property (assign,nonatomic) CVBufferRef overlay; 
@property (assign,nonatomic) BOOL ignoreTextureTransform;              //@synthesize ignoreTextureTransform=_ignoreTextureTransform - In the implementation block
-(void)setTextureTransform:(_GLKMatrix4)arg1 ;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 ;
-(void)configureProgram:(id)arg1 ;
-(BOOL)ignoreTextureTransform;
-(void)setIgnoreTextureTransform:(BOOL)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CVBufferRef)overlay;
-(id)fragmentShader;
-(void)setOverlay:(CVBufferRef)arg1 ;
-(id)samplers;
@end

