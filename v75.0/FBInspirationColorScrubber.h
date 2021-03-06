/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol FBInspirationColorScrubberDelegate;
@class UIView, NSArray, NSMutableArray, UIColor, UILongPressGestureRecognizer, UIPanGestureRecognizer, NSString;

@interface FBInspirationColorScrubber : UIView <UIGestureRecognizerDelegate> {

	UIView* _backgroundShadowView;
	UIView* _indicator;
	UIView* _indicatorShadowView;
	NSArray* _colors;
	NSMutableArray* _colorBlockViews;
	unsigned long long _colorBlockWidth;
	NSArray* _sizeIndicatorInfo;
	NSMutableArray* _brushSizeInidcators;
	NSMutableArray* _brushSizeAnimatedInidcators;
	NSArray* _brushSizes;
	unsigned long long _currentBlockIndex;
	unsigned long long _currentSelectedSizeIndex;
	UIColor* _currentSelectedColor;
	CGPoint _updatedCenter;
	UILongPressGestureRecognizer* _longPressGesture;
	UIPanGestureRecognizer* _panGestureRecognizer;
	BOOL _calledLayoutIndicator;
	id<FBInspirationColorScrubberDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBInspirationColorScrubberDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)brushSizes;
+(id)sizeIndicatorInfo;
+(id)colors;
-(void)_setUpShadowForView:(id)arg1 ;
-(void)_didTapColorBar:(id)arg1 ;
-(void)_layoutIndicatorIfNeeded;
-(void)_updateForNewCurrentBlockIndex;
-(void)_moveIndicator:(id)arg1 ;
-(void)_updateBrushSizeWithSelectedSizeIndex:(unsigned long long)arg1 ;
-(void)_hideSizeIndicators;
-(BOOL)_closeToScreenEdges:(CGPoint)arg1 ;
-(void)_showBrushSizeIndicators;
-(void)addBrushSizeIndicators;
-(void)setCurrentBlockIndex:(unsigned long long)arg1 ;
-(void)setDelegate:(id<FBInspirationColorScrubberDelegate>)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(id<FBInspirationColorScrubberDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_handlePanGesture:(id)arg1 ;
-(void)_handleLongPressGesture:(id)arg1 ;
@end

