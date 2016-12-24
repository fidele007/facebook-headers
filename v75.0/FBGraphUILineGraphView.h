/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBGraphUIGraphProtocol.h>

@class UIColor, FBGraphUIGraphHelper, FBGraphUIPointMarkerView, FBGraphUIPointMarkerTagView, NSString, NSArray;

@interface FBGraphUILineGraphView : UIView <FBGraphUIGraphProtocol> {

	double _smoothingFactor;
	UIColor* _highlightColor;
	FBGraphUIGraphHelper* _graphHelper;
	FBGraphUIPointMarkerView* _markedPointView;
	FBGraphUIPointMarkerTagView* _markedPointTagView;
	FBGraphUILineGraphViewRange _highlightRange;
	CGPoint _markedPoint;

}

@property (nonatomic,retain) FBGraphUIGraphHelper * graphHelper;                            //@synthesize graphHelper=_graphHelper - In the implementation block
@property (nonatomic,retain) FBGraphUIPointMarkerView * markedPointView;                    //@synthesize markedPointView=_markedPointView - In the implementation block
@property (nonatomic,retain) FBGraphUIPointMarkerTagView * markedPointTagView;              //@synthesize markedPointTagView=_markedPointTagView - In the implementation block
@property (assign,nonatomic) CGPoint markedPoint;                                           //@synthesize markedPoint=_markedPoint - In the implementation block
@property (assign,nonatomic) double smoothingFactor;                                        //@synthesize smoothingFactor=_smoothingFactor - In the implementation block
@property (assign,nonatomic) FBGraphUILineGraphViewRange highlightRange;                    //@synthesize highlightRange=_highlightRange - In the implementation block
@property (nonatomic,retain) UIColor * highlightColor;                                      //@synthesize highlightColor=_highlightColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * points; 
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets; 
@property (nonatomic,retain) UIColor * fillColor; 
@property (nonatomic,retain) UIColor * axisColor; 
@property (assign,nonatomic) double axisWidth; 
@property (assign,nonatomic) NSRange xAxisRange; 
@property (assign,nonatomic) NSRange yAxisRange; 
@property (nonatomic,readonly) double yDataPerScreenPoint; 
@property (nonatomic,readonly) CGPoint globalMaximumPoint; 
-(void)setHighlightRange:(FBGraphUILineGraphViewRange)arg1 ;
-(void)setAxisWidth:(double)arg1 ;
-(void)consolidatePointsToCount:(unsigned long long)arg1 maintainingExtrema:(BOOL)arg2 ;
-(CGPoint)globalMaximumPoint;
-(void)markPoint:(CGPoint)arg1 withValueText:(id)arg2 descriptionText:(id)arg3 animated:(BOOL)arg4 ;
-(FBGraphUILineGraphViewRange)highlightRange;
-(void)setXAxisRange:(NSRange)arg1 ;
-(void)setYAxisRange:(NSRange)arg1 ;
-(void)_drawPoints:(id)arg1 ;
-(double)viewXPositionOfYAxis;
-(double)viewYPositionOfXAxis;
-(void)_drawAxisFrom:(CGPoint)arg1 to:(CGPoint)arg2 ;
-(FBGraphUIGraphHelper *)graphHelper;
-(CGPoint)viewPositionFromPoint:(CGPoint)arg1 ;
-(UIColor *)axisColor;
-(double)axisWidth;
-(void)setAxisColor:(UIColor *)arg1 ;
-(NSRange)xAxisRange;
-(NSRange)yAxisRange;
-(void)setPoints:(id)arg1 clampedToYRange:(NSRange)arg2 ;
-(void)upregulatePointsToCount:(unsigned long long)arg1 ;
-(double)viewXPositionFromValue:(double)arg1 ;
-(double)viewYPositionFromValue:(double)arg1 ;
-(double)yDataPerScreenPoint;
-(void)setGraphHelper:(FBGraphUIGraphHelper *)arg1 ;
-(FBGraphUIPointMarkerView *)markedPointView;
-(void)setMarkedPointView:(FBGraphUIPointMarkerView *)arg1 ;
-(FBGraphUIPointMarkerTagView *)markedPointTagView;
-(void)setMarkedPointTagView:(FBGraphUIPointMarkerTagView *)arg1 ;
-(CGPoint)markedPoint;
-(void)setMarkedPoint:(CGPoint)arg1 ;
-(double)_rollAngleOfControlPointsForDataPointAtIndex:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(UIEdgeInsets)contentEdgeInsets;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(double)smoothingFactor;
-(void)setSmoothingFactor:(double)arg1 ;
-(NSArray *)points;
-(void)setPoints:(NSArray *)arg1 ;
@end
