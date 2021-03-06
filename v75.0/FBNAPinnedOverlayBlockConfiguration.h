/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNAPinnableBlockControlling;
@class FBRichStoryBlock, ASDisplayNode;

@interface FBNAPinnedOverlayBlockConfiguration : NSObject {

	FBRichStoryBlock* _block;
	id<FBNAPinnableBlockControlling> _blockController;
	ASDisplayNode* _node;

}

@property (nonatomic,readonly) FBRichStoryBlock * block;                                      //@synthesize block=_block - In the implementation block
@property (nonatomic,readonly) id<FBNAPinnableBlockControlling> blockController;              //@synthesize blockController=_blockController - In the implementation block
@property (nonatomic,readonly) ASDisplayNode * node;                                          //@synthesize node=_node - In the implementation block
-(id<FBNAPinnableBlockControlling>)blockController;
-(id)initWithBlock:(id)arg1 blockController:(id)arg2 ;
-(ASDisplayNode *)node;
-(FBRichStoryBlock *)block;
@end

