/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBFXEffect.h>

@interface FBFXIdentityEffect : FBFXEffect {

	TextureShader _shader;
	unsigned _geometry;

}
-(void)renderWithRect:(CGRect)arg1 transform:(tmat4x4<float>)arg2 texture:(unsigned)arg3 texCoordExtent:(TexCoordExtent)arg4 alpha:(float)arg5 ;
-(void)teardown;
@end

