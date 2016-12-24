/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBStreamResponseHandler.h>

@protocol FBAppFeedStreamResponseHandlerDelegate;
@class FBGraphQLConnectionStore, FBGraphQLConnectionInsertionLocation, FBUserSession;

@interface FBAppFeedStreamResponseHandler : FBStreamResponseHandler {

	id<FBAppFeedStreamResponseHandlerDelegate> _delegate;
	FBGraphQLConnectionStore* _connectionStore;
	FBGraphQLConnectionInsertionLocation* _insertLocation;
	FBUserSession* _session;

}
-(void)processCancelledRequest:(id)arg1 status:(id)arg2 ;
-(void)processFailedRequest:(id)arg1 error:(id)arg2 status:(id)arg3 ;
-(void)processResponse:(id)arg1 forRequest:(id)arg2 inDownloadRequest:(id)arg3 isLastResponse:(BOOL)arg4 responseUUID:(id)arg5 status:(id)arg6 ;
-(id)initWithTargetID:(id)arg1 loadType:(unsigned long long)arg2 parser:(id)arg3 connectionStore:(id)arg4 insertionLocation:(id)arg5 consistentLookasideCache:(id)arg6 analytics:(id)arg7 session:(id)arg8 delegate:(id)arg9 ;
@end

