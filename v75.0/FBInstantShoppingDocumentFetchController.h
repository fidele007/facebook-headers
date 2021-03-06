/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCanvasDocumentFetcher.h>

@protocol FBNavigationCoordinator, OS_dispatch_queue, FBInstantShoppingDocumentFetchControllerDelegate;
@class FBInstantShoppingDocumentDownloader, FBMemInstantShoppingDocument, FBRichStoryInstantShoppingDocumentAdapter, FBCanvasDocumentController, FBUserSession, NSDictionary, NSObject, NSString;

@interface FBInstantShoppingDocumentFetchController : NSObject <FBCanvasDocumentFetcher> {

	FBInstantShoppingDocumentDownloader* _downloader;
	BOOL _allowDiskCacheResponse;
	BOOL _isPrefetching;
	BOOL _isFetching;
	BOOL _documentWasCached;
	FBMemInstantShoppingDocument* _document;
	FBRichStoryInstantShoppingDocumentAdapter* _adapter;
	FBCanvasDocumentController* _controller;
	FBUserSession* _session;
	id<FBNavigationCoordinator> _navigationCoordinator;
	NSDictionary* _analyticsInfo;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	BOOL _fromCache;
	id<FBInstantShoppingDocumentFetchControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBInstantShoppingDocumentFetchControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)prefetch;
-(BOOL)_hasFetched;
-(void)_performDownload;
-(void)_didDownloadDocument:(id)arg1 fromCache:(BOOL)arg2 error:(id)arg3 ;
-(id)initWithDownloader:(id)arg1 allowDiskCacheResponse:(BOOL)arg2 session:(id)arg3 analyticsInfo:(id)arg4 navigationCoordinator:(id)arg5 ;
-(void)purgeLocalCache;
-(void)setDelegate:(id<FBInstantShoppingDocumentFetchControllerDelegate>)arg1 ;
-(id<FBInstantShoppingDocumentFetchControllerDelegate>)delegate;
-(void)fetch;
@end

