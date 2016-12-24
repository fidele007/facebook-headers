/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequestDelegate.h>

@protocol OS_dispatch_queue;
@class FBUserSession, NSMutableDictionary, NSArray, NSObject, NSDate, NSNumber, NSString;

@interface FBPrivacyCheckupNetworkController : NSObject <FBNetworkerRequestDelegate> {

	FBUserSession* _session;
	NSMutableDictionary* _enqueuedRequestMap;
	NSArray* _requestsInFlight;
	NSObject*<OS_dispatch_queue> _requestProcessingQueue;
	NSDate* _requestInsertedToQueueTime;
	NSNumber* _requestInFlightSessionID;
	long long _totalNumberOfMutationWrites;
	long long _totalNumberOfLoggingWrites;
	long long _totalBatchRequestsSent;
	long long _maxNumRetries;
	long long _maxBatchSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 willRetryWithError:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)_enqueueData:(id)arg1 forSessionID:(id)arg2 ;
-(void)_flushRequestsQueueAndForceSendRequests:(BOOL)arg1 forEvent:(id)arg2 forSessionID:(id)arg3 ;
-(void)_sendRequests:(id)arg1 forEvent:(id)arg2 forSessionID:(id)arg3 ;
-(void)resetWriteRequestCounters;
-(void)enqueueRequestData:(id)arg1 forSessionID:(id)arg2 ;
-(void)sendRequestsForEvent:(id)arg1 withSessionID:(id)arg2 ;
-(id)enqueuedRequestsMap;
-(id)requestsInFlight;
-(id)requestProcessingQueue;
-(id)initWithSession:(id)arg1 ;
@end

