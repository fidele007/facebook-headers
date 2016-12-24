/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBObjectionableContentStatusHandler, FBPhotoComponent;

@interface FBAlbumCollageMediaAttachmentComponent : CKCompositeComponent {

	FBAlbumCollageMediaAttachmentComponentMediaItemGraphQL* _mediaItem;
	FBObjectionableContentStatusHandler* _warningOverlayStatusHandler;
	FBPhotoComponent* _photoComponent;

}

@property (nonatomic,retain) FBPhotoComponent * photoComponent;              //@synthesize photoComponent=_photoComponent - In the implementation block
+(id)newWithMediaItems:(const FragmentVector<FBFM::FBAlbumCollageMediaAttachmentComponentMediaItemGraphQL, true>*)arg1 shouldRenderShadow:(BOOL)arg2 shouldSupressIconAndAutoplay:(BOOL)arg3 shouldSuppressLoopingAutoplay:(BOOL)arg4 shouldOpenFullscreenVideo:(BOOL)arg5 videoPlayTapAction:(CKTypedComponentAction<>)arg6 videoOverlayTapAction:(CKTypedComponentAction<>)arg7 aggregationKey:(id)arg8 photoTapSelector:(CKTypedComponentAction<>)arg9 mediaForceTouchIntentTarget:(id)arg10 toolbox:(id)arg11 ;
+(BOOL)areMediaItemsValid:(id)arg1 ;
-(FBPhotoComponent *)photoComponent;
-(void)seePhotoAnyway;
-(void)setPhotoComponent:(FBPhotoComponent *)arg1 ;
@end

