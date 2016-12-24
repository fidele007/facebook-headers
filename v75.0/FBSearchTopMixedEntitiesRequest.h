/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGraphQLPagedDownloadRequest.h>

@class NSArray, NSString;

@interface FBSearchTopMixedEntitiesRequest : FBGraphQLPagedDownloadRequest {

	unsigned long long _numberOfTabs;
	unsigned long long _callSite;
	NSArray* _supportedExperiences;
	NSArray* _filters;
	NSString* _typeaheadSessionID;
	NSString* _querySource;
	NSString* _bsid;
	NSString* _ntCachedTemplateVersion;

}
-(id)newQueryWithCursor:(id)arg1 ;
-(id)initWithTargetID:(id)arg1 callbackPerformer:(id)arg2 count:(unsigned long long)arg3 numberOfTabs:(unsigned long long)arg4 callSite:(unsigned long long)arg5 supportedExperiences:(id)arg6 filters:(id)arg7 bsid:(id)arg8 typeaheadSessionID:(id)arg9 ntCachedTemplateVersion:(id)arg10 ;
@end

