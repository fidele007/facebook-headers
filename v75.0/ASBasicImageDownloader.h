/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/NSURLSessionDownloadDelegate.h>
#import <Facebook/ASImageDownloaderProtocolDeprecated.h>
#import <Facebook/ASImageDownloaderProtocol.h>

@class NSOperationQueue, NSURLSession, NSString;

@interface ASBasicImageDownloader : NSObject <NSURLSessionDownloadDelegate, ASImageDownloaderProtocolDeprecated, ASImageDownloaderProtocol> {

	NSOperationQueue* _sessionDelegateQueue;
	NSURLSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedImageDownloader;
-(void)cancelImageDownloadForIdentifier:(id)arg1 ;
-(id)downloadImageWithURL:(id)arg1 callbackQueue:(id)arg2 downloadProgressBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_init;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
@end

