/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKStatefulViewComponent.h>

@protocol FBPhotoDisplayingComponent;
@class NSString, NSURL, FB360InitialViewParams, FB360PhotoOnScreenController, CKComponent;

@interface FB360PhotoComponent : CKStatefulViewComponent {

	NSString* _analyticsModule;
	NSString* _photoId;
	NSURL* _resourceFileURL;
	FB360InitialViewParams* _initialViewParams;
	FB360PhotoOnScreenController* _onScreenController;
	CKComponent*<FBPhotoDisplayingComponent> _photoDisplayingComponent;
	CKTypedComponentAction<> _tapAction;

}

@property (nonatomic,copy,readonly) NSString * analyticsModule;                                                       //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,copy,readonly) NSString * photoId;                                                               //@synthesize photoId=_photoId - In the implementation block
@property (nonatomic,readonly) NSURL * resourceFileURL;                                                               //@synthesize resourceFileURL=_resourceFileURL - In the implementation block
@property (nonatomic,readonly) FB360InitialViewParams * initialViewParams;                                            //@synthesize initialViewParams=_initialViewParams - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> tapAction;                                                    //@synthesize tapAction=_tapAction - In the implementation block
@property (nonatomic,readonly) FB360PhotoOnScreenController * onScreenController;                                     //@synthesize onScreenController=_onScreenController - In the implementation block
@property (nonatomic,__weak,readonly) CKComponent*<FBPhotoDisplayingComponent> photoDisplayingComponent;              //@synthesize photoDisplayingComponent=_photoDisplayingComponent - In the implementation block
+(id)newWithResourceFileURL:(id)arg1 initialViewParams:(id)arg2 tapAction:(CKTypedComponentAction<>)arg3 analyticsModule:(id)arg4 onScreenController:(id)arg5 photoId:(id)arg6 options:(const FB360PhotoComponentOptionsRef)arg7 photoDisplayingComponent:(id)arg8 ;
-(CKTypedComponentAction<>)tapAction;
-(NSString *)analyticsModule;
-(CKComponent*<FBPhotoDisplayingComponent>)photoDisplayingComponent;
-(FB360InitialViewParams *)initialViewParams;
-(FB360PhotoOnScreenController *)onScreenController;
-(NSURL *)resourceFileURL;
-(NSString *)photoId;
@end
