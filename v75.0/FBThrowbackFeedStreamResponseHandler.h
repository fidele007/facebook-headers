/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBStreamResponseHandler.h>

@protocol FBGraphQLConnectionInterface;
@class FBGraphQLConnectionInsertionLocation;

@interface FBThrowbackFeedStreamResponseHandler : FBStreamResponseHandler {

	id<FBGraphQLConnectionInterface> _connection;
	FBGraphQLConnectionInsertionLocation* _insertionLocation;

}
+(id)_connectionInsertLocationFromLoadType:(unsigned long long)arg1 connection:(id)arg2 ;
-(void)processCancelledRequest:(id)arg1 status:(id)arg2 ;
-(void)processFailedRequest:(id)arg1 error:(id)arg2 status:(id)arg3 ;
-(void)processResponse:(id)arg1 forRequest:(id)arg2 inDownloadRequest:(id)arg3 isLastResponse:(BOOL)arg4 responseUUID:(id)arg5 status:(id)arg6 ;
-(id)initWithTargetID:(id)arg1 loadType:(unsigned long long)arg2 parser:(id)arg3 connection:(id)arg4 responseCache:(id)arg5 insertionLocation:(id)arg6 analytics:(id)arg7 ;
@end

