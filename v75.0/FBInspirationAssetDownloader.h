/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, FBInspirationFaceRecognitionModelDownloader, FBUserSession, NSObject;

@interface FBInspirationAssetDownloader : NSObject {

	NSMutableSet* _currentFrameDownloaders;
	NSMutableSet* _currentMaskPackageDownloaders;
	NSMutableSet* _currentParticleEffectDownloaders;
	NSMutableSet* _currentShaderFilterPackageDownloaders;
	NSMutableSet* _currentStyleTransferAssetsDownloaders;
	FBInspirationFaceRecognitionModelDownloader* _faceRecognitionModelDownloader;
	FBUserSession* _session;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _assetDownloaderQueue;

}
-(void)_downloadAssetsForMetadata:(id)arg1 priority:(long long)arg2 callbackQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleSwipeableFrameDownload:(id)arg1 forDownloader:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_downloadMaskForProductionPrompt:(id)arg1 priority:(long long)arg2 callbackQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleParticleEffectDownloaded:(id)arg1 forParticleEffectDownloader:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleShaderFilterDownloaded:(id)arg1 forShaderFilterDownloader:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleStyleTransferAssetDownloaded:(id)arg1 forStyleTransferDownloader:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleMaskPackageDownloaded:(id)arg1 forMaskPackageDownloader:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_finishDownloadWithSwipeableFrame:(id)arg1 mask:(id)arg2 particle:(id)arg3 shaderFilter:(id)arg4 styleTransfer:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)cancelCurrentDownloads;
-(void)downloadAssetsForMetadata:(id)arg1 priority:(long long)arg2 callbackQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithSession:(id)arg1 ;
@end

