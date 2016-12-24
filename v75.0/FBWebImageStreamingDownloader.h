/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBWebImageNetworkDownloaderHelperDelegate.h>
#import <Facebook/FBWebImageDownloader.h>

@protocol FBImageStreamingService;
@class FBWebImageNetworkDownloaderHelper, NSString;

@interface FBWebImageStreamingDownloader : NSObject <FBWebImageNetworkDownloaderHelperDelegate, FBWebImageDownloader> {

	id<FBImageStreamingService> _streamer;
	FBWebImageNetworkDownloaderHelper* _downloaderHelper;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)downloadWithSpecifier:(id)arg1 scenePath:(id)arg2 analyticsTags:(id)arg3 queue:(id)arg4 downloadBlock:(/*^block*/id)arg5 ;
-(id)startDownloadForSpecifier:(id)arg1 downloadNode:(id)arg2 withScenePath:(id)arg3 analyticsTags:(id)arg4 queue:(id)arg5 ;
-(id)webImageDownloadResponseForDownloadResponse:(id)arg1 downloadNode:(id)arg2 specifier:(id)arg3 isLast:(BOOL)arg4 ;
-(void)cancelDownloadToken:(id)arg1 ;
-(void)_streamingResponse:(id)arg1 forNode:(id)arg2 andSpecifier:(id)arg3 queue:(id)arg4 ;
-(void)cancel;
-(id)initWithStreamer:(id)arg1 ;
@end

