/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPlatformWebViewManifestDelegate;
@class FBPlatformPrefetchedURLStore, NSMutableDictionary, NSMutableArray, NSString, FBSimpleNetworkerRequest;

@interface FBPlatformWebViewManifest : NSObject {

	double _lastRefreshTimestamp;
	BOOL _disallowPrioritizedRefresh;
	FBPlatformPrefetchedURLStore* _urlStore;
	NSMutableDictionary* _methodManifest;
	NSMutableDictionary* _urlMap;
	id<FBPlatformWebViewManifestDelegate> _delegate;
	NSMutableArray* _actionManifestsPendingFetch;
	NSString* _lastManifestUrlString;
	FBSimpleNetworkerRequest* _pendingManifestRefreshRequest;
	FBSimpleNetworkerRequest* _pendingDialogDownloadRequest;

}

@property (nonatomic,retain) NSMutableDictionary * methodManifest;                                  //@synthesize methodManifest=_methodManifest - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * urlMap;                                          //@synthesize urlMap=_urlMap - In the implementation block
@property (assign,nonatomic,__weak) id<FBPlatformWebViewManifestDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableArray * actionManifestsPendingFetch;                          //@synthesize actionManifestsPendingFetch=_actionManifestsPendingFetch - In the implementation block
@property (nonatomic,copy) NSString * lastManifestUrlString;                                        //@synthesize lastManifestUrlString=_lastManifestUrlString - In the implementation block
@property (nonatomic,retain) FBSimpleNetworkerRequest * pendingManifestRefreshRequest;              //@synthesize pendingManifestRefreshRequest=_pendingManifestRefreshRequest - In the implementation block
@property (nonatomic,retain) FBSimpleNetworkerRequest * pendingDialogDownloadRequest;               //@synthesize pendingDialogDownloadRequest=_pendingDialogDownloadRequest - In the implementation block
@property (nonatomic,retain) FBPlatformPrefetchedURLStore * urlStore;                               //@synthesize urlStore=_urlStore - In the implementation block
+(void)setSharedManifest:(id)arg1 ;
+(BOOL)isManifestURL:(id)arg1 ;
+(id)manifestDirectoryPath;
+(id)manifestArchivePath;
+(id)urlMarkedByManifestFromURL:(id)arg1 withVersion:(id)arg2 ;
+(id)sharedManifest;
-(id)manifestForMethod:(id)arg1 ;
-(BOOL)refreshAndPrioritizeMethod:(id)arg1 withSession:(id)arg2 ;
-(void)allowPrioritizedRefresh;
-(void)deleteManifestFromDisk;
-(FBPlatformPrefetchedURLStore *)urlStore;
-(id)cachedResponseForURL:(id)arg1 ;
-(void)processNetworkResponse:(id)arg1 data:(id)arg2 ;
-(void)setUrlStore:(FBPlatformPrefetchedURLStore *)arg1 ;
-(void)setMethodManifest:(NSMutableDictionary *)arg1 ;
-(void)setLastManifestUrlString:(NSString *)arg1 ;
-(void)setActionManifestsPendingFetch:(NSMutableArray *)arg1 ;
-(void)reprocessURLMap;
-(id)verifiedURLForManifest;
-(void)setPendingManifestRefreshRequest:(FBSimpleNetworkerRequest *)arg1 ;
-(void)processManifestJSON:(id)arg1 ;
-(void)fetchAllActionManifestsAndPrioritizeMethod:(id)arg1 withSession:(id)arg2 ;
-(void)setUrlMap:(NSMutableDictionary *)arg1 ;
-(void)cancelAllActionManifestFetches;
-(void)fetchNextActionManifestWithSession:(id)arg1 ;
-(void)setPendingDialogDownloadRequest:(FBSimpleNetworkerRequest *)arg1 ;
-(void)serializeToDisk;
-(NSString *)lastManifestUrlString;
-(NSMutableDictionary *)methodManifest;
-(NSMutableDictionary *)urlMap;
-(NSMutableArray *)actionManifestsPendingFetch;
-(FBSimpleNetworkerRequest *)pendingManifestRefreshRequest;
-(FBSimpleNetworkerRequest *)pendingDialogDownloadRequest;
-(void)setDelegate:(id<FBPlatformWebViewManifestDelegate>)arg1 ;
-(id<FBPlatformWebViewManifestDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
@end
