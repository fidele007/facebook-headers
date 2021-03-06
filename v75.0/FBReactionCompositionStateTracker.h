/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBComposerPublisherStatusListener.h>

@protocol FBReactionCompositionStateTrackerDelegate;
@class FBPublisherManager, FBReactionPublicationListenerAnnouncer, NSString, FBPublicationResponse;

@interface FBReactionCompositionStateTracker : NSObject <FBComposerPublisherStatusListener> {

	FBPublisherManager* _publisherManager;
	FBReactionPublicationListenerAnnouncer* _announcer;
	int _compositionState;
	id<FBReactionCompositionStateTrackerDelegate> _delegate;
	NSString* _compositionID;
	FBPublicationResponse* _publicationResponse;

}

@property (nonatomic,copy) NSString * compositionID;                                                     //@synthesize compositionID=_compositionID - In the implementation block
@property (assign,nonatomic) int compositionState;                                                       //@synthesize compositionState=_compositionState - In the implementation block
@property (nonatomic,copy) FBPublicationResponse * publicationResponse;                                  //@synthesize publicationResponse=_publicationResponse - In the implementation block
@property (assign,nonatomic,__weak) id<FBReactionCompositionStateTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startedPublishingPublisherData:(id)arg1 ;
-(void)attemptedPublicationOfPublisherData:(id)arg1 ;
-(void)failedPublishingPublisherData:(id)arg1 withError:(id)arg2 ;
-(void)failedPublishingAndWaitingForRetryPublisherData:(id)arg1 withError:(id)arg2 ;
-(void)terminallyFailedPublishingPublisherData:(id)arg1 withError:(id)arg2 ;
-(void)startedServerProcessingForUploadedPublication:(id)arg1 ;
-(void)successfullyPublishedPublisherData:(id)arg1 withResponse:(id)arg2 ;
-(void)cancelledPublishingPublisherData:(id)arg1 ;
-(void)pausedPublishingPublisherData:(id)arg1 ;
-(void)retriedPublishingPublisherData:(id)arg1 ;
-(void)startedWaitingForConnectivityForPublicationOfPublisherData:(id)arg1 ;
-(void)scheduledPublicationOfPublisherData:(id)arg1 atDate:(id)arg2 ;
-(void)publicationProgressedWithProgress:(double)arg1 forPublisherData:(id)arg2 ;
-(void)startedUploadingItemOfType:(int)arg1 withThumbnailImage:(id)arg2 forPublisherData:(id)arg3 ;
-(void)uploadQualityDidChange:(id)arg1 forPublisherData:(id)arg2 ;
-(void)canCancelPublishingOfPublisherData:(id)arg1 ;
-(void)cannotCancelPublishingOfPublisherData:(id)arg1 ;
-(NSString *)compositionID;
-(id)initWithCompositionID:(id)arg1 publisherManager:(id)arg2 ;
-(FBPublicationResponse *)publicationResponse;
-(int)compositionState;
-(void)setCompositionState:(int)arg1 ;
-(void)setPublicationResponse:(FBPublicationResponse *)arg1 ;
-(void)setCompositionID:(NSString *)arg1 ;
-(void)setDelegate:(id<FBReactionCompositionStateTrackerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBReactionCompositionStateTrackerDelegate>)delegate;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

