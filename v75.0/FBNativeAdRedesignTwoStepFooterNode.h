/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/ASControlNode.h>

@protocol FBNativeAdRedesignFooterNodeDelegate;
@class FBNativeAdCTAButtonNodeMetrics, FBNativeAdShareContentRedesignNodeMetrics, ASTextNode, ASImageNode, NSMutableAttributedString, FBButtonWithExtendedTapTarget;

@interface FBNativeAdRedesignTwoStepFooterNode : ASControlNode {

	FBNativeAdCTAButtonNodeMetrics* _ctaButtonMetrics;
	FBNativeAdShareContentRedesignNodeMetrics* _shareContentNodeMetrics;
	ASTextNode* _shareSubtitleNode;
	ASTextNode* _shareBodyNode;
	ASTextNode* _ctaButtonTitleNode;
	ASImageNode* _rightChevronNode;
	NSMutableAttributedString* _shareSubtitleAttributedText;
	NSMutableAttributedString* _shareBodyAttributedText;
	NSMutableAttributedString* _ctaActionAttributedText;
	FBButtonWithExtendedTapTarget* _chevronButton;
	id<FBNativeAdRedesignFooterNodeDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBNativeAdRedesignFooterNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(id)initWithActionButtonText:(id)arg1 subtitleText:(id)arg2 bodyText:(id)arg3 ctaButtonMetrics:(id)arg4 shareContentNodeMetrics:(id)arg5 ;
-(void)setBackgroundAndTextColorAfterTap:(id)arg1 ;
-(void)resetBackgroundAndTextColorAfterTapping:(id)arg1 ;
-(void)setDelegate:(id<FBNativeAdRedesignFooterNodeDelegate>)arg1 ;
-(id<FBNativeAdRedesignFooterNodeDelegate>)delegate;
-(void)layout;
@end

