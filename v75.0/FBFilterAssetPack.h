/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, FBFilterAssetDownloader, NSMutableArray, NSMutableDictionary;

@interface FBFilterAssetPack : NSObject {

	NSArray* _assets;
	NSArray* _assetsIdentifiers;
	FBFilterAssetDownloader* _assetDownloader;
	NSMutableArray* _fetchHandles;
	unsigned long long _assetDownloadsInFlight;
	NSMutableDictionary* _assetDownloadProgress;
	double _downloadProgress;
	unsigned long long _downloadStatus;

}

@property (assign,nonatomic) double downloadProgress;                        //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (assign,nonatomic) unsigned long long downloadStatus;              //@synthesize downloadStatus=_downloadStatus - In the implementation block
-(void)cancelFetch;
-(void)startFetch;
-(void)_calculatePackDownloadStatus;
-(void)_onAssetDownloadComplete:(id)arg1 ;
-(void)_onAssetDownloadProgress:(id)arg1 progress:(double)arg2 ;
-(void)_calculatePackDownloadProgress;
-(void)setDownloadStatus:(unsigned long long)arg1 ;
-(id)initWithAssets:(id)arg1 assetDownloader:(id)arg2 ;
-(double)downloadProgress;
-(void)setDownloadProgress:(double)arg1 ;
-(unsigned long long)downloadStatus;
@end

