/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBImageStreamingService, FBWebImageDownloaderFactoryProtocol;
@class FBImageDownloader, FBWebImageCache;

@interface FBWebImageDownloaderSessionFactoryContext : NSObject {

	BOOL _shouldAutoRetry;
	FBImageDownloader* _imageDownloader;
	id<FBImageStreamingService> _imageStreamingService;
	FBWebImageCache* _imageCache;
	id<FBWebImageDownloaderFactoryProtocol> _downloaderFactory;

}

@property (nonatomic,retain) FBImageDownloader * imageDownloader;                                           //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (nonatomic,retain) id<FBImageStreamingService> imageStreamingService;                             //@synthesize imageStreamingService=_imageStreamingService - In the implementation block
@property (nonatomic,retain) FBWebImageCache * imageCache;                                                  //@synthesize imageCache=_imageCache - In the implementation block
@property (assign,nonatomic) BOOL shouldAutoRetry;                                                          //@synthesize shouldAutoRetry=_shouldAutoRetry - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebImageDownloaderFactoryProtocol> downloaderFactory;              //@synthesize downloaderFactory=_downloaderFactory - In the implementation block
-(FBImageDownloader *)imageDownloader;
-(void)setImageDownloader:(FBImageDownloader *)arg1 ;
-(id<FBImageStreamingService>)imageStreamingService;
-(id)initWithImageDownloader:(id)arg1 imageStreamingService:(id)arg2 imageCache:(id)arg3 shouldAutoRetry:(BOOL)arg4 downloaderFactory:(id)arg5 ;
-(void)setDownloaderFactory:(id<FBWebImageDownloaderFactoryProtocol>)arg1 ;
-(id<FBWebImageDownloaderFactoryProtocol>)downloaderFactory;
-(void)setImageStreamingService:(id<FBImageStreamingService>)arg1 ;
-(BOOL)shouldAutoRetry;
-(void)setShouldAutoRetry:(BOOL)arg1 ;
-(FBWebImageCache *)imageCache;
-(void)setImageCache:(FBWebImageCache *)arg1 ;
@end

