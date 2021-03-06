/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FNFPlayerRenderer.h>
#import <Facebook/FNF360RendererProtocol.h>

@class CBDRenderer, FNF360Renderer, NSString;

@interface FNFCardboardRenderer : NSObject <FNFPlayerRenderer, FNF360RendererProtocol> {

	CBDRenderer* _cardboardRenderer;
	FNF360Renderer* _fnf360Renderer;

}

@property (assign,nonatomic,__weak) FNF360Renderer * fnf360Renderer;              //@synthesize fnf360Renderer=_fnf360Renderer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDrawFrameCallback:(/*^block*/id)arg1 ;
-(void)set360Renderer:(id)arg1 ;
-(void)setCardboardParameters:(id)arg1 ;
-(void)setViewMatrix:(GLKMatrix4)arg1 fovY:(double)arg2 ;
-(BOOL)shouldRenderWhilePlaybackPaused;
-(BOOL)setupGLState;
-(BOOL)drawFrame:(BOOL)arg1 presentationRect:(CGSize)arg2 backingWidth:(int)arg3 backingHeight:(int)arg4 frameBuffer:(unsigned)arg5 videoGravity:(id)arg6 rotation:(double)arg7 layerBounds:(CGRect)arg8 transform:(CGAffineTransform)arg9 colorConversion:(const float*)arg10 ;
-(void)restoreGLState;
-(void)processPixelBuffer:(CVBufferRef)arg1 ;
-(void)_beforeDrawFrame:(id)arg1 backingWidth:(int)arg2 backingHeight:(int)arg3 colorConversion:(const float*)arg4 ;
-(FNF360Renderer *)fnf360Renderer;
-(void)setFnf360Renderer:(FNF360Renderer *)arg1 ;
-(void)invalidate;
@end

