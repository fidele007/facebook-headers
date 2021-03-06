/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPublishingRequestSender.h>
#import <Facebook/FBComposerPublisherStatusListener.h>

@protocol FBPublishingRequestSenderDelegate, FBCommerceAdminImageUploaderDelegate;
@class FBGenericPublisher, FBUserSession, FBMemPage, NSString;

@interface FBCommerceAdminImageUploader : NSObject <FBPublishingRequestSender, FBComposerPublisherStatusListener> {

	FBGenericPublisher* _publisher;
	FBUserSession* _session;
	FBMemPage* _page;
	id<FBPublishingRequestSenderDelegate> _delegate;
	id<FBCommerceAdminImageUploaderDelegate> _uploaderDelegate;

}

@property (assign,nonatomic,__weak) id<FBCommerceAdminImageUploaderDelegate> uploaderDelegate;              //@synthesize uploaderDelegate=_uploaderDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPublishingRequestSenderDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
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
-(id)initWithSession:(id)arg1 page:(id)arg2 ;
-(void)publishDidSucceed:(id)arg1 status:(id)arg2 numberOfRequestsSent:(long long)arg3 ;
-(void)publishDidFail:(id)arg1 status:(id)arg2 numberOfRequestsSent:(long long)arg3 ;
-(void)cleanupOutstandingRequests;
-(void)sendRequestWithPublisherData:(id)arg1 ;
-(void)setUploaderDelegate:(id<FBCommerceAdminImageUploaderDelegate>)arg1 ;
-(void)publishNowWithPhotos:(id)arg1 ;
-(void)publishDidStart;
-(void)publishDidCancel;
-(id<FBCommerceAdminImageUploaderDelegate>)uploaderDelegate;
-(void)setDelegate:(id<FBPublishingRequestSenderDelegate>)arg1 ;
-(id<FBPublishingRequestSenderDelegate>)delegate;
@end

