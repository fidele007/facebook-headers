/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class PAInterfaceGuide, UIColor;

@interface FBNativeAdCTAButtonNodeMetrics : NSObject {

	PAInterfaceGuide* _interfaceGuide;

}

@property (nonatomic,readonly) FBTextMetrics* titleTextMetrics; 
@property (nonatomic,readonly) FBTextMetrics* redesignTitleTextMetrics; 
@property (nonatomic,readonly) FBTextMetrics* titleTextTwoStepActionResetMetrics; 
@property (nonatomic,readonly) UIColor * redesignNodeColor; 
@property (nonatomic,readonly) UIColor * chevronNodeColorAfterTap; 
@property (nonatomic,readonly) unsigned long long maxLineCount; 
@property (nonatomic,readonly) double buttonBorderWidth; 
@property (nonatomic,readonly) CGColorRef buttonBorderColor; 
@property (nonatomic,readonly) double buttonVerticalPadding; 
@property (nonatomic,readonly) double buttonHorizontalPadding; 
@property (nonatomic,readonly) double titleTextVerticalCenterOffset; 
@property (nonatomic,readonly) CGSize maxChevronButtonSize; 
@property (nonatomic,readonly) double horizontalSpacePadding; 
-(CGColorRef)buttonBorderColor;
-(id)initWithInterfaceGuide:(id)arg1 ;
-(FBTextMetrics*)titleTextMetrics;
-(FBTextMetrics*)redesignTitleTextMetrics;
-(double)buttonBorderWidth;
-(double)titleTextVerticalCenterOffset;
-(double)buttonHorizontalPadding;
-(CGSize)calculateNodeSizeWithActionButtonSize:(CGSize)arg1 rightChevronNodeSize:(CGSize)arg2 constrainedSize:(CGSize)arg3 ;
-(UIColor *)chevronNodeColorAfterTap;
-(FBTextMetrics*)titleTextTwoStepActionResetMetrics;
-(double)buttonVerticalPadding;
-(CGSize)calculateTwoStepFooterNodeSizeWithSubtitleTextSize:(CGSize)arg1 hasBodyText:(BOOL)arg2 bodyTextSize:(CGSize)arg3 hasActionButton:(BOOL)arg4 actionButtonSize:(CGSize)arg5 shareContentNodeMetrics:(id)arg6 constrainedSize:(CGSize)arg7 ;
-(double)horizontalSpacePadding;
-(CGSize)maxChevronButtonSize;
-(UIColor *)redesignNodeColor;
-(unsigned long long)maxLineCount;
@end

