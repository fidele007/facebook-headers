/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBVideoUploadSessionDelegate.h>
#import <Facebook/FBStateMachineDelegate.h>
#import <Facebook/FBMediaItemUploadFlowProcessDelegate.h>

@protocol FBPersistentKeyValueStoreProtocol, FBKeyValueObjectStore, FBNetworkDispatch, FBMediaItemUploadFlowSessionDelegate, FBCancelable;
@class NSString, FBVideoUploadConfig, FBMediaTranscodeParams, FBStateMachine, FBVideoUploadSession, FBMediaItemUploadFlowProcess, FBMediaItemUploadFlowProgressCalculator, FBMediaUploadFlowLoggingInfo, FBMediaItemUploadFlowLogger, FBVideoAsset;

@interface FBMediaItemUploadFlowSession : NSObject <FBVideoUploadSessionDelegate, FBStateMachineDelegate, FBMediaItemUploadFlowProcessDelegate> {

	id<FBPersistentKeyValueStoreProtocol> _pkvStore;
	id<FBKeyValueObjectStore> _kvObjectStore;
	id<FBNetworkDispatch> _networkDispatcher;
	NSString* _waterfallID;
	FBVideoUploadConfig* _uploadConfig;
	FBMediaTranscodeParams* _transcodeParams;
	BOOL _fallbackToRawUploadEnabled;
	id<FBMediaItemUploadFlowSessionDelegate> _delegate;
	FBStateMachine* _stateMachine;
	FBVideoUploadSession* _uploadSession;
	SCD_Struct_FB816 _settings;
	FBMediaItemUploadFlowProcess* _processFlow;
	id<FBCancelable> _serverSideSettingsToken;
	NSString* _videoFBID;
	NSString* _uploadSessionID;
	FBMediaItemUploadFlowProgressCalculator* _progressCalculator;
	FBMediaUploadFlowLoggingInfo* _loggingInfo;
	FBMediaItemUploadFlowLogger* _logger;
	BOOL _useFileStreaming;
	unsigned long long _segmentationSizeMB;
	FBVideoAsset* _asset;
	double _uploadSuccessTime;
	unsigned long long _maxRetries;

}

@property (nonatomic,retain) FBVideoAsset * asset;                         //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) double uploadSuccessTime;                     //@synthesize uploadSuccessTime=_uploadSuccessTime - In the implementation block
@property (nonatomic,readonly) unsigned long long maxRetries;              //@synthesize maxRetries=_maxRetries - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stateMachine:(id)arg1 didTransitionFromState:(id)arg2 toState:(id)arg3 ;
-(id)mediaFBID;
-(id)uploadSessionID;
-(void)setNotifyWhenProcessed:(BOOL)arg1 ;
-(double)uploadSuccessTime;
-(unsigned long long)uploadQuality;
-(void)setUploadSuccessTime:(double)arg1 ;
-(void)_fetchedServerSettings:(SCD_Struct_FB816)arg1 ;
-(void)_reportProgressIfNeeded:(double)arg1 oldProgress:(double)arg2 ;
-(void)_uploadSegment:(id)arg1 ;
-(BOOL)_isAtTerminalState;
-(void)_uploadFlowDidFail:(id)arg1 ;
-(void)_fetchServerSettings;
-(void)_startProcessing;
-(void)_startUploading:(id)arg1 ;
-(void)videoUploadSessionDidStart:(id)arg1 ;
-(void)videoUploadSessionDidFinish:(id)arg1 fbid:(id)arg2 uploadSessionID:(id)arg3 ;
-(void)videoUploadSessionDidCancel:(id)arg1 ;
-(void)videoUploadSession:(id)arg1 didFailWithError:(id)arg2 ;
-(void)videoUploadSession:(id)arg1 didUpdateProgressTo:(double)arg2 ;
-(void)didStartTranscodeFlow:(id)arg1 ;
-(void)didFinishTranscodeFlow:(id)arg1 forSegment:(id)arg2 ;
-(void)didFinishTranscodeFlowForAllSegments:(id)arg1 ;
-(void)didCancelTranscodeFlow:(id)arg1 ;
-(void)didFailTranscodeFlow:(id)arg1 withError:(id)arg2 restartUploadInRaw:(BOOL)arg3 ;
-(void)didUpdateTranscodeFlow:(id)arg1 progress:(double)arg2 ;
-(id)uploadConfig;
-(id)transcodeParams;
-(unsigned long long)maxRetries;
-(id)initWithWaterfallID:(id)arg1 asset:(id)arg2 uploadConfig:(id)arg3 transcodeParams:(id)arg4 maxRetries:(unsigned long long)arg5 fallbackToRawUploadEnabled:(BOOL)arg6 networkDispatcher:(id)arg7 kvObjectStore:(id)arg8 pkvStore:(id)arg9 delegate:(id)arg10 loggingInfo:(id)arg11 useFileStreaming:(BOOL)arg12 segmentationSizeMB:(unsigned long long)arg13 ;
-(void)publishAfterUpload;
-(id)cloneSessionForRetry;
-(void)cancel;
-(unsigned long long)state;
-(void)start;
-(void)_cleanup;
-(float)progress;
-(FBVideoAsset *)asset;
-(void)setAsset:(FBVideoAsset *)arg1 ;
-(void)_setupStateMachine;
@end

