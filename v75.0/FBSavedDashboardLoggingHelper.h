/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBSavedDashboardLoggingHelper : NSObject
+(void)logDashboardImpressionForSection:(id)arg1 referrer:(id)arg2 ;
+(void)logDashboardItemTapped:(id)arg1 section:(id)arg2 notificationID:(id)arg3 ;
+(void)logDashboardItemImpression:(id)arg1 section:(id)arg2 timespan:(long long)arg3 notificationID:(id)arg4 ;
+(void)logDashboardMenuItemTapped:(id)arg1 action:(id)arg2 mechanism:(id)arg3 notificationID:(id)arg4 ;
+(void)logDashboardMoreMenuImpression:(id)arg1 mechanism:(id)arg2 options:(id)arg3 notificationID:(id)arg4 ;
+(void)logDashboardShareMenuImpression:(id)arg1 options:(id)arg2 notificationID:(id)arg3 ;
+(void)logDashboardSectionSwitchFromSection:(id)arg1 toSection:(id)arg2 ;
+(void)logDashboardImpressionForFilterList:(id)arg1 ;
+(void)logDashboardFilterButtonTapped:(id)arg1 ;
+(void)logDashboardFilterCancelledByTap:(id)arg1 ;
+(void)logDashboardShareMenuItemTapped:(id)arg1 mechanism:(id)arg2 notificationID:(id)arg3 ;
+(void)logDashboardNuxImpression;
@end

