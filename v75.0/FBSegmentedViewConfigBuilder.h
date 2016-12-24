/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:55 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBUIConfigBuilder.h>

@class NSArray, UIFont, UIColor, FBBadgeViewConfig, NSString;

@interface FBSegmentedViewConfigBuilder : NSObject <FBUIConfigBuilder> {

	NSArray* _items;
	unsigned long long _size;
	unsigned long long _type;
	BOOL _momentary;
	double _regularSizeHeight;
	double _smallSizeHeight;
	long long _selectedIndex;
	UIOffset _titleOffset;
	UIFont* _titleFallbackFont;
	UIColor* _titleFallbackColor;
	UIFont* _highlightedTitleFallbackFont;
	UIColor* _highlightedTitleFallbackColor;
	FBBadgeViewConfig* _badgeViewConfig;
	FBBadgeViewConfig* _highlightedBadgeViewConfig;
	BOOL _appendBadgeToTitle;
	BOOL _removeBadgeFromTitleWhenVisited;
	UIColor* _dividerColor;
	unsigned long long _dividerThickness;
	UIEdgeInsets _dividerInsets;
	double _topLineThickness;
	UIColor* _topLineColor;
	double _bottomLineThickness;
	UIColor* _bottomLineColor;
	UIColor* _tintColor;
	double _scrollItemPadding;
	double _scrollItemMinimumWidth;
	double _scrollItemMaximumWidth;
	unsigned long long _scrollItemPosition;
	unsigned long long _selectionStyle;
	unsigned long long _selectionIndicatorLocation;
	UIColor* _selectionIndicatorColor;
	UIEdgeInsets _selectionIndicatorEdgeInsets;
	double _selectionIndicatorHeight;
	BOOL _animateSelectionIndicator;
	BOOL _adjustItemWidthsForBadge;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)builderForInstance:(id)arg1 ;
+(id)builderFromConfig:(id)arg1 ;
+(id)builderIgnoringClassLevelOverrides;
+(id)builder;
-(id)setDividerInsets:(UIEdgeInsets)arg1 ;
-(id)setTitleFallbackFont:(id)arg1 ;
-(id)setTitleFallbackColor:(id)arg1 ;
-(id)setRegularSizeHeight:(double)arg1 ;
-(id)setDividerThickness:(unsigned long long)arg1 ;
-(id)setTopLineColor:(id)arg1 ;
-(id)setTopLineThickness:(double)arg1 ;
-(id)setBottomLineThickness:(double)arg1 ;
-(id)setHighlightedTitleFallbackFont:(id)arg1 ;
-(id)setSelectionIndicatorLocation:(unsigned long long)arg1 ;
-(id)setScrollItemPadding:(double)arg1 ;
-(id)setBadgeViewConfig:(id)arg1 ;
-(id)setSelectionIndicatorColor:(id)arg1 ;
-(id)setSelectionIndicatorHeight:(double)arg1 ;
-(id)setHighlightedTitleFallbackColor:(id)arg1 ;
-(id)setScrollItemPosition:(unsigned long long)arg1 ;
-(id)setAnimateSelectionIndicator:(BOOL)arg1 ;
-(id)setAdjustItemWidthsForBadge:(BOOL)arg1 ;
-(id)setAppendBadgeToTitle:(BOOL)arg1 ;
-(id)setRemoveBadgeFromTitleWhenVisited:(BOOL)arg1 ;
-(id)setScrollItemMinimumWidth:(double)arg1 ;
-(id)setSelectionIndicatorEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)setScrollItemMaximumWidth:(double)arg1 ;
-(id)setSmallSizeHeight:(double)arg1 ;
-(id)setHighlightedBadgeViewConfig:(id)arg1 ;
-(id)_init;
-(id)setType:(unsigned long long)arg1 ;
-(id)setSize:(unsigned long long)arg1 ;
-(id)setTintColor:(id)arg1 ;
-(id)setItems:(id)arg1 ;
-(id)setSelectedIndex:(long long)arg1 ;
-(id)setMomentary:(BOOL)arg1 ;
-(id)setDividerColor:(id)arg1 ;
-(id)setSelectionStyle:(unsigned long long)arg1 ;
-(id)setTitleOffset:(UIOffset)arg1 ;
-(id)build;
-(id)setBottomLineColor:(id)arg1 ;
@end
