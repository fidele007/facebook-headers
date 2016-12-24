/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPlatformActionOperation.h>
#import <Facebook/FBPlatformActionPublisherOperating.h>
#import <Facebook/FBComposerPublisherStatusListener.h>

@protocol FBPublisherProvider;
@class FBComposerLogger, FBUserSession, NSString, FBComposerPublisherData, FBRobotext, FBComposerOpenGraphActionPublisher;

@interface FBPlatformActionFetchRobotextOperation : FBPlatformActionOperation <FBPlatformActionPublisherOperating, FBComposerPublisherStatusListener> {

	FBComposerLogger* _logger;
	id<FBPublisherProvider> _publisherProvider;
	FBUserSession* _userSession;
	NSString* _primaryObjectField;
	FBComposerPublisherData* _publisherData;
	FBRobotext* _robotext;
	NSString* _sharedObjectFBID;
	NSString* _channel;
	FBComposerOpenGraphActionPublisher* _robotextPublisher;

}

@property (nonatomic,copy,readonly) NSString * channel;                                           //@synthesize channel=_channel - In the implementation block
@property (nonatomic,copy) NSString * primaryObjectField;                                         //@synthesize primaryObjectField=_primaryObjectField - In the implementation block
@property (nonatomic,retain) FBRobotext * robotext;                                               //@synthesize robotext=_robotext - In the implementation block
@property (nonatomic,retain) FBComposerOpenGraphActionPublisher * robotextPublisher;              //@synthesize robotextPublisher=_robotextPublisher - In the implementation block
@property (nonatomic,copy) NSString * sharedObjectFBID;                                           //@synthesize sharedObjectFBID=_sharedObjectFBID - In the implementation block
@property (nonatomic,retain) FBComposerPublisherData * publisherData;                             //@synthesize publisherData=_publisherData - In the implementation block
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
-(FBComposerPublisherData *)publisherData;
-(FBRobotext *)robotext;
-(void)setPublisherData:(FBComposerPublisherData *)arg1 ;
-(NSString *)sharedObjectFBID;
-(void)setSharedObjectFBID:(NSString *)arg1 ;
-(id)defaultErrorMessage;
-(void)_cancelRobotextPublisher;
-(FBComposerOpenGraphActionPublisher *)robotextPublisher;
-(void)setRobotextPublisher:(FBComposerOpenGraphActionPublisher *)arg1 ;
-(void)setRobotext:(FBRobotext *)arg1 ;
-(void)setPrimaryObjectField:(NSString *)arg1 ;
-(id)initWithAction:(id)arg1 channel:(id)arg2 publisherProvider:(id)arg3 logger:(id)arg4 userSession:(id)arg5 ;
-(NSString *)primaryObjectField;
-(void)cancel;
-(void)cleanup;
-(NSString *)channel;
-(void)process;
@end

