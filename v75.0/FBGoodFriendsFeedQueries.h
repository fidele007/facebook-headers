/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBGoodFriendsFeedQueries : NSObject
+(id)cachedGoodFriendsListWithSession:(id)arg1 ;
+(void)fetchCachedGoodFriendsListWithSession:(id)arg1 messagePackCoder:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)fetchFriendListWithMembersWithSession:(id)arg1 friendListID:(id)arg2 count:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
+(void)cacheGoodFriendsList:(id)arg1 withSession:(id)arg2 ;
+(void)fetchGoodFriendsListWithSession:(id)arg1 forceRefresh:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(void)fetchTopFriendsWithSession:(id)arg1 count:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
+(void)_parseGoodFriendsFriendListWithResponse:(id)arg1 session:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
