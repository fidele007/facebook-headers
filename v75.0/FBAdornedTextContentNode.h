/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/ASControlNode.h>
#import <Facebook/FBBylineNode.h>

@class ASImageNode, FBSmartClippingTextNode, ASDisplayNode, FBNodeAdornment, NSString, NSAttributedString;

@interface FBAdornedTextContentNode : ASControlNode <FBBylineNode> {

	ASImageNode* _imageAdornmentNode;
	FBSmartClippingTextNode* _textAdornmentNode;
	ASDisplayNode* _nodeAdornmentNode;
	FBSmartClippingTextNode* _textNode;
	FBNodeAdornment* _adornment;
	ASDisplayNode* _borderLineNodes[4];
	FBBorderMetrics* _borderMetrics;
	UIEdgeInsets _innerPadding;
	unsigned long long _displayStyle;
	double _lineHeight;
	UIEdgeInsets _textContentInsets;
	CGPoint _adornmentAnchor;
	long long _layoutDirection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBBylineNodeDelegate> bylineDelegate; 
@property (nonatomic,readonly) BOOL flipped; 
@property (nonatomic,readonly) CGPoint adornmentAnchor;                                   //@synthesize adornmentAnchor=_adornmentAnchor - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * attributedString; 
@property (assign,nonatomic,__weak) id<ASTextNodeDelegate> delegate; 
@property (assign,nonatomic) unsigned long long highlightStyle; 
@property (nonatomic,readonly) NSRange highlightRange; 
@property (assign,nonatomic) unsigned long long maximumNumberOfLines; 
+(CGSize)sizeWithAttributes:(ASTextKitAttributes)arg1 adornment:(id)arg2 borderMetrics:(FBBorderMetrics*)arg3 innerPadding:(UIEdgeInsets)arg4 displayStyle:(unsigned long long)arg5 constrainedSize:(CGSize)arg6 ;
+(CGSize)sizeWithAttributedString:(id)arg1 adornment:(id)arg2 borderMetrics:(FBBorderMetrics*)arg3 innerPadding:(UIEdgeInsets)arg4 displayStyle:(unsigned long long)arg5 constrainedSize:(CGSize)arg6 ;
+(id)adornedTextNodeWithText:(id)arg1 adornment:(id)arg2 borderMetrics:(FBBorderMetrics*)arg3 innerPadding:(UIEdgeInsets)arg4 displayStyle:(unsigned long long)arg5 layoutDirection:(long long)arg6 ;
+(CGSize)sizeWithViewModel:(id)arg1 metrics:(id)arg2 constrainedSize:(CGSize)arg3 ;
+(id)nodeWithViewModel:(id)arg1 metrics:(id)arg2 session:(id)arg3 layoutDirection:(long long)arg4 ;
+(Class)metricsClass;
+(id)_textNodeWithString:(id)arg1 ;
+(FBLineMetrics*)_metricForBorderLineIndex:(unsigned long long)arg1 borderMetrics:(FBBorderMetrics*)arg2 ;
+(CGRect)_calculateFrameForLineAtEdge:(unsigned long long)arg1 inBounds:(CGRect)arg2 withBorderMetrics:(FBBorderMetrics*)arg3 innerPadding:(UIEdgeInsets)arg4 ;
+(CGRect)_boundingRectForEdge:(unsigned long long)arg1 inFrame:(CGRect)arg2 withBorderMetrics:(FBBorderMetrics*)arg3 innerPadding:(UIEdgeInsets)arg4 ;
+(double)_originPositionForLine:(FBLineMetrics*)arg1 boundingDimension:(double)arg2 boundingOriginPosition:(double)arg3 ;
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)setHighlightRange:(NSRange)arg1 ;
-(id)initWithText:(id)arg1 adornment:(id)arg2 borderMetrics:(FBBorderMetrics*)arg3 innerPadding:(UIEdgeInsets)arg4 displayStyle:(unsigned long long)arg5 layoutDirection:(long long)arg6 ;
-(NSRange)highlightRange;
-(BOOL)flipped;
-(void)setBylineDelegate:(id<FBBylineNodeDelegate>)arg1 ;
-(id<FBBylineNodeDelegate>)bylineDelegate;
-(void)_createBorderLineNodesIfNecessary;
-(id)_adornmentNode;
-(void)_layoutBorderNodes;
-(CGPoint)adornmentAnchor;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(void)setDelegate:(id<ASTextNodeDelegate>)arg1 ;
-(id<ASTextNodeDelegate>)delegate;
-(void)setMaximumNumberOfLines:(unsigned long long)arg1 ;
-(void)layout;
-(NSAttributedString *)attributedString;
-(unsigned long long)highlightStyle;
-(void)setHighlightStyle:(unsigned long long)arg1 ;
-(unsigned long long)maximumNumberOfLines;
-(CGRect)_contentBounds;
@end

