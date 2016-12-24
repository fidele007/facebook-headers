/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CAAnimationDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol FBDrawingControllerDelegate, FBDrawSoundControllerProtocol;
@class FBDrawGestureRecognizer, NSTimer, UIColor, NSUndoManager, UIView, NSString;

@interface FBDrawingController : NSObject <CAAnimationDelegate, UIGestureRecognizerDelegate> {

	FBDrawGestureRecognizer* _panGestureRecognizer;
	CGContextRef _strokeContext;
	CGPoint _lastTouchPoint;
	CGPoint _drawStartLocation;
	CGPoint _lastLastTouchPoint;
	CGPoint _lastEndPoint;
	CGRect _currentStrokeBounds;
	NSTimer* _fillLongPressTimer;
	NSTimer* _fillTimer;
	double _fillStartTime;
	CGContextRef _drawContext;
	CGContextRef _workingContext;
	BOOL _enableFilling;
	UIColor* _brushColor;
	double _brushSize;
	NSUndoManager* _undoManager;
	id<FBDrawingControllerDelegate> _delegate;
	double _drawingSentinel;
	id<FBDrawSoundControllerProtocol> _soundController;
	UIView* _renderView;

}

@property (nonatomic,copy) UIColor * brushColor;                                             //@synthesize brushColor=_brushColor - In the implementation block
@property (assign,nonatomic) double brushSize;                                               //@synthesize brushSize=_brushSize - In the implementation block
@property (nonatomic,copy) NSUndoManager * undoManager;                                      //@synthesize undoManager=_undoManager - In the implementation block
@property (assign,nonatomic,__weak) id<FBDrawingControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double drawingSentinel;                                         //@synthesize drawingSentinel=_drawingSentinel - In the implementation block
@property (nonatomic,retain) id<FBDrawSoundControllerProtocol> soundController;              //@synthesize soundController=_soundController - In the implementation block
@property (nonatomic,retain) UIView * renderView;                                            //@synthesize renderView=_renderView - In the implementation block
@property (assign,nonatomic) BOOL enableFilling;                                             //@synthesize enableFilling=_enableFilling - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_fill;
-(void)setEnableFilling:(BOOL)arg1 ;
-(BOOL)canUndoDoodle;
-(UIColor *)brushColor;
-(double)brushSize;
-(void)undoDoodle;
-(void)setBrushColor:(UIColor *)arg1 ;
-(void)setDoodleBrushColor:(id)arg1 ;
-(void)setDoodleBrushSize:(double)arg1 ;
-(id)initWithView:(id)arg1 soundController:(id)arg2 ;
-(void)stopFillLongPressTimer;
-(double)drawingSentinel;
-(void)animateToContents:(id)arg1 ;
-(void)setDrawingSentinel:(double)arg1 ;
-(void)_updateViewContents:(BOOL)arg1 ;
-(double)_brushSizeInPoints;
-(void)_innerDrawWithBlock:(/*^block*/id)arg1 context:(CGContextRef)arg2 bounds:(CGRect)arg3 scale:(double)arg4 location:(CGPoint)arg5 ;
-(void)_undoStroke:(id)arg1 ;
-(void)_startFill;
-(void)_drawWithBlock:(/*^block*/id)arg1 ;
-(void)_startFillLongPressTimer;
-(CGPoint)_normalizedDrawSoundLocation;
-(void)_beginStroke;
-(void)_didStartDrawing;
-(void)_updateFillGestureWithLocation:(CGPoint)arg1 ;
-(void)_stopFill;
-(CGPoint)_normalizedDrawVelocity;
-(void)_endStroke;
-(void)clearDoodle;
-(BOOL)enableFilling;
-(void)setDelegate:(id<FBDrawingControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FBDrawingControllerDelegate>)delegate;
-(NSUndoManager *)undoManager;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)cleanup;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(void)initializeIfNecessary;
-(id<FBDrawSoundControllerProtocol>)soundController;
-(void)setSoundController:(id<FBDrawSoundControllerProtocol>)arg1 ;
-(void)_handlePan:(id)arg1 ;
-(void)setBrushSize:(double)arg1 ;
-(void)_updateContext:(CGContextRef)arg1 ;
-(UIView *)renderView;
-(void)setRenderView:(UIView *)arg1 ;
@end

