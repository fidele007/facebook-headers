/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBComposerPublicationStatusEventListener.h>
#import <Facebook/FBPublishingDataServerProcessingListener.h>

@protocol FBPostingControllerDelegate;
@class FBPublisherManager, FBUserSession, FBComposerPublicationStatusEventFilter, NSMutableDictionary, NSString;

@interface FBPostingController : NSObject <FBComposerPublicationStatusEventListener, FBPublishingDataServerProcessingListener> {

	FBPublisherManager* _publisherManager;
	FBUserSession* _session;
	BOOL _hasToldPublisherManagerToRestartPublicationsAfterFeedIsReadyAndLoaded;
	BOOL _offlinePostingEnabled;
	FBComposerPublicationStatusEventFilter* _eventFilter;
	/*^block*/id _publicationFilterHandler;
	NSMutableDictionary* _inFlightPublications;
	id<FBPostingControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)serverDidUpdateProcessingProgress:(float)arg1 forPublisherData:(id)arg2 response:(id)arg3 ;
-(void)serverDidFinishProcessingForPublisherData:(id)arg1 response:(id)arg2 ;
-(void)serverProcessingDidFailForPublisherData:(id)arg1 response:(id)arg2 ;
-(void)clientDidLoseTrackOfServerProcessingStatusForPublisherData:(id)arg1 response:(id)arg2 ;
-(id)initWithSession:(id)arg1 offlinePostingEnabled:(BOOL)arg2 publicationFilterHandler:(/*^block*/id)arg3 delegate:(id)arg4 ;
-(void)postingWithCompositionModuleBundle:(id)arg1 composerSessionID:(id)arg2 ;
-(void)restartPublicationsAfterFeedIsReadyAndLoadedIfNeeded;
-(BOOL)offlinePostingEnabled;
-(void)startedPublishingComposerPublication:(id)arg1 ;
-(void)attemptedPublishingComposerPublication:(id)arg1 ;
-(void)failedPublishingComposerPublication:(id)arg1 withError:(id)arg2 ;
-(void)failedPublishingAndWaitingForRetryForComposerPublication:(id)arg1 withError:(id)arg2 ;
-(void)retriedPublishingComposerPublication:(id)arg1 ;
-(void)pausedPublishingComposerPublication:(id)arg1 ;
-(void)startedWaitingForConnectivityForComposerPublication:(id)arg1 ;
-(void)scheduledPublishingComposerPublication:(id)arg1 atDate:(id)arg2 ;
-(void)publicationProgressedWithProgress:(double)arg1 forComposerPublication:(id)arg2 ;
-(void)startedUploadingItemOfType:(int)arg1 withThumbnailImage:(id)arg2 forComposerPublication:(id)arg3 ;
-(void)uploadQualityDidChange:(id)arg1 forComposerPublication:(id)arg2 ;
-(void)canCancelComposerPublication:(id)arg1 ;
-(void)cannotCancelComposerPublication:(id)arg1 ;
-(void)startedServerProcessingForUploadedComposerPublication:(id)arg1 ;
-(void)terminallyFailedPublishingComposerPublication:(id)arg1 withError:(id)arg2 ;
-(void)successfullyPublishedComposerPublication:(id)arg1 response:(id)arg2 ;
-(void)cancelledPublishingComposerPublication:(id)arg1 ;
-(void)_cancelPublishingPublisherData:(id)arg1 ;
-(void)_tryFinishingPublishingAndProcessingFlowWithPublisherData:(id)arg1 response:(id)arg2 ;
-(void)dealloc;
@end

