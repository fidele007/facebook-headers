/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMediaUploadItemDelegate.h>
#import <Facebook/FBMediaUploadItemCopyrightDelegate.h>
#import <Facebook/FBMediaUploadItemManagerProtocol.h>

@protocol FBNetworkDispatch;
@class FBComposerLogger, FBExperimentManager, FBPersistentKeyValueStore, FBUserPreferences, FBVideoUploadCache, FBMediaItemUploadFlowSchedulingLimiter, NSString, FBUserSession, FBMediaUploadItemManagerCopyrightListenerAnnouncer, NSMutableDictionary, FBComposerImageUploadItemResultStore, FBMediaUploadFlowCoordinatorListenerAnnouncer, NSMutableArray, NSError;

@interface FBMediaUploadItemManager : NSObject <FBMediaUploadItemDelegate, FBMediaUploadItemCopyrightDelegate, FBMediaUploadItemManagerProtocol> {

	BOOL _enableBackgroundUpload;
	unsigned long long _publishBackgroundTaskIdentifier;
	FBComposerLogger* _logger;
	FBExperimentManager* _experimentManager;
	id<FBNetworkDispatch> _networkDispatcher;
	FBPersistentKeyValueStore* _persistentKeyValueStore;
	FBUserPreferences* _userPreferences;
	FBVideoUploadCache* _videoUploadCache;
	FBMediaItemUploadFlowSchedulingLimiter* _scheduler;
	BOOL _uploadingSingleVideoThatNeedsPublishing;
	NSString* _mediaLoggingTag;
	NSString* _composerSessionID;
	BOOL _didStartForegroundPerfLogging;
	BOOL _hdPhotoUploadEnabled;
	FBUserSession* _session;
	FBMediaUploadItemManagerCopyrightListenerAnnouncer* _copyrightAnnouncer;
	NSMutableDictionary* _alreadyUploadedMediaUploadItemsCache;
	FBComposerImageUploadItemResultStore* _imageUploadItemResultStore;
	BOOL _requiredReorderOperation;
	BOOL _specialCasePanoramas;
	float _progress;
	int _priorityStatus;
	float _uploadCompressionRate;
	int _maximumDimension;
	long long _status;
	FBMediaUploadFlowCoordinatorListenerAnnouncer* _announcer;
	NSMutableArray* _allMediaUploadItems;
	NSError* _uploadError;

}

