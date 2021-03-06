/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/ASControlNode.h>

@class ASTextNode, ASNetworkImageNode, ASDisplayNode, FBNativeArticleEngagementActionButtonNode, FBContributorsNodeMetrics;

@interface FBContributorsNode : ASControlNode {

	ASTextNode* _contributorNameNode;
	ASTextNode* _contributorTitleNode;
	ASNetworkImageNode* _contributorImageNode;
	ASDisplayNode* _hairlineNode;
	FBNativeArticleEngagementActionButtonNode* _likeButtonNode;
	FBContributorsNodeMetrics* _metrics;

}
+(id)_attributedStringForName:(id)arg1 metrics:(id)arg2 ;
+(id)_attributedStringForTitle:(id)arg1 metrics:(id)arg2 ;
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(id)initWithName:(id)arg1 title:(id)arg2 profilePictureURL:(id)arg3 metrics:(id)arg4 imageCache:(id)arg5 imageDownload:(id)arg6 likeButtonNode:(id)arg7 ;
-(void)layout;
-(void)updateLayout;
@end

