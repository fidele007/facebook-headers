/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBComposerPhotoOverlayAttachmentGestureHandler <NSObject>
@property (assign,nonatomic,__weak) id<FBComposerPhotoOverlayAttachmentGestureHandlerDelegate> delegate; 
@required
-(void)handlePinchGesture:(id)arg1;
-(id)initWithPhotoOverlayView:(id)arg1 gestureHandlerDelegate:(id)arg2;
-(void)handleRotationGesture:(id)arg1;
-(void)handleDoubleTapGesture:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id<FBComposerPhotoOverlayAttachmentGestureHandlerDelegate>)delegate;
-(void)handlePanGesture:(id)arg1;

@end

