/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Facebook/FBDrawColorScrubberDelegate.h>
#import <Facebook/FBDrawingControllerDelegate.h>
#import <Facebook/CAAnimationDelegate.h>

@protocol FBDrawViewControllerDelegate;
@class FBDrawingController, UIView, UIButton, FBDrawColorScrubber, FBDrawViewControllerTraits, UIColor, NSString;

@interface FBDrawViewController : UIViewController <UIGestureRecognizerDelegate, FBDrawColorScrubberDelegate, FBDrawingControllerDelegate, CAAnimationDelegate> {

	FBDrawingController* _drawingController;
	UIView* _originalMediaView;
	UIView* _renderView;
	UIButton* _undoButton;
	UIButton* _textUndoButton;
	BOOL _shouldUseTextUndoButton;
	FBDrawColorScrubber* _colorScrubber;
	FBDrawViewControllerTraits* _traits;
	BOOL _colorScrubberVisible;
	BOOL _uiHiddenForDrawing;
	BOOL _showControls;
	BOOL _animatesControlsVisibilityByDefault;
	id<FBDrawViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBDrawViewControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL canUndo; 
@property (getter=isUIHiddenForDrawing,nonatomic,readonly) BOOL uiHiddenForDrawing;              //@synthesize uiHiddenForDrawing=_uiHiddenForDrawing - In the implementation block
@property (nonatomic,retain) UIColor * selectedBrushColor; 
@property (assign,nonatomic) double selectedBrushSize; 
@property (assign,nonatomic) BOOL showControls;                                                  //@synthesize showControls=_showControls - In the implementation block
@property (assign,nonatomic) BOOL animatesControlsVisibilityByDefault;                           //@synthesize animatesControlsVisibilityByDefault=_animatesControlsVisibilityByDefault - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)colorScrubber:(id)arg1 didChooseSize:(double)arg2 ;
-(void)colorScrubber:(id)arg1 didChooseColor:(id)arg2 ;
-(void)didStartDrawingWithSentinel:(unsigned long long)arg1 ;
-(void)didFinishDrawing;
-(void)updateViewController;
-(id)initWithOriginalMediaView:(id)arg1 traits:(id)arg2 ;
-(void)setShowControls:(BOOL)arg1 ;
-(BOOL)hasAddedDrawing;
-(id)imageEdits;
-(void)setAnimatesControlsVisibilityByDefault:(BOOL)arg1 ;
-(void)_initializeUndoButtonIfNeeded;
-(void)_layoutColorScrubberOnScreen:(BOOL)arg1 ;
-(double)_scrubberXPositionOnScreen:(BOOL)arg1 ;
-(void)_setColorScrubberVisible:(BOOL)arg1 ;
-(void)_changeUndoAndScrubberAlphaTo:(double)arg1 ;
-(void)_updateTextUndoButtonHiddenStateAnimated:(BOOL)arg1 ;
-(void)_updateUndoButtonHiddenStateAnimated:(BOOL)arg1 ;
-(void)_undoPressed:(id)arg1 ;
-(void)_initTextUndoButtonIfNeeded;
-(id)createButtonWithText:(id)arg1 buttonType:(long long)arg2 ;
-(void)_hideUIForStartDrawingWithSentinel:(unsigned long long)arg1 ;
-(void)setShouldUseTextUndoButton:(BOOL)arg1 ;
-(UIColor *)selectedBrushColor;
-(void)setSelectedBrushColor:(UIColor *)arg1 ;
-(double)selectedBrushSize;
-(void)setSelectedBrushSize:(double)arg1 ;
-(BOOL)isUIHiddenForDrawing;
-(BOOL)animatesControlsVisibilityByDefault;
-(void)setDelegate:(id<FBDrawViewControllerDelegate>)arg1 ;
-(id<FBDrawViewControllerDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)canUndo;
-(void)undo;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)showControls;
-(void)clear;
@end

