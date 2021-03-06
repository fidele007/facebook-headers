/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequestDelegate.h>
#import <Facebook/FBSimpleDownloaderProtocol.h>

@protocol FBNetworkDispatch, CDExperimentalDiskCache, FBSimpleDownloaderPerfLogger, OS_dispatch_queue;
@class NSFileManager, FBSimpleDownloaderConfig, NSMutableDictionary, NSObject, NSString;

@interface FBSimpleDownloader : NSObject <FBNetworkerRequestDelegate, FBSimpleDownloaderProtocol> {

	NSFileManager* _fileManager;
	id<FBNetworkDispatch> _networkDispatcher;
	id<CDExperimentalDiskCache> _diskCache;
	FBSimpleDownloaderConfig* _config;
	id<FBSimpleDownloaderPerfLogger> _logger;
	NSMutableDictionary* _inFlightFetches;
	NSObject*<OS_dispatch_queue> _serializationQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkerRequest:(id)arg1 didUpdateDownloadProgress:(double)arg2 complete:(BOOL)arg3 ;
-(void)cancelFetchWithHandle:(id)arg1 ;
-(id)fetchWithRemoteURL:(id)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)initWithSession:(id)arg1 config:(id)arg2 logger:(id)arg3 ;
-(id)fetchWithRemoteURL:(id)arg1 priority:(long long)arg2 callbackQueue:(id)arg3 progressBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)fetchFileURLFromDiskCacheForRemoteURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithSession:(id)arg1 config:(id)arg2 diskCache:(id)arg3 logger:(id)arg4 ;
-(id)initWithNetworkDispatcher:(id)arg1 diskCache:(id)arg2 fileManager:(id)arg3 config:(id)arg4 logger:(id)arg5 ;
-(id)fetchWithRemoteURL:(id)arg1 callbackQueue:(id)arg2 progressBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_informClientForFetch:(id)arg1 diskCacheURL:(id)arg2 ;
-(void)_startSimpleDownloadForFetch:(id)arg1 withPriority:(long long)arg2 ;
-(void)_fetchFileURLFromDiskCacheForRemoteURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_informClientAboutFailureForFetch:(id)arg1 ;
-(void)_handleDownloadedFileForFetch:(id)arg1 data:(id)arg2 ;
-(id)initWithNetworkDispatcher:(id)arg1 diskCache:(id)arg2 config:(id)arg3 logger:(id)arg4 ;
-(void)dealloc;
@end

