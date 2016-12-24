/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBFeedDisplayedPhotoProvider.h>

@protocol FBFeedComponentPhotoHandlerProtocol, FBPhotoComponentOverlay;
@class FBMemPhoto, FBUserSession, FBFeedToolbox, FBLivePhotoAwarePhotoComponent, FBTagOverlayComponent, CKComponent, NSString;

@interface FBFeedSinglePhotoContentComponent : CKCompositeComponent <FBFeedDisplayedPhotoProvider> {

	BOOL _showInspirationHeader;
	FBMemPhoto* _photo;
	id<FBFeedComponentPhotoHandlerProtocol> _photoHandler;
	FBUserSession* _session;
	FBFeedToolbox* _toolbox;
	FBLivePhotoAwarePhotoComponent* _livePhotoAwarePhotoComponent;
	FBTagOverlayComponent* _tagOverlayComponent;
	CKComponent*<FBPhotoComponentOverlay> _overlayComponent;

}

@property (nonatomic,retain) FBMemPhoto * photo;                                                         //@synthesize photo=_photo - In the implementation block
@property (nonatomic,retain) id<FBFeedComponentPhotoHandlerProtocol> photoHandler;                       //@synthesize photoHandler=_photoHandler - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FBFeedToolbox * toolbox;                                                    //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,retain) FBLivePhotoAwarePhotoComponent * livePhotoAwarePhotoComponent;              //@synthesize livePhotoAwarePhotoComponent=_livePhotoAwarePhotoComponent - In the implementation block
@property (nonatomic,retain) FBTagOverlayComponent * tagOverlayComponent;                                //@synthesize tagOverlayComponent=_tagOverlayComponent - In the implementation block
@property (nonatomic,retain) CKComponent*<FBPhotoComponentOverlay> overlayComponent;                     //@synthesize overlayComponent=_overlayComponent - In the implementation block
@property (assign,nonatomic) BOOL showInspirationHeader;                                                 //@synthesize showInspirationHeader=_showInspirationHeader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithPhoto:(const FBFeedSinglePhotoContentComponentPhotoGraphQL*)arg1 options:(const FBFeedSinglePhotoContentComponentOptions*)arg2 attributes:(id)arg3 photoHandler:(id)arg4 mediaForceTouchIntentTarget:(id)arg5 toolbox:(id)arg6 ;
-(FBFeedToolbox *)toolbox;
-(void)setToolbox:(FBFeedToolbox *)arg1 ;
-(id<FBFeedComponentPhotoHandlerProtocol>)photoHandler;
-(BOOL)showInspirationHeader;
-(id)displayedPhoto;
-(void)setPhotoHandler:(id<FBFeedComponentPhotoHandlerProtocol>)arg1 ;
-(FBLivePhotoAwarePhotoComponent *)livePhotoAwarePhotoComponent;
-(void)setLivePhotoAwarePhotoComponent:(FBLivePhotoAwarePhotoComponent *)arg1 ;
-(FBTagOverlayComponent *)tagOverlayComponent;
-(void)setTagOverlayComponent:(FBTagOverlayComponent *)arg1 ;
-(CKComponent*<FBPhotoComponentOverlay>)overlayComponent;
-(void)setOverlayComponent:(CKComponent*<FBPhotoComponentOverlay>)arg1 ;
-(void)setShowInspirationHeader:(BOOL)arg1 ;
-(void)setPhoto:(FBMemPhoto *)arg1 ;
-(FBUserSession *)session;
-(FBMemPhoto *)photo;
-(void)setSession:(FBUserSession *)arg1 ;
@end
