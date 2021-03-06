/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FB360DetachablePhotoViewProvider.h>

@protocol FBPhotoDisplayingComponent;
@class CKComponent, FB360PhotoComponent, FBUserSession, NSString;

@interface FBNetwork360PhotoComponent : CKCompositeComponent <FB360DetachablePhotoViewProvider> {

	CKComponent*<FBPhotoDisplayingComponent> _photoDisplayingComponent;
	FB360PhotoComponent* _three60PhotoComponent;
	FBUserSession* _session;

}

@property (nonatomic,readonly) FBUserSession * session;              //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithPhoto:(id)arg1 photoComponent:(id)arg2 tapAction:(CKTypedComponentAction<>)arg3 analyticsModule:(id)arg4 options:(const FB360PhotoComponentOptionsRef)arg5 session:(id)arg6 ;
+(id)initialState;
-(id)displayedImage;
-(id)viewToOpenPhotoViewController;
-(id)newCloneViewWithInfo:(id)arg1 ;
-(id)updateSourceInfo:(id)arg1 ;
-(void)startedUsingCloneViewOrLayer;
-(void)finishedUsingCloneViewOrLayer;
-(id)detachRendererView;
-(id)rendererViewContainerView;
-(void)attachRendererView:(id)arg1 ;
-(FBUserSession *)session;
-(id)photo;
@end

