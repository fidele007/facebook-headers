/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <GLKit/GLKView.h>
#import <Facebook/RCTSGRendererDelegate.h>
#import <Facebook/RCTSGViewContainer.h>

@protocol OS_dispatch_queue;
@class RCTBridge, RCTSGGLContext, RCTSGRenderer, NSObject, NSString;

@interface RCTSGView : GLKView <RCTSGRendererDelegate, RCTSGViewContainer> {

	RCTBridge* _bridge;
	RCTSGGLContext* _SGGLContext;
	RCTSGRenderer* _renderer;
	NSObject*<OS_dispatch_queue> _videoExportQueue;
	double _time;

}

@property (assign,nonatomic) double time;                           //@synthesize time=_time - In the implementation block
@property (nonatomic,retain) RCTSGRenderer * renderer;              //@synthesize renderer=_renderer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)convertBlendMode:(id)arg1 ;
+(int)convertZtestMode:(id)arg1 ;
+(void)renderChildren:(RCTSGRenderContext*)arg1 sgview:(id)arg2 currentView:(id)arg3 matrixStack:(RCTSGMatrix*)arg4 ;
-(id)initViewWithGLContext:(id)arg1 ;
-(id)initWithBridge:(id)arg1 ;
-(const RCTTextureInfo*)textureInfoForSource:(id)arg1 ;
-(void)textureInfoForSourceDidLoadImage;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)setTime:(double)arg1 ;
-(double)time;
-(void)setRenderer:(RCTSGRenderer *)arg1 ;
-(RCTSGRenderer *)renderer;
@end
