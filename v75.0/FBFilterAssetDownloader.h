/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSimpleDownloaderProtocol, FBFilterAssetManaging;
@class FBDiskCache, FBSimpleDownloaderConfig;

@interface FBFilterAssetDownloader : NSObject {

	id<FBSimpleDownloaderProtocol> _downloader;
	FBDiskCache* _diskCache;
	FBSimpleDownloaderConfig* _config;
	id<FBFilterAssetManaging> _filterAssetManager;

}

@property (nonatomic,readonly) id<FBFilterAssetManaging> filterAssetManager;              //@synthesize filterAssetManager=_filterAssetManager - In the implementation block
-(void)cancelFetchWithHandle:(id)arg1 ;
-(id<FBFilterAssetManaging>)filterAssetManager;
-(id)fetchFilterAsset:(id)arg1 priority:(long long)arg2 progressBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_didCompleteFetchOfFilterAsset:(id)arg1 withDownloaderCachedLocalURL:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)initWithDiskCache:(id)arg1 filterAssetManager:(id)arg2 downloader:(id)arg3 config:(id)arg4 ;
@end

