/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:55 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBWildeMemModelObject.h>

@interface FBMemUserBackstageConnection : FBWildeMemModelObject
-(long long)indexOfOldestPostUnseenByUser:(id)arg1 ;
-(id)sortedPosts;
-(id)oldestPostUnseenByUser:(id)arg1 ;
-(BOOL)_seenByUsers:(id)arg1 containsFBID:(id)arg2 ;
-(BOOL)hasUnseenPostsForUser:(id)arg1 ;
-(long long)numUnseenPostsForUser:(id)arg1 ;
-(long long)numUniqueViewsForUser:(id)arg1 ;
-(BOOL)hasUnseenViewReceiptsSince:(id)arg1 excludingFBID:(id)arg2 ;
@end

