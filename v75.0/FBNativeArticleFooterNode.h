/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/ASDisplayNode.h>
#import <Facebook/FBOverlayNodeProtocol.h>

@protocol FBNativeArticleFooterNodeDelegate;
@class NSString, FBNativeArticleFooterMetrics, ASDisplayNode, ASTextNode, NSArray;

@interface FBNativeArticleFooterNode : ASDisplayNode <FBOverlayNodeProtocol> {

	NSString* _titleText;
	FBNativeArticleFooterMetrics* _metrics;
	ASDisplayNode* _rubberBandProofBackgroundNode;
	ASTextNode* _titleTextNode;
	id<FBNativeArticleFooterNodeDelegate> _delegate;
	NSArray* _listNodes;

}

@property (nonatomic,copy,readonly) NSArray * listNodes;              //@synthesize listNodes=_listNodes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(id)initWithTitleText:(id)arg1 metrics:(id)arg2 listNodes:(id)arg3 delegate:(id)arg4 ;
-(void)_didSelectNode:(id)arg1 ;
-(NSArray *)listNodes;
-(void)layout;
@end

