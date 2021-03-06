/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBPhotoDisplayingComponentProvider.h>
#import <Facebook/FBPhotoDisplayingComponent.h>

@class FBLivePhotoSupportingComponent, NSString, FBMemPhoto, UIView, UIImage;

@interface FBLivePhotoAwarePhotoComponent : CKCompositeComponent <FBPhotoDisplayingComponentProvider, FBPhotoDisplayingComponent> {

	FBLivePhotoSupportingComponent* _livePhotoSupportingComponent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CKComponent*<FBPhotoDisplayingComponent> photoDisplayingComponent; 
@property (nonatomic,readonly) FBMemPhoto * photo; 
@property (nonatomic,readonly) UIView * viewToOpenPhotoViewController; 
@property (nonatomic,readonly) UIImage * displayedImage; 
+(id)newWithPhoto:(id)arg1 attributes:(id)arg2 scenePath:(id)arg3 size:(CKComponentSize)arg4 tapAction:(CKTypedComponentAction<>)arg5 longPressAction:(CKTypedComponentAction<>)arg6 mediaForceTouchIntentTarget:(id)arg7 prefetcherModule:(id)arg8 analyticsModule:(id)arg9 options:(const FBLivePhotoComponentOptions*)arg10 session:(id)arg11 ;
-(UIImage *)displayedImage;
-(UIView *)viewToOpenPhotoViewController;
-(id)newCloneViewWithInfo:(id)arg1 ;
-(id)updateSourceInfo:(id)arg1 ;
-(void)startedUsingCloneViewOrLayer;
-(void)finishedUsingCloneViewOrLayer;
-(CKComponent*<FBPhotoDisplayingComponent>)photoDisplayingComponent;
-(void)photoDidDownload;
-(FBMemPhoto *)photo;
@end

