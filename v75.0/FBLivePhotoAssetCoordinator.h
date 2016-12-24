/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class FBImageDownloader, FBSimpleDownloader, NSObject;

@interface FBLivePhotoAssetCoordinator : NSObject {

	FBImageDownloader* _imageDownloader;
	FBSimpleDownloader* _videoDownloader;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}
-(void)cancelAssetCoordination:(id)arg1 ;
-(id)finalizePendingAssetCoordination:(id)arg1 withRemoteImageURL:(id)arg2 imageDownloaderOptions:(unsigned long long)arg3 callbackQueue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)initiateAssetCoordinationWithRemoteImageURL:(id)arg1 remoteVideoURL:(id)arg2 imageDownloaderOptions:(unsigned long long)arg3 callbackQueue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)initiatePendingAssetCoordinationWithRemoteVideoURL:(id)arg1 ;
-(id)initWithImageDownloader:(id)arg1 videoDownloader:(id)arg2 ;
@end

