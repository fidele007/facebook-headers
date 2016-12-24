/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/AVAsynchronousKeyValueLoading.h>
#import <Facebook/FNFAVAsset.h>
#import <Facebook/FNFAVPlayerItem.h>
#import <Facebook/FNFAssetForPlayer.h>
#import <Facebook/FNFInfoForLoopableAsset.h>
#import <Facebook/FNFDashDataLoaderDelegate.h>
#import <Facebook/FNFPlaylistLoaderDelegate.h>
#import <Facebook/FNFTimeLoadedDelegate.h>
#import <Facebook/FNFLiveAVPlayerAsset.h>

@protocol OS_dispatch_queue;
@class FNFDashDataLoader, FNFBufferSizeDecider, FNFDashPlaylistData, FNFDashPlaylistLoader, FNFAssetResourceLoader, NSError, NSObject, FNFDataBlockDistributor, FBAssetLinearReader, NSDictionary, FNFAdaptiveBitrateSelector, NSString, NSArray, AVAudioMix;

@interface FNFDashAsset : NSObject <AVAsynchronousKeyValueLoading, FNFAVAsset, FNFAVPlayerItem, FNFAssetForPlayer, FNFInfoForLoopableAsset, FNFDashDataLoaderDelegate, FNFPlaylistLoaderDelegate, FNFTimeLoadedDelegate, FNFLiveAVPlayerAsset> {

	/*^block*/id _assetLoadedHandler;
	FNFDashDataLoader* _dataLoaders[2];
	FNFBufferSizeDecider* _bufferSizeDecider;
	FNFDashPlaylistData* _playlistData;
	FNFDashPlaylistLoader* _playlistLoader;
	FNFAssetResourceLoader* _resourceLoader;
	/*^block*/id _playerCheckForStallCallback;
	BOOL _hasFailed;
	BOOL _isStalled;
	NSError* _loadingError;
	BOOL _shouldShowBroadcasterInterruptedMessage;
	BOOL _sentStreamDryNotification;
	BOOL _assetLoaded;
	BOOL _waitingOnLoad;
	int _warningCount;
	BOOL _async;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	double _loadingStartedTimestamp;
	FNFDataBlockDistributor* _dataBlockDistributors[2];
	FBAssetLinearReader* _readers[2];
	FNFMP4MoovAtomProvider* _atomProviders[2];
	FNFMp4FrameMetadataCompressor* _frames[2];
	vector<unsigned int, std::__1::allocator<unsigned int> >* _gopKeyframeIndices;
	BOOL _moovAtomParsed[2];
	BOOL _parsedHeaders[2];
	BOOL _allHeadersParsed;
	SCD_Struct_FB100 _duration;
	SCD_Struct_FB100 _videoTrackDuration;
	opaqueCMFormatDescriptionRef _formatDesc;
	AudioStreamBasicDescription _asbd;
	NSDictionary* _audioStreamExtraParameters;
	int _trackId[2];
	unsigned _timescale[2];
	unsigned long long _initialTime;
	unsigned long long _initialTimePts;
	BOOL _initialTimeSet;
	int _segmentsParsed[2];
	BOOL _playlistWasParsed;
	BOOL _shouldSeekAfterResetAsset;
	BOOL _shouldUsePtsForInitialTime;
	BOOL _shouldUpdateLoadedTimeEarlier;
	BOOL _hadInlineManifest;
	FNFAdaptiveBitrateSelector* _abrSelector;
	BOOL _prefetchOnlyOnce;
	FNFDashAssetPrefetchMetadata _prefetchMetadata;

}

