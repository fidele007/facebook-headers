/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSimpleDownloader, FBCache;

@interface FBNAGIFFetcher : NSObject {

	FBSimpleDownloader* _downloader;
	FBCache* _memoryCache;

}

@property (nonatomic,readonly) FBSimpleDownloader * downloader;              //@synthesize downloader=_downloader - In the implementation block
@property (nonatomic,readonly) FBCache * memoryCache;                        //@synthesize memoryCache=_memoryCache - In the implementation block
+(id)_defaultDownloaderConfig;
-(id)initWithUserSession:(id)arg1 ;
-(id)loadAnimatedImageForEntity:(id)arg1 ;
-(id)_loadMemoryCacheAnimatedImageForEntity:(id)arg1 ;
-(id)_downloadAnimatedImageForEntity:(id)arg1 ;
-(void)_downloadAnimatedImageForEntity:(id)arg1 withTaskCompletionSource:(id)arg2 retryCount:(unsigned long long)arg3 ;
-(id)_createAnimatedImageForEntity:(id)arg1 fromFileURL:(id)arg2 ;
-(id)_memoryCacheAnimatedImage:(id)arg1 withCost:(unsigned long long)arg2 forEntity:(id)arg3 ;
-(FBCache *)memoryCache;
-(FBSimpleDownloader *)downloader;
@end

