/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBInteractiveMediaNodeControllerDelegate <NSObject>
@optional
-(void)interactiveMediaControllerWasTapped:(id)arg1;
-(id)interactiveMediaController:(id)arg1 keyFrameForInteractionMode:(long long)arg2 default:(id)arg3;
-(void)interactiveMediaControllerPhotoWillDisappear:(id)arg1;
-(void)interactiveMediaController:(id)arg1 willAnimateToKeyFrame:(id)arg2 interactionMode:(long long)arg3 previousInteractionMode:(long long)arg4 withAnimation:(SCD_Struct_FB196)arg5;
-(void)interactiveMediaController:(id)arg1 willChangeToInteractionMode:(long long)arg2 fromInteractionMode:(long long)arg3 animated:(BOOL)arg4;
-(void)interactiveMediaController:(id)arg1 didChangeToInteractionMode:(long long)arg2 fromInteractionMode:(long long)arg3 animated:(BOOL)arg4 progress:(double)arg5;
-(BOOL)interactiveMediaController:(id)arg1 shouldEnableInteractionForMode:(long long)arg2;
-(void)interactiveMediaController:(id)arg1 didRenderInteractionMode:(long long)arg2;
-(void)interactiveMediaController:(id)arg1 updatedViewportPercentageVisible:(double)arg2 percentagePanned:(double)arg3 focusPoint:(CGPoint)arg4;
-(void)interactiveMediaController:(id)arg1 didZoomWithScrollableMediaNode:(id)arg2;
-(void)interactiveMediaController:(id)arg1 didEndZoomWithScrollableMediaNode:(id)arg2;
-(CGSize*)interactiveMediaController:(id)arg1 visibleSizeForInteractionMode:(long long)arg2;

@end

