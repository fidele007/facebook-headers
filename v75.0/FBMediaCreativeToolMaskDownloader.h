/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBMediaCreativeToolMask, FBFilterPackageDownloader, NSMutableDictionary;

@interface FBMediaCreativeToolMaskDownloader : NSObject {

	FBUserSession* _session;
	FBMediaCreativeToolMask* _mask;
	FBFilterPackageDownloader* _packageDownloader;
	BOOL _isLoading;
	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;
	float _uniqueMaskBundleDownloadProgress;
	NSMutableDictionary* _communalFaceRecognitionModelsDownloadProgresses;
	unsigned long long _communalFaceRecognitionModelsCount;
	BOOL _areCommunalFaceRecognitionModelsAlreadyLocallyCached;

}

@property (nonatomic,readonly) BOOL hasLocalCache; 
-(void)_downloadFaceRecognitionModelsOfMask:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_uniqueMaskAssetDownloadProgressed:(float)arg1 ;
-(void)_downloadCompletedForEverything:(id)arg1 ;
-(void)_communalFaceRecognitionModelsDownloadProgressed:(float)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_notifyDownloadProgress;
-(id)initWithSession:(id)arg1 mask:(id)arg2 ;
-(BOOL)hasLocalCache;
-(void)loadWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
@end

