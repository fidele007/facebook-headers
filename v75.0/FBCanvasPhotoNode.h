/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCanvasBaseContentNode.h>

@class ASImageNode, ASControlNode;

@interface FBCanvasPhotoNode : FBCanvasBaseContentNode {

	ASImageNode* _glyphNode;
	ASControlNode* _tappableNode;

}

@property (nonatomic,readonly) ASControlNode * tappableNode;              //@synthesize tappableNode=_tappableNode - In the implementation block
+(id)nodeWithContentNode:(id)arg1 glyph:(id)arg2 tappable:(BOOL)arg3 highlightOnTap:(BOOL)arg4 ;
-(void)_staticInitialize;
-(ASControlNode *)tappableNode;
-(void)layout;
@end

