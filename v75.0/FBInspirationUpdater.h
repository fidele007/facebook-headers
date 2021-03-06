/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBInspirationUpdaterDelegate, OS_dispatch_queue;
@class FBInspirationRequester, FBInspirationPrioritizedAssetDownloader, NSMutableArray, FBUserSession, NSObject, FBInspirationLogger, NSArray;

@interface FBInspirationUpdater : NSObject {

	id<FBInspirationUpdaterDelegate> _delegate;
	BOOL _didFinishDownloadingFaceRecognitionMasks;
	FBInspirationRequester* _inspirationRequester;
	FBInspirationRequester* _offlineInspirationRequester;
	FBInspirationPrioritizedAssetDownloader* _assetDownloader;
	NSMutableArray* _currentDisplayContents;
	FBUserSession* _session;
	NSObject*<OS_dispatch_queue> _inspirationUpdaterQueue;
	FBInspirationLogger* _logger;
	BOOL _hasFirstSwipeableContentDownloaded;
	BOOL _hasAllSwipeableContentsDownloaded;
	double _startTime;
	NSArray* _previousFilteredMetadata;
	BOOL _isFetching;
	BOOL _networkReachable;
	BOOL _isFetchingOffline;
	BOOL _locationPermissionGranted;

}
-(void)_updateInspirationsWithNetwork;
-(void)_updateInspirationsWithoutNetwork;
-(void)_updateCameraModelWithMetadata:(id)arg1 error:(id)arg2 isFromCache:(BOOL)arg3 downloadOnly:(BOOL)arg4 ;
-(void)_requestOnlineInspirationsWithBeginning:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_downloadAllAssetsForOfflineMetadata:(id)arg1 error:(id)arg2 ;
-(void)_requestOfflineInspirationsWithBeginning:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_resetUpdateState;
-(void)_handleMetadataFetch:(id)arg1 error:(id)arg2 isFromCache:(BOOL)arg3 downloadOnly:(BOOL)arg4 ;
-(void)_logMetadataFinishedDownloadingWithError:(id)arg1 downloadOnly:(BOOL)arg2 isFromCache:(BOOL)arg3 ;
-(void)_handleDisplayContentsConstructionAfterPromptUpdate:(id)arg1 promptCollection:(id)arg2 downloadOnly:(BOOL)arg3 ;
-(void)_inspirationUpdaterDidUpdateDisplayContents:(id)arg1 promptCollection:(id)arg2 ;
-(void)_fetchAssetForMetadata:(id)arg1 promptCollection:(id)arg2 downloadOnly:(BOOL)arg3 ;
-(void)_didDownloadAssetWithResult:(id)arg1 forMetadata:(id)arg2 promptCollection:(id)arg3 ;
-(void)_updateStateFromSwipeableContents:(id)arg1 ;
-(void)_fetchThumbnailForMetadata:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 session:(id)arg2 assetDownloader:(id)arg3 logger:(id)arg4 ;
-(void)updateInspirations;
-(void)updateNetworkReachability:(BOOL)arg1 ;
-(void)cancelInspirationsUpdate;
@end

