/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBStreamResponseHandler.h>

@class FBUserSession;

@interface FBReactionStreamResponseHandler : FBStreamResponseHandler {

	FBUserSession* _session;

}
-(id)initWithTargetID:(id)arg1 loadType:(unsigned long long)arg2 parser:(id)arg3 analytics:(id)arg4 ;
-(id)initWithTargetID:(id)arg1 loadType:(unsigned long long)arg2 parser:(id)arg3 analytics:(id)arg4 session:(id)arg5 ;
-(id)_parseResponse:(id)arg1 query:(id)arg2 error:(id*)arg3 ;
@end

