/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/ASControlNode.h>

@protocol FBNativeAdMediaFooterNodeDelegate;
@class FBNativeAdMediaFooterNodeMetrics, ASTextNode, FBNativeAdCTAButtonNode;

@interface FBNativeAdMediaFooterNode : ASControlNode {

	FBNativeAdMediaFooterNodeMetrics* _metrics;
	ASTextNode* _footerTitleNode;
	ASTextNode* _footerSubtitleNode;
	ASTextNode* _footerBodyNode;
	FBNativeAdCTAButtonNode* _actionButtonNode;
	id<FBNativeAdMediaFooterNodeDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBNativeAdMediaFooterNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)_didTapActionButtonNode;
-(void)_didTapFooterNode;
-(id)initWithTitleText:(id)arg1 subtitleText:(id)arg2 bodyText:(id)arg3 actionButtonText:(id)arg4 metrics:(id)arg5 session:(id)arg6 ;
-(void)setDelegate:(id<FBNativeAdMediaFooterNodeDelegate>)arg1 ;
-(id<FBNativeAdMediaFooterNodeDelegate>)delegate;
-(void)layout;
@end

