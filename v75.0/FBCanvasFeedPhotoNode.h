/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCanvasBaseContentNode.h>

@class ASDisplayNode;

@interface FBCanvasFeedPhotoNode : FBCanvasBaseContentNode {

	ASDisplayNode* _overlayNode;
	ASDisplayNode* _ufiNode;
	ASDisplayNode* _textOverlay;
	ASDisplayNode* _swipeToOpenNode;
	ASDisplayNode* _gradientNode;

}
+(id)nodeWithContentNode:(id)arg1 ufi:(id)arg2 textOverlay:(id)arg3 ;
-(void)_staticInitialize;
-(void)hideOverlay;
-(void)layout;
-(void)showOverlay;
@end

