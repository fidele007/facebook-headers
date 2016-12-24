/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/RCTSGGroup.h>

@interface RCTSGCamera : RCTSGGroup {

	BOOL _clearDepth;
	BOOL _clearColor;
	int _order;
	int _renderTarget;
	double _depthValue;
	RCTSGRect _viewPort;
	RCTSGRect _clipRect;
	RCTSGVec4 _colorValue;
	RCTSGMatrix _projectionMatrix;

}

@property (assign,nonatomic) RCTSGMatrix projectionMatrix;              //@synthesize projectionMatrix=_projectionMatrix - In the implementation block
@property (assign,nonatomic) RCTSGRect viewPort;                        //@synthesize viewPort=_viewPort - In the implementation block
@property (assign,nonatomic) RCTSGRect clipRect;                        //@synthesize clipRect=_clipRect - In the implementation block
@property (assign,nonatomic) RCTSGVec4 colorValue;                      //@synthesize colorValue=_colorValue - In the implementation block
@property (assign,nonatomic) double depthValue;                         //@synthesize depthValue=_depthValue - In the implementation block
@property (assign,nonatomic) int order;                                 //@synthesize order=_order - In the implementation block
@property (assign,nonatomic) BOOL clearDepth;                           //@synthesize clearDepth=_clearDepth - In the implementation block
@property (assign,nonatomic) BOOL clearColor;                           //@synthesize clearColor=_clearColor - In the implementation block
@property (assign,nonatomic) int renderTarget;                          //@synthesize renderTarget=_renderTarget - In the implementation block
-(void)updateProps:(id)arg1 ;
-(void)setRenderTarget:(int)arg1 ;
-(void)setViewPort:(RCTSGRect)arg1 ;
-(void)setDepthValue:(double)arg1 ;
-(void)renderGather:(RCTSGRenderContext*)arg1 sgview:(id)arg2 matrixStack:(RCTSGMatrix*)arg3 ;
-(RCTSGRect)viewPort;
-(double)depthValue;
-(BOOL)clearDepth;
-(BOOL)clearColor;
-(id)init;
-(void)setOrder:(int)arg1 ;
-(int)order;
-(void)setProjectionMatrix:(RCTSGMatrix)arg1 ;
-(void)setClearColor:(BOOL)arg1 ;
-(RCTSGMatrix)projectionMatrix;
-(int)renderTarget;
-(RCTSGRect)clipRect;
-(void)setClipRect:(RCTSGRect)arg1 ;
-(void)setClearDepth:(BOOL)arg1 ;
-(void)setColorValue:(RCTSGVec4)arg1 ;
-(RCTSGVec4)colorValue;
@end
