/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGraphQLPagedDownloadRequest.h>

@class NSString;

@interface FBAppFeedDownloadRequest : FBGraphQLPagedDownloadRequest {

	long long _limit;
	BOOL _useStoryQuery;
	BOOL _prefetchingEnabled;
	NSString* _refreshMode;

}

@property (nonatomic,copy) NSString * refreshMode;              //@synthesize refreshMode=_refreshMode - In the implementation block
-(id)newQueryWithCursor:(id)arg1 ;
-(NSString *)refreshMode;
-(void)setRefreshMode:(NSString *)arg1 ;
-(id)initWithTargetID:(id)arg1 callbackPerformer:(id)arg2 limit:(long long)arg3 refreshMode:(id)arg4 isPrefetchingEnabled:(BOOL)arg5 useStoryQuery:(BOOL)arg6 ;
@end
