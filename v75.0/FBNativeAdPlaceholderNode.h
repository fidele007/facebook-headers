/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/ASDisplayNode.h>

@protocol FBNativeAdPlaceholderNodeDelegate;
@class FBNativeAdPlaceholderNodeMetrics, ASControlNode, CALayer;

@interface FBNativeAdPlaceholderNode : ASDisplayNode {

	FBNativeAdPlaceholderNodeMetrics* _metrics;
	ASControlNode* _currentContentNode;
	CGSize _currentContentSize;
	BOOL _enableFullWidthImageRedesign;
	CALayer* _topLayer;
	CALayer* _bottomLayer;
	BOOL _enableFullLengthBorderLine;
	BOOL _addFullLengthBorder;
	id<FBNativeAdPlaceholderNodeDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBNativeAdPlaceholderNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)loadContentNode:(id)arg1 ;
-(id)initWithMetrics:(id)arg1 defaultContentSize:(CGSize)arg2 session:(id)arg3 ;
-(void)_setContentNode:(id)arg1 withSize:(CGSize)arg2 ;
-(void)_didTapContentNode;
-(void)setDelegate:(id<FBNativeAdPlaceholderNodeDelegate>)arg1 ;
-(id<FBNativeAdPlaceholderNodeDelegate>)delegate;
-(void)layout;
@end

