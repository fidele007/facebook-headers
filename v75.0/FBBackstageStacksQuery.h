/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBBackstageStacksQuery : NSObject
+(void)_handleStacksResponse:(id)arg1 isCachedResponse:(BOOL)arg2 user:(id)arg3 completion:(/*^block*/id)arg4 ;
+(void)loadThreadsWithSession:(id)arg1 forceRefresh:(BOOL)arg2 priority:(long long)arg3 completion:(/*^block*/id)arg4 ;
+(id)_dedupedPerson:(id)arg1 ;
+(id)_filteredCachedPersonForCurrentTime:(id)arg1 ;
+(void)loadStacks:(id)arg1 forceRefresh:(BOOL)arg2 priority:(long long)arg3 completion:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 ;
+(void)loadPostsWithIDs:(id)arg1 session:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)loadThreadWithIDs:(id)arg1 session:(id)arg2 forceRefresh:(BOOL)arg3 priority:(long long)arg4 completion:(/*^block*/id)arg5 ;
@end

