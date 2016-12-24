/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/ASDisplayNode.h>
#import <Facebook/FBPopoverControllerDelegate.h>

@protocol FBInlineAdHeaderNodeDelegate;
@class FBNativeAdShareContentRedesignNodeMetrics, UIImageView, ASDisplayNode, ASTextNode, NSString;

@interface FBNativeAdMultiShareContentRedesignHeaderNode : ASDisplayNode <FBPopoverControllerDelegate> {

	FBNativeAdShareContentRedesignNodeMetrics* _metrics;
	UIImageView* _shareIconImageView;
	ASDisplayNode* _shareIconNode;
	ASTextNode* _shareTitleNode;
	ASTextNode* _sponsoredLabelNode;
	ASTextNode* _bodyTextNode;
	ASDisplayNode* _chevronButtonNode;
	CGSize _shareIconSize;
	id<FBInlineAdHeaderNodeDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBInlineAdHeaderNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(id)initWithTitleText:(id)arg1 bodyText:(id)arg2 iconURLString:(id)arg3 iconSize:(CGSize)arg4 isAdDropDownEnabled:(BOOL)arg5 layoutDirection:(long long)arg6 metrics:(id)arg7 session:(id)arg8 ;
-(void)_didTapChevronButtonNode;
-(void)setDelegate:(id<FBInlineAdHeaderNodeDelegate>)arg1 ;
-(id<FBInlineAdHeaderNodeDelegate>)delegate;
-(void)layout;
@end

