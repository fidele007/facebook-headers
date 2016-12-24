/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBGraphQLBatchRequest, NSMutableArray, NSMutableDictionary;

@interface FBGraphQLBatchResponsesBuffer : NSObject {

	FBGraphQLBatchRequest* _request;
	NSMutableArray* _arrayOfBuffers;
	unsigned long long _vendedResponsesCount;
	NSMutableDictionary* _countForQueriesReferenceParameters;

}
-(id)vendNextResponse;
-(id)_responseBufferForQuery:(id)arg1 ;
-(id)initForRequest:(id)arg1 ;
-(void)setSkippedResults:(unsigned long long)arg1 erroredResults:(unsigned long long)arg2 ;
-(BOOL)hasVendedAllExpectedResponses;
-(void)addResponse:(id)arg1 ;
@end
