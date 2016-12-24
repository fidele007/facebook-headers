/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBRequest, FBDataDeserializing, FBResponseProcessorDelegate;
@class NSHTTPURLResponse;

@interface FBResponseProcessor : NSObject {

	id<FBRequest> _request;
	id<FBDataDeserializing> _dataDeserializer;
	NSHTTPURLResponse* _HTTPURLResponse;
	id<FBResponseProcessorDelegate> _delegate;

}

@property (nonatomic,readonly) id<FBRequest> request;                                      //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) id<FBDataDeserializing> dataDeserializer;                   //@synthesize dataDeserializer=_dataDeserializer - In the implementation block
@property (nonatomic,readonly) NSHTTPURLResponse * HTTPURLResponse;                        //@synthesize HTTPURLResponse=_HTTPURLResponse - In the implementation block
@property (assign,nonatomic,__weak) id<FBResponseProcessorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSHTTPURLResponse *)HTTPURLResponse;
-(id)initWithRequest:(id)arg1 dataDeserializer:(id)arg2 HTTPURLResponse:(id)arg3 ;
-(void)processData:(id)arg1 withConfiguration:(id)arg2 ;
-(id<FBDataDeserializing>)dataDeserializer;
-(void)setDelegate:(id<FBResponseProcessorDelegate>)arg1 ;
-(id)description;
-(id<FBResponseProcessorDelegate>)delegate;
-(id<FBRequest>)request;
@end

