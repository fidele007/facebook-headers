/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBEventsDashboardDataSourceHelper : NSObject
+(id)getEventsGroupedByWeek:(id)arg1 fineGrainThisWeek:(BOOL)arg2 ;
+(id)getEventsGroupedByMonth:(id)arg1 ;
+(id)getStandardSectionHeaderWithTitle:(id)arg1 ;
+(id)getThisWeeksEventsFromEvents:(id)arg1 ;
+(id)getFineGrainGroupsForThisWeekEvents:(id)arg1 ;
+(id)formatSectionTitleString:(id)arg1 ;
+(id)getNextWeeksEventsFromEvents:(id)arg1 ;
+(id)getEventsInCurrentMonth:(id)arg1 ;
+(id)getLaterThisMonthSectionTitle;
+(id)granularWeekSectionTitleForDate:(id)arg1 ;
+(id)getEventsFallingWithinWeekOffset:(long long)arg1 events:(id)arg2 ;
+(id)monthSectionTitleForDate:(id)arg1 ;
+(id)getTopLevelHeaderFont;
+(id)getCellSeperatorColor;
+(id)uppercaseFirstLetterInString:(id)arg1 ;
@end

