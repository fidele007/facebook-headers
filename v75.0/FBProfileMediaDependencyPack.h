/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMediaGalleryBannerProviderProtocol, FBDecorateProfilePictureFlowHostingViewControllerDelegate, FBMediaAttachmentProtocol, FBNavigationCoordinator, FBProfileMediaStagingGroundViewControllerDelegate, FBProfilePictureStagingGroundLoggerProtocol, FBProfileVideoCameraDelegate, FBUpdateProfilePictureFlowListener;
@class FBProfileSwipeableFramesDataSource, FBUserSession, FBMediaPickerTraits, UIViewController, FBProfilePicturePickerController;

@interface FBProfileMediaDependencyPack : NSObject {

	id<FBMediaGalleryBannerProviderProtocol> _bannerProvider;
	id<FBDecorateProfilePictureFlowHostingViewControllerDelegate> _decorateProfilePictureHostngVCDelegate;
	id<FBMediaAttachmentProtocol> _mediaAttachment;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBProfileMediaStagingGroundViewControllerDelegate> _stagingGroundDelegate;
	id<FBProfilePictureStagingGroundLoggerProtocol> _stagingGroundLogger;
	FBProfileSwipeableFramesDataSource* _swipeableFramesDataSource;
	id<FBProfileVideoCameraDelegate> _videoDelegate;
	id<FBUpdateProfilePictureFlowListener> _updateFlowListener;
	FBUserSession* _session;
	unsigned long long _mediaPickerStyle;
	FBMediaPickerTraits* _mediaPickerTraits;
	UIViewController* _uploadHostingViewController;
	FBProfilePicturePickerController* _profilePicturePickerController;

}

@property (nonatomic,retain) id<FBMediaGalleryBannerProviderProtocol> bannerProvider;                                                                  //@synthesize bannerProvider=_bannerProvider - In the implementation block
@property (assign,nonatomic,__weak) id<FBDecorateProfilePictureFlowHostingViewControllerDelegate> decorateProfilePictureHostngVCDelegate;              //@synthesize decorateProfilePictureHostngVCDelegate=_decorateProfilePictureHostngVCDelegate - In the implementation block
@property (nonatomic,retain) id<FBMediaAttachmentProtocol> mediaAttachment;                                                                            //@synthesize mediaAttachment=_mediaAttachment - In the implementation block
@property (assign,nonatomic,__weak) id<FBNavigationCoordinator> navigationCoordinator;                                                                 //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (assign,nonatomic,__weak) id<FBProfileMediaStagingGroundViewControllerDelegate> stagingGroundDelegate;                                       //@synthesize stagingGroundDelegate=_stagingGroundDelegate - In the implementation block
@property (nonatomic,retain) id<FBProfilePictureStagingGroundLoggerProtocol> stagingGroundLogger;                                                      //@synthesize stagingGroundLogger=_stagingGroundLogger - In the implementation block
@property (nonatomic,retain) FBProfileSwipeableFramesDataSource * swipeableFramesDataSource;                                                           //@synthesize swipeableFramesDataSource=_swipeableFramesDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<FBProfileVideoCameraDelegate> videoDelegate;                                                                    //@synthesize videoDelegate=_videoDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBUpdateProfilePictureFlowListener> updateFlowListener;                                                         //@synthesize updateFlowListener=_updateFlowListener - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                                                                                  //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) unsigned long long mediaPickerStyle;                                                                                      //@synthesize mediaPickerStyle=_mediaPickerStyle - In the implementation block
@property (nonatomic,retain) FBMediaPickerTraits * mediaPickerTraits;                                                                                  //@synthesize mediaPickerTraits=_mediaPickerTraits - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * uploadHostingViewController;                                                                    //@synthesize uploadHostingViewController=_uploadHostingViewController - In the implementation block
@property (nonatomic,retain) FBProfilePicturePickerController * profilePicturePickerController;                                                        //@synthesize profilePicturePickerController=_profilePicturePickerController - In the implementation block
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(void)setNavigationCoordinator:(id<FBNavigationCoordinator>)arg1 ;
-(id)initWithBannerProvider:(id)arg1 decorateProfilePictureHostngVCDelegate:(id)arg2 mediaAttachment:(id)arg3 navigationCoordinator:(id)arg4 stagingGroundDelegate:(id)arg5 stagingGroundLogger:(id)arg6 swipeableFramesDataSource:(id)arg7 videoDelegate:(id)arg8 updateFlowListener:(id)arg9 mediaPickerStyle:(unsigned long long)arg10 mediaPickerTraits:(id)arg11 uploadHostingViewController:(id)arg12 profilePicturePickerController:(id)arg13 session:(id)arg14 ;
-(void)setUploadHostingViewController:(UIViewController *)arg1 ;
-(id<FBMediaGalleryBannerProviderProtocol>)bannerProvider;
-(id<FBMediaAttachmentProtocol>)mediaAttachment;
-(id<FBUpdateProfilePictureFlowListener>)updateFlowListener;
-(id<FBDecorateProfilePictureFlowHostingViewControllerDelegate>)decorateProfilePictureHostngVCDelegate;
-(void)setBannerProvider:(id<FBMediaGalleryBannerProviderProtocol>)arg1 ;
-(void)setStagingGroundDelegate:(id<FBProfileMediaStagingGroundViewControllerDelegate>)arg1 ;
-(void)setStagingGroundLogger:(id<FBProfilePictureStagingGroundLoggerProtocol>)arg1 ;
-(void)setSwipeableFramesDataSource:(FBProfileSwipeableFramesDataSource *)arg1 ;
-(void)setMediaPickerStyle:(unsigned long long)arg1 ;
-(void)setMediaPickerTraits:(FBMediaPickerTraits *)arg1 ;
-(void)setMediaAttachment:(id<FBMediaAttachmentProtocol>)arg1 ;
-(FBMediaPickerTraits *)mediaPickerTraits;
-(unsigned long long)mediaPickerStyle;
-(FBProfileSwipeableFramesDataSource *)swipeableFramesDataSource;
-(void)setDecorateProfilePictureHostngVCDelegate:(id<FBDecorateProfilePictureFlowHostingViewControllerDelegate>)arg1 ;
-(void)setUpdateFlowListener:(id<FBUpdateProfilePictureFlowListener>)arg1 ;
-(UIViewController *)uploadHostingViewController;
-(FBProfilePicturePickerController *)profilePicturePickerController;
-(void)setProfilePicturePickerController:(FBProfilePicturePickerController *)arg1 ;
-(id<FBProfileMediaStagingGroundViewControllerDelegate>)stagingGroundDelegate;
-(id<FBProfilePictureStagingGroundLoggerProtocol>)stagingGroundLogger;
-(FBUserSession *)session;
-(id<FBProfileVideoCameraDelegate>)videoDelegate;
-(void)setVideoDelegate:(id<FBProfileVideoCameraDelegate>)arg1 ;
-(void)setSession:(FBUserSession *)arg1 ;
@end

