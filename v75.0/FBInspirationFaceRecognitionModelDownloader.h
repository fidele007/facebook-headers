/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSMutableDictionary, FBUserSession, NSObject;

@interface FBInspirationFaceRecognitionModelDownloader : NSObject {

	NSMutableDictionary* _faceRecognitionAssetUrlDictionary;
	FBUserSession* _session;
	NSMutableDictionary* _downloadCancleHandlersByAssetName;
	NSObject*<OS_dispatch_group> _downloadGroup;
	long long _numAssetsToDownload;

}
-(void)_cancelDownloadWithHandle:(id)arg1 ;
-(void)downloadFaceRecognitionModelsForMasks:(id)arg1 priority:(long long)arg2 callbackQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithSession:(id)arg1 ;
-(void)cancelAllDownloads;
@end

