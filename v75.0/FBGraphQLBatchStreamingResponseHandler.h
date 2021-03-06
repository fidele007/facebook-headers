/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBResponseHandling.h>

@protocol FBRequest, FBResponseHandlerDelegate;
@class NSHTTPURLResponse, FBGraphQLBatchResponsesBuffer, FBGraphQLBatchStreamingParser, NSString;

@interface FBGraphQLBatchStreamingResponseHandler : NSObject <FBResponseHandling> {

	NSHTTPURLResponse* _HTTPURLResponse;
	BOOL _processedSummaryChunk;
	FBGraphQLBatchResponsesBuffer* _responsesBuffer;
	BOOL _hasFailed;
	FBGraphQLBatchStreamingParser* _parser;
	id<FBRequest> _request;
	id<FBResponseHandlerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<FBRequest> request;                                    //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<FBResponseHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didProcessResponse:(id)arg1 forQuery:(id)arg2 ;
-(void)_didProcessError:(id)arg1 forQuery:(id)arg2 ;
-(void)_didProcessSummaryWithSuccesses:(unsigned long long)arg1 skipped:(unsigned long long)arg2 errored:(unsigned long long)arg3 ;
-(void)_vendResponses;
-(id)initWithRequest:(id)arg1 HTTPURLResponse:(id)arg2 callbackQueue:(id)arg3 objectFactory:(id)arg4 ;
-(void)setDelegate:(id<FBResponseHandlerDelegate>)arg1 ;
-(id<FBResponseHandlerDelegate>)delegate;
-(id<FBRequest>)request;
-(void)close;
-(void)open;
-(void)handleData:(id)arg1 ;
-(void)_didFailWithError:(id)arg1 ;
-(void)abort;
@end