@property (nonatomic,readonly) BOOL prefetchOnlyOnce;                                    //@synthesize prefetchOnlyOnce=_prefetchOnlyOnce - In the implementation block
@property (assign,nonatomic) FNFDashAssetPrefetchMetadata prefetchMetadata;              //@synthesize prefetchMetadata=_prefetchMetadata - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,copy,readonly) NSArray * loadedTimeRanges; 
@property (nonatomic,copy) AVAudioMix * audioMix; 
@property (nonatomic,readonly) SCD_Struct_FB100 maxBufferTime; 
@property (nonatomic,readonly) SCD_Struct_FB100 minBufferTime; 
-(double)nextLiveAudioTimestamp;
-(double)elapsedVideoTimestamp;
-(double)loadingStartedTimestamp;
-(opaqueCMFormatDescriptionRef)formatDesc;
-(AudioStreamBasicDescription)asbd;
-(id)audioStreamExtraParameters;
-(void)addErrorToLog:(id)arg1 shouldStopPlayback:(BOOL)arg2 ;
-(BOOL)trackHasMoreFrames:(long long)arg1 ;
-(FNFFrameMetadata)currentFrameMetadataForTrack:(long long)arg1 ;
-(const char*)currentFrameDataForTrack:(long long)arg1 ;
-(void)advanceFrameForTrack:(long long)arg1 ;
-(void)updatePlaybackTime:(SCD_Struct_FB100)arg1 ;
-(BOOL)shouldPauseForStallingWithNextCheckCallback:(/*^block*/id)arg1 ;
-(BOOL)shouldRestartAfterStalling;
-(BOOL)shouldBufferVideoAsSoonAsPossible;
-(BOOL)seekToPosition:(SCD_Struct_FB100)arg1 ;
-(BOOL)resetAssetToBeginningIfNeeded;
-(void)playbackPauseRequested;
-(SCD_Struct_FB100)timeAfterSeek;
-(id)debugDetails;
-(BOOL)decompressedFramebuffer;
-(SCD_Struct_FB100)maxBufferTime;
-(SCD_Struct_FB100)minBufferTime;
-(id)representationId;
-(FNFDashAssetPrefetchMetadata)getUpdatedPrefetchMetadataIfPossible;
-(unsigned)availableQualitiesCount;
-(BOOL)isAbrEnabled;
-(FNFDashAssetPrefetchMetadata)prefetchMetadata;
-(void)setPrefetchMetadata:(FNFDashAssetPrefetchMetadata)arg1 ;
-(void)requestTimeLoadedUpdate;
-(id)projection;
-(id)audioChannelConfiguration;
-(BOOL)containsTrack:(long long)arg1 ;
-(SCD_Struct_FB100)videoTrackDuration;
-(unsigned long long)timescale;
-(id)initWithConfig:(FNFDashAssetConfig)arg1 mpdData:(id)arg2 mpdUrl:(id)arg3 bandwidthProvider:(id)arg4 ;
-(void)createNewDataBlockDistributors;
-(void)_potentiallyFetchFirstRequestForTrack:(long long)arg1 ;
-(void)_potentiallyStartRequest;
-(BOOL)_fullyDownloaded;
-(BOOL)shouldResetAssetToBeginning;
-(void)_seekDataLoaderToTime:(SCD_Struct_FB100)arg1 offset:(unsigned long long)arg2 shouldUpdateOffset:(BOOL)arg3 track:(long long)arg4 ;
-(BOOL)containsAudio;
-(BOOL)trackHasMoreFrames:(long long)arg1 isFullyDownloaded:(BOOL)arg2 ;
-(void)_sendDryNotificationIfApplicable;
-(void)_sendUndryNotificationIfApplicable;
-(id)dataBlockDistributorForTrack:(long long)arg1 ;
-(void)_handleWarning:(id)arg1 ;
-(unsigned)unfetchedSegmentCapHitCount;
-(void)setDashPlaylistData:(id)arg1 ;
-(void)parseAtomForTrack:(long long)arg1 ;
-(SCD_Struct_FB100)timeLoadedForOffset:(unsigned long long)arg1 track:(long long)arg2 ;
-(void)_updateTimeLoaded:(SCD_Struct_FB100)arg1 ;
-(void)_potentiallyStartRequestForTrack:(long long)arg1 ;
-(SCD_Struct_FB100)nextAbsoluteAudioTime;
-(BOOL)_fullyDownloaded:(long long)arg1 ;
-(unsigned long long)offsetForTimeInSeconds:(float)arg1 track:(long long)arg2 ;
-(void)_attemptToParseInitializationAtomsForTrack:(long long)arg1 ;
-(void)_attemptToParseMoofAtomsForTrack:(long long)arg1 ;
-(FNFSeekStatus)_fragmentedSeekToPosition:(SCD_Struct_FB100)arg1 ;
-(FNFSeekStatus)_segmentedSeekToPosition:(SCD_Struct_FB100)arg1 ;
-(void)_resetDataForSeekBack;
-(BOOL)_advanceToNextGopKeyframe;
-(SCD_Struct_FB100)currentVideoPts;
-(FNFSeekStatus)_segmentedSeekStatusForTime:(SCD_Struct_FB100)arg1 shouldUpdateOffset:(BOOL)arg2 shouldSeekAudio:(BOOL)arg3 newOffset:(unsigned long long)arg4 ;
-(int)_videoSegmentIndexForTime:(SCD_Struct_FB100)arg1 ;
-(void)resetDataForSeekBack;
-(void)parsingDidFailWithError:(id)arg1 ;
-(void)_advanceAudioToMatchVideo;
-(void)loadingDidFailWithError:(id)arg1 ;
-(void)dataWasReceivedForTrack:(long long)arg1 andIsComplete:(BOOL)arg2 ;
-(void)playlistUpdated;
-(void)willChangeValue;
-(void)didChangeValue;
-(unsigned long long)requestedBytesCount;
-(int)unfetchedSegmentCountForTrack:(long long)arg1 ;
-(BOOL)offsetIsAtLeastLargestOffset:(unsigned long long)arg1 track:(long long)arg2 ;
-(unsigned long long)currentOffsetForTrack:(long long)arg1 ;
-(void)_forTestingMakeSynchronous;
-(void)_forTestingUpdateShouldSeekAfterResetAsset;
-(id)dataLoaderForTrack:(long long)arg1 ;
-(id)playlistLoader;
-(BOOL)prefetchOnlyOnce;
-(void)dealloc;
-(NSString *)description;
-(SCD_Struct_FB100)duration;
-(id)asset;
-(long long)status;
-(void)cancelLoading;
-(AVAudioMix *)audioMix;
-(void)_handleError:(id)arg1 ;
-(void)addOutput:(id)arg1 ;
-(NSArray *)loadedTimeRanges;
-(FNFSeekStatus)seekToTime:(SCD_Struct_FB100)arg1 ;
-(id)playlistData;
-(CGAffineTransform)preferredTransform;
-(void)setAudioMix:(AVAudioMix *)arg1 ;
-(unsigned long long)receivedBytesCount;
-(id)resourceLoader;
-(id)accessLog;
-(SCD_Struct_FB100)currentTime;
-(id)tracksWithMediaType:(id)arg1 ;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isPlaybackLikelyToKeepUp;
-(BOOL)isPlaybackBufferFull;
-(void)playbackStarted;
-(id)dispatchQueue;
-(void)reportWarning:(id)arg1 ;
@end

