/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGraphQLDownloadRequest.h>

@class NSString;

@interface FBSearchNullStateCombinedEndpointRequest : FBGraphQLDownloadRequest {

	NSString* _rankingModel;
	NSString* _suggestionSource;

}
-(id)newQuery;
-(id)initWithRankingModel:(id)arg1 suggestionSource:(id)arg2 targetID:(id)arg3 callbackPerformer:(id)arg4 ;
-(id)_sourceInfo;
@end

