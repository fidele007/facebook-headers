/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBPageAdminPostPromoteRequestFactory : NSObject
+(id)createBudgetRecommendationsRequestWithPageID:(id)arg1 componentApp:(id)arg2 storyID:(id)arg3 stickyBudget:(id)arg4 audience:(id)arg5 objective:(id)arg6 campaignLength:(id)arg7 maxBudgetCount:(unsigned long long)arg8 adAccountID:(id)arg9 ;
+(unsigned long long)defaultHardTimeout;
+(id)createBoostedPostBudgetsFetchRequestWithPageID:(id)arg1 componentApp:(id)arg2 storyID:(id)arg3 stickyBudget:(id)arg4 audience:(id)arg5 objective:(id)arg6 campaignLength:(id)arg7 maxBudgetCount:(unsigned long long)arg8 adAccountID:(id)arg9 callbackPerformer:(id)arg10 ;
+(id)createBoostedPostInitialRequestsWithPageID:(id)arg1 storyID:(id)arg2 maxBudgetRecommendationsCount:(unsigned long long)arg3 audience:(id)arg4 ;
+(id)createAdminInfoRequestsWithPageID:(id)arg1 storyID:(id)arg2 stickyBudget:(id)arg3 adAccountID:(id)arg4 audience:(id)arg5 campaignLength:(id)arg6 maxBudgetRecommendationsCount:(unsigned long long)arg7 ;
@end

