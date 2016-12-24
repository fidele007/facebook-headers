/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/RCTSGImage.h>

@class RCTSGRenderer;

@interface RCTSGLayer : RCTSGImage {

	unsigned _framebuffer;
	unsigned _texture;
	unsigned _depthRenderbuffer;
	RCTSGDynamicList _bindingBuffer;
	RCTSGRenderer* _renderer;

}
-(void)renderGather:(RCTSGRenderContext*)arg1 sgview:(id)arg2 matrixStack:(RCTSGMatrix*)arg3 ;
-(void)setupFramebufferWithWidth:(int)arg1 andHeight:(int)arg2 ;
-(void)dealloc;
-(id)init;
@end

