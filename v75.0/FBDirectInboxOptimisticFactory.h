/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBDirectInboxOptimisticFactory : NSObject
+(id)optimisticThreadForPublishingTask:(id)arg1 toUserGraphQLID:(id)arg2 fromUserGraphQLID:(id)arg3 ;
+(id)optimisticPersonWithThreads:(id)arg1 copyPerson:(id)arg2 personGraphQLID:(id)arg3 session:(id)arg4 ;
+(id)optimisticThreadForBackstagePost:(id)arg1 threadGraphQLID:(id)arg2 toUserGraphQLID:(id)arg3 fromUserGraphQLID:(id)arg4 ;
+(id)backstagePostFromPublishingTask:(id)arg1 ;
+(id)sortedInboxBucketsForPeople:(id)arg1 ;
+(id)optimisticPeopleForCurrentPublishingTasks:(id)arg1 ;
+(id)mergedPersonWithOptimisticPerson:(id)arg1 existingPerson:(id)arg2 ;
+(id)optimisticPersonByMergingContentsOfPublishingTask:(id)arg1 existingPerson:(id)arg2 session:(id)arg3 ;
@end

