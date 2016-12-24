/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBFooterCellHeightCalculator;
#import <Facebook/Facebook-Structs.h>
@class PAInterfaceGuide;

@interface FBNativeArticleFooterMetrics : NSObject {

	PAInterfaceGuide* _interfaceGuide;
	id<FBFooterCellHeightCalculator> _cellMetrics;

}

@property (nonatomic,readonly) id<FBFooterCellHeightCalculator> cellMetrics;              //@synthesize cellMetrics=_cellMetrics - In the implementation block
-(double)horizontalMargin;
-(FBTextMetrics*)titleTextMetrics;
-(id)initWithInterfaceGuide:(id)arg1 cellMetrics:(id)arg2 ;
-(CGSize)cellSizeWithConstrainedSize:(CGSize)arg1 ;
-(double)titleVerticalMargin;
-(double)titleToTableViewSpacing;
-(double)titleTextOffset;
-(id)nodeBackgroundColor;
-(double)titleTextBaselineOffsetForConstraintSize:(CGSize)arg1 ;
-(CGSize)nodeSizeWithConstrainedSize:(CGSize)arg1 titleTextSize:(CGSize)arg2 numberOfCells:(long long)arg3 ;
-(id<FBFooterCellHeightCalculator>)cellMetrics;
@end
