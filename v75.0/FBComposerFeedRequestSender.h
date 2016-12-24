/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequestDelegate.h>
#import <Facebook/FBPublishingRequestSender.h>

@protocol FBNetworkerRequestStatus, FBPublishingRequestSenderDelegate;
@class FBNetworkerRequest, FBComposerPublisherData, FBUserSession, FBPublicationResponse, NSString;

@interface FBComposerFeedRequestSender : NSObject <FBNetworkerRequestDelegate, FBPublishingRequestSender> {

	unsigned long long _mediaType;
	FBNetworkerRequest* _request;
	FBNetworkerRequest* _reorderRequest;
	FBComposerPublisherData* _publication;
	FBUserSession* _session;
	BOOL _includeGraphMigrationBundle;
	unsigned long long _publicationResponseType;
	unsigned long long _requestState;
	FBPublicationResponse* _publicationResponse;
	id<FBNetworkerRequestStatus> _publishRequestStatus;
	long long _numberOfPublishRequests;
	id<FBPublishingRequestSenderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPublishingRequestSenderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkerRequestDidStart:(id)arg1 ;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didCancelWithStatus:(id)arg2 ;
-(void)cleanupOutstandingRequests;
-(void)sendRequestWithPublisherData:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 mediaType:(unsigned long long)arg2 includeGraphMigrationBundle:(BOOL)arg3 publicationResponseType:(unsigned long long)arg4 ;
-(id)initWithUserSession:(id)arg1 mediaType:(unsigned long long)arg2 ;
-(BOOL)_shouldUseSingleStatusPublishRequestWithPublisherData:(id)arg1 ;
-(void)_startRequest:(id)arg1 ;
-(void)setDelegate:(id<FBPublishingRequestSenderDelegate>)arg1 ;
-(id<FBPublishingRequestSenderDelegate>)delegate;
@end

