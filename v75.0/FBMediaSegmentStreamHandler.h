/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBNetworkDispatch;
@class NSObject, FBMediaUploadHandler, FBCache, FBDiskCache, NSMutableDictionary;

@interface FBMediaSegmentStreamHandler : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	FBMediaUploadHandler* _uploadHandler;
	id<FBNetworkDispatch> _networkDispatcher;
	FBCache* _memCache;
	FBDiskCache* _diskCache;
	NSMutableDictionary* _streams;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)_stream:(id)arg1 completeWithResult:(id)arg2 ;
-(void)_streamCanceled:(id)arg1 ;
-(void)_fetchResumableStream:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_resumeStream:(id)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_createStreamFromDetail:(id)arg1 ;
-(void)_fetchSingleSegmentResumableStream:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fetchStreamFromDiskCache:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_createStreamFromUploadJob:(id)arg1 ;
-(void)_removeCachedStream:(id)arg1 ;
-(void)_cacheStream:(id)arg1 ;
-(id)_createStreamFromData:(id)arg1 jobId:(id)arg2 ;
-(id)initWithUploadHandler:(id)arg1 networkDispatcher:(id)arg2 diskCache:(id)arg3 ;
-(id)startStream:(id)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchResumableStream:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resumeStream:(id)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)queue;
@end

