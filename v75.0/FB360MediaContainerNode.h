/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/ASDisplayNode.h>

@class ASDisplayNode;

@interface FB360MediaContainerNode : ASDisplayNode {

	long long _controlsOrientation;
	ASDisplayNode* _controlsOverlayNode;
	ASDisplayNode* _mediaNode;
	double _controlsOverlayRotation;

}

@property (assign,nonatomic) double controlsOverlayRotation;                   //@synthesize controlsOverlayRotation=_controlsOverlayRotation - In the implementation block
@property (nonatomic,retain) ASDisplayNode * controlsOverlayNode;              //@synthesize controlsOverlayNode=_controlsOverlayNode - In the implementation block
@property (nonatomic,retain) ASDisplayNode * mediaNode;                        //@synthesize mediaNode=_mediaNode - In the implementation block
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(CGRect)_controlsOverlayBoundsForContainerSize:(CGSize)arg1 deviceOrientation:(long long)arg2 ;
-(void)setControlsOverlayRotation:(double)arg1 ;
-(ASDisplayNode *)controlsOverlayNode;
-(double)controlsOverlayRotation;
-(void)setControlsOverlayNode:(ASDisplayNode *)arg1 ;
-(void)willTransitionToSize:(CGSize)arg1 withAnimationConfig:(SCD_Struct_FB196)arg2 ;
-(void)setControlsOrientation:(long long)arg1 withAnimationConfig:(SCD_Struct_FB196)arg2 ;
-(id)init;
-(void)layout;
-(ASDisplayNode *)mediaNode;
-(void)setMediaNode:(ASDisplayNode *)arg1 ;
@end

