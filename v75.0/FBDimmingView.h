/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:02 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBTransparentView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol FBDimmingViewDelegate;
@class UIView, NSArray, NSMapTable, UIColor, UITapGestureRecognizer, NSString;

@interface FBDimmingView : FBTransparentView <UIGestureRecognizerDelegate> {

	id<FBDimmingViewDelegate> _delegate;
	UIView* _parentView;
	UIView* _shadowView;
	NSArray* _passthroughViews;
	NSMapTable* _geometryTransformViewMap;
	BOOL _visible;
	double _dimmedAlpha;
	double _percentDimmed;
	UIColor* _backgroundColor;
	UITapGestureRecognizer* _tapRecognizer;
	NSArray* _highlightedRegions;

}

@property (assign,nonatomic,__weak) id<FBDimmingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double dimmedAlpha;                                     //@synthesize dimmedAlpha=_dimmedAlpha - In the implementation block
@property (assign,nonatomic) double percentDimmed;                                   //@synthesize percentDimmed=_percentDimmed - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                                //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSArray * passthroughViews;                               //@synthesize passthroughViews=_passthroughViews - In the implementation block
@property (nonatomic,copy) NSArray * highlightedRegions;                             //@synthesize highlightedRegions=_highlightedRegions - In the implementation block
@property (nonatomic,readonly) BOOL visible;                                         //@synthesize visible=_visible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)setHighlightedRegions:(NSArray *)arg1 ;
-(void)setDimmedAlpha:(double)arg1 ;
-(void)setPercentDimmed:(double)arg1 ;
-(NSArray *)highlightedRegions;
-(void)passthroughViewsMoved;
-(double)dimmedAlpha;
-(double)_shadowViewAlpha;
-(void)_tappedFromRecognizer:(id)arg1 ;
-(void)_layoutPassthroughViews;
-(void)_setupPassthroughViews;
-(void)_undoPassthroughViews;
-(double)percentDimmed;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setDelegate:(id<FBDimmingViewDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<FBDimmingViewDelegate>)delegate;
-(BOOL)visible;
-(void)didAddSubview:(id)arg1 ;
-(void)showInView:(id)arg1 ;
-(void)dismiss;
-(BOOL)accessibilityPerformEscape;
-(NSArray *)passthroughViews;
-(void)setPassthroughViews:(NSArray *)arg1 ;
@end

