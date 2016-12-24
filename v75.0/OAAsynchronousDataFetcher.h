/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OAMutableURLRequest, NSURLResponse, NSURLConnection, NSMutableData;

@interface OAAsynchronousDataFetcher : NSObject {

	OAMutableURLRequest* request;
	NSURLResponse* response;
	NSURLConnection* connection;
	NSMutableData* responseData;
	id delegate;
	SEL didFinishSelector;
	SEL didFailSelector;

}
+(id)asynchronousFetcherWithRequest:(id)arg1 delegate:(id)arg2 didFinishSelector:(SEL)arg3 didFailSelector:(SEL)arg4 ;
-(id)initWithRequest:(id)arg1 delegate:(id)arg2 didFinishSelector:(SEL)arg3 didFailSelector:(SEL)arg4 ;
-(void)cancel;
-(void)dealloc;
-(void)start;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
@end

