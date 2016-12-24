/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKStatefulViewComponent.h>

@class FBInspirationCameraCapturedAsset, FBCCPostCaptureCoordinator, FBInspirationToolbox;

@interface FBInspirationAssetPreviewComponent : CKStatefulViewComponent {

	FBInspirationCameraCapturedAsset* _asset;
	long long _cameraState;
	FBCCPostCaptureCoordinator* _postCaptureCoordinator;
	FBInspirationToolbox* _toolbox;
	long long _assetSource;
	BOOL _toggledRotateAsset;
	BOOL _muteAudio;
	BOOL _mirrorCapturedAsset;

}
+(id)newWithAsset:(id)arg1 cameraState:(long long)arg2 assetSource:(long long)arg3 toggledRotateAsset:(BOOL)arg4 muteAudio:(BOOL)arg5 mirrorCapturedAsset:(BOOL)arg6 toolbox:(id)arg7 ;
@end

