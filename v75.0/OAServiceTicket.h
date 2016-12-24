/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OAMutableURLRequest, NSURLResponse, NSError;

@interface OAServiceTicket : NSObject {

	OAMutableURLRequest* request;
	NSURLResponse* response;
	NSError* error;
	BOOL didSucceed;

}

@property (retain) OAMutableURLRequest * request; 
@property (retain) NSURLResponse * response; 
@property (retain) NSError * error; 
@property (assign) BOOL didSucceed; 
-(id)initWithRequest:(id)arg1 response:(id)arg2 didSucceed:(BOOL)arg3 ;
-(id)initWithRequest:(id)arg1 response:(id)arg2 didSucceed:(BOOL)arg3 error:(id)arg4 ;
-(void)dealloc;
-(OAMutableURLRequest *)request;
-(NSURLResponse *)response;
-(void)setRequest:(OAMutableURLRequest *)arg1 ;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setDidSucceed:(BOOL)arg1 ;
-(BOOL)didSucceed;
@end

