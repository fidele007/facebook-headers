/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBOpenGLFilter.h>
#import <Facebook/FBOverlayFilter.h>

@class FBTexture, FBSurface;

@interface FBFreehandDrawingFilter : FBOpenGLFilter <FBOverlayFilter> {

	unsigned _pointsVBO;
	vector<FBDrawingPoint, std::__1::allocator<FBDrawingPoint> >* _pointsVBOData;
	BOOL _rebindVBO;
	BOOL _needsConfigure;
	CGSize _outputBufferSize;
	CGSize _inputBufferSize;
	BOOL _newStroke;
	CGPoint _lastDrawnPoint;
	FBTexture* _circleTexture;
	FBSurface* _circleTextureSurface;
	BOOL _textureLoaded;
	vector<FBDrawingStroke, std::__1::allocator<FBDrawingStroke> >* _strokes;
	NSRange _vboFlushRange;
	BOOL _enableDrawHighlight;
	double _pointSize;

}

@property (assign,nonatomic) double pointSize;                      //@synthesize pointSize=_pointSize - In the implementation block
@property (assign,nonatomic) BOOL enableDrawHighlight;              //@synthesize enableDrawHighlight=_enableDrawHighlight - In the implementation block
-(void)processCommand:(id)arg1 ;
-(unsigned)_vertexBuffer;
-(unsigned long long)inputPixelFormat;
-(id)fullVertexShader;
-(id)fullFragmentShader;
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 time:(SCD_Struct_FB100)arg4 ;
-(void)setEnableDrawHighlight:(BOOL)arg1 ;
-(float)_drawHighlightDuration;
-(void)_processMoveCommand:(id)arg1 ;
-(void)_processUndoCommand:(id)arg1 ;
-(void)_processUndoMarkCommand:(id)arg1 ;
-(void)_processClearCommand:(id)arg1 ;
-(unsigned long long)_pointsCount;
-(CGPoint)translatePointToVideoCoordinate:(CGPoint)arg1 withDrawingSurfaceSize:(CGSize)arg2 ;
-(void)renderCurveFrom:(CGPoint)arg1 to:(CGPoint)arg2 using:(CGPoint)arg3 color:(GLKVector4)arg4 size:(float)arg5 ;
-(void)_updateVBOFlushRange:(NSRange)arg1 ;
-(void)_performUndo:(BOOL)arg1 ;
-(void)_postUpdateContentsNotification;
-(void)_compactPoints;
-(void)_configureProgram:(id)arg1 ;
-(BOOL)enableDrawHighlight;
-(void)setPointSize:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(double)pointSize;
-(void)setParameters:(id)arg1 ;
-(unsigned long long)outputPixelFormat;
@end

