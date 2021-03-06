/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBStreamResponseHandler.h>

@protocol FBGraphQLConnectionInterface;
@class FBGraphQLConsistentLookasideCache, FBGraphQLConnectionInsertionLocation, FBDestinationEndConditionTracker;

@interface FBMemStoryStreamResponseHandler : FBStreamResponseHandler {

	FBGraphQLConsistentLookasideCache* _consistentLookasideCache;
	FBGraphQLConnectionInsertionLocation* _locationForNextInsertion;
	FBDestinationEndConditionTracker* _endConditionTracker;
	long long _feedType;
	id<FBGraphQLConnectionInterface> _connection;

}

@property (nonatomic,readonly) long long feedType;                                       //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) id<FBGraphQLConnectionInterface> connection;              //@synthesize connection=_connection - In the implementation block
-(void)processCancelledRequest:(id)arg1 status:(id)arg2 ;
-(void)processFailedRequest:(id)arg1 error:(id)arg2 status:(id)arg3 ;
-(void)processResponse:(id)arg1 forRequest:(id)arg2 inDownloadRequest:(id)arg3 isLastResponse:(BOOL)arg4 responseUUID:(id)arg5 status:(id)arg6 ;
-(long long)feedType;
-(id)processResponse:(id)arg1 forQuery:(id)arg2 responseIsAlreadyParsed:(BOOL)arg3 status:(id)arg4 ;
-(void)_addEdgesToStoreForLoadResult:(id)arg1 responseUUID:(id)arg2 userInfo:(id)arg3 ;
-(id)initWithTargetID:(id)arg1 feedType:(long long)arg2 loadType:(unsigned long long)arg3 connection:(id)arg4 insertionLocation:(id)arg5 consistentLookasideCache:(id)arg6 analytics:(id)arg7 experimentManager:(id)arg8 destinationEndConditionTracker:(id)arg9 ;
-(void)handleRequestRetryWithError:(id)arg1 status:(id)arg2 ;
-(id)processResponse:(id)arg1 forQuery:(id)arg2 status:(id)arg3 ;
-(id<FBGraphQLConnectionInterface>)connection;
@end

