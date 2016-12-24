/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/ASDisplayNode.h>

@class FBRoundFaceModel, FBRoundFacepileMetrics, ASNetworkImageNode, ASTextNode;

@interface FBRoundFacepileNode : ASDisplayNode {

	FBRoundFaceModel* _viewModel;
	FBRoundFacepileMetrics* _metrics;
	ASNetworkImageNode* _imageNode;
	ASTextNode* _titleNode;

}
+(CGSize)sizeThatFits:(CGSize)arg1 metrics:(id)arg2 viewModel:(id)arg3 ;
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(CGRect)_imageNodeFrame;
-(CGRect)_titleNodeFrame;
-(id)initWithFaceModel:(id)arg1 metrics:(id)arg2 imageCache:(id)arg3 imageDownloader:(id)arg4 ;
-(CGPoint)minimorphAnchorPoint;
-(void)layout;
@end