@property (nonatomic,retain) NSMutableArray * allMediaUploadItems;                                     //@synthesize allMediaUploadItems=_allMediaUploadItems - In the implementation block
@property (nonatomic,retain) NSError * uploadError;                                                    //@synthesize uploadError=_uploadError - In the implementation block
@property (assign,nonatomic) int priorityStatus;                                                       //@synthesize priorityStatus=_priorityStatus - In the implementation block
@property (assign,nonatomic) float uploadCompressionRate;                                              //@synthesize uploadCompressionRate=_uploadCompressionRate - In the implementation block
@property (assign,nonatomic) int maximumDimension;                                                     //@synthesize maximumDimension=_maximumDimension - In the implementation block
@property (assign,nonatomic) BOOL specialCasePanoramas;                                                //@synthesize specialCasePanoramas=_specialCasePanoramas - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long status;                                                       //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL requiredReorderOperation;                                          //@synthesize requiredReorderOperation=_requiredReorderOperation - In the implementation block
@property (nonatomic,readonly) FBMediaUploadFlowCoordinatorListenerAnnouncer * announcer;              //@synthesize announcer=_announcer - In the implementation block
@property (nonatomic,readonly) float progress;                                                         //@synthesize progress=_progress - In the implementation block
-(FBMediaUploadFlowCoordinatorListenerAnnouncer *)announcer;
-(id)initWithSession:(id)arg1 logger:(id)arg2 persistentKeyValueStore:(id)arg3 coreComposerObjectStore:(id)arg4 experimentManager:(id)arg5 networkDispatcher:(id)arg6 userPreferences:(id)arg7 ;
-(id)assetIDsToMediaInfo;
-(id)mediaFBIDsToUploadSessionIDs;
-(void)startUploadMediaAttachmentsFromPublisherData:(id)arg1 discardAndReupload:(BOOL)arg2 ;
-(void)removeItemFromAlreadyUploadedMediaUploadItemsCache:(id)arg1 ;
-(BOOL)requiredReorderOperation;
-(void)setMediaOrdering:(id)arg1 ;
-(void)mediaUploadItemDidStart:(id)arg1 ;
-(void)mediaUploadItemDidStartProcessingStep:(id)arg1 ;
-(void)mediaUploadItemDidFinishProcessingStep:(id)arg1 ;
-(void)mediaUploadItemDidFinish:(id)arg1 ;
-(void)mediaUploadItem:(id)arg1 didFailWithError:(id)arg2 allowBackgroundTask:(BOOL)arg3 ;
-(void)mediaUploadItemDidSendCancelRequest:(id)arg1 ;
-(void)mediaUploadItemDidCancel:(id)arg1 ;
-(void)mediaUploadItemRestart:(id)arg1 ;
-(void)mediaUploadItem:(id)arg1 didUpdateToProgress:(double)arg2 fromProgress:(double)arg3 ;
-(void)cancelAllUploadRequest;
-(void)resumeUploadWithPriorityStatus:(int)arg1 isRetry:(BOOL)arg2 ;
-(void)_assetLibraryDidChangeAssets:(id)arg1 ;
-(void)_scheduleAdditionUploadItemIfPossibleAndWeAreInStartedState;
-(int)priorityStatus;
-(BOOL)_allItemsAreDone;
-(void)_completeAllUploadItems;
-(id)_newImageUploadItemFromPublisherData:(id)arg1 attachmentID:(id)arg2 ;
-(id)_newVideoUploadItemFromPublisherData:(id)arg1 attachmentID:(id)arg2 useSegmentedUpload:(BOOL)arg3 shouldUploadVideoWithoutPublishing:(BOOL)arg4 shouldRecoverState:(BOOL)arg5 shouldForceUsingNativeEncoder:(BOOL)arg6 shouldForceRawFileUpload:(BOOL)arg7 ;
-(id)_newOGImageUploadItemFromPublisherData:(id)arg1 attachmentID:(id)arg2 ;
-(id)_newRemoteVideoUploadItemFromPublisherData:(id)arg1 attachmentID:(id)arg2 ;
-(void)_manageUploadItemsFromPublisherData:(id)arg1 discardAndReupload:(BOOL)arg2 ;
-(id)_mediaUploadItemsInStartedOrPausedState;
-(void)setPriorityStatus:(int)arg1 ;
-(void)_logForegroundUploadStartedIfNeeded;
-(void)_scheduleAdditionUploadItemIfPossible;
-(void)_manageVideoUploadItemFromPublisherData:(id)arg1 attachmentID:(id)arg2 discardAndReupload:(BOOL)arg3 ;
-(void)_manageMediaUploadItemsFromPublisherData:(id)arg1 discardAndReupload:(BOOL)arg2 ;
-(void)_manageOGMediaAttachmentUploadItemsFromPublisherData:(id)arg1 discardAndReupload:(BOOL)arg2 ;
-(void)_refreshProgressFromUploadItems;
-(id)_newImageUploadItemFromPublisherData:(id)arg1 attachment:(id)arg2 ;
-(void)setAllMediaUploadItems:(NSMutableArray *)arg1 ;
-(void)_logUploadEnded;
-(void)_logPhotoUploadQuality;
-(id)_nextMediaItemForUpload;
-(id)_nextPausedMediaItemForUpload;
-(void)mediaUploadItem:(id)arg1 didFindCopyrightForAttachment:(id)arg2 withCopyrightResult:(id)arg3 ;
-(void)pauseAllVideoUploadRequest;
-(id)currentUploadMediaItemForDisplaying;
-(id)assetIDsToUploadQuality;
-(id)mediaFBIDsToUploadSuccessTimes;
-(void)addCopyrightListener:(id)arg1 ;
-(void)removeCopyrightListener:(id)arg1 ;
-(NSMutableArray *)allMediaUploadItems;
-(float)uploadCompressionRate;
-(void)setUploadCompressionRate:(float)arg1 ;
-(BOOL)specialCasePanoramas;
-(void)setSpecialCasePanoramas:(BOOL)arg1 ;
-(void)_beginBackgroundTask;
-(void)dealloc;
-(void)_didReceiveMemoryWarning:(id)arg1 ;
-(float)progress;
-(long long)status;
-(void)_endBackgroundTask;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(NSError *)uploadError;
-(void)setUploadError:(NSError *)arg1 ;
-(int)maximumDimension;
-(void)setMaximumDimension:(int)arg1 ;
@end
