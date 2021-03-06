/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBMLNativeBridge, SRAssetsPermissionsManager, SRAssetsIndexer, SRDeviceAssetsLibrary, FBMLPhotoUploader;

@interface FBMLSession : NSObject {

	FBUserSession* _userSession;
	FBMLNativeBridge* _nativeBridge;
	SRAssetsPermissionsManager* _assetsPermissionsManager;
	SRAssetsIndexer* _assetsIndexer;
	SRDeviceAssetsLibrary* _deviceAssetsLibrary;
	FBMLPhotoUploader* _photoUploader;

}

@property (nonatomic,readonly) FBUserSession * userSession;                                        //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,readonly) FBMLNativeBridge * nativeBridge;                                    //@synthesize nativeBridge=_nativeBridge - In the implementation block
@property (nonatomic,readonly) SRAssetsPermissionsManager * assetsPermissionsManager;              //@synthesize assetsPermissionsManager=_assetsPermissionsManager - In the implementation block
@property (nonatomic,readonly) SRAssetsIndexer * assetsIndexer;                                    //@synthesize assetsIndexer=_assetsIndexer - In the implementation block
@property (nonatomic,readonly) SRDeviceAssetsLibrary * deviceAssetsLibrary;                        //@synthesize deviceAssetsLibrary=_deviceAssetsLibrary - In the implementation block
@property (nonatomic,readonly) FBMLPhotoUploader * photoUploader;                                  //@synthesize photoUploader=_photoUploader - In the implementation block
-(id)imageDownloader;
-(FBMLNativeBridge *)nativeBridge;
-(id)sessionUserUUID;
-(FBMLPhotoUploader *)photoUploader;
-(SRDeviceAssetsLibrary *)deviceAssetsLibrary;
-(id)sessionUser;
-(id)initWithUserSession:(id)arg1 nativeBridge:(id)arg2 assetsPermissionsManager:(id)arg3 assetsIndexer:(id)arg4 deviceAssetsLibrary:(id)arg5 photoUploader:(id)arg6 ;
-(SRAssetsIndexer *)assetsIndexer;
-(SRAssetsPermissionsManager *)assetsPermissionsManager;
-(FBUserSession *)userSession;
@end

