/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBCrowdsourcingNewSuggestEditsHoursUtil : NSObject
+(BOOL)isRangeEmptyForTimeRange:(id)arg1 ;
+(id)textForHoursType:(id)arg1 ;
+(id)prefixForDay:(long long)arg1 ;
+(long long)numberOfHourRowsWithValuesForDay:(long long)arg1 inHoursData:(id)arg2 ;
+(id)getHoursValueFromHoursData:(id)arg1 forDay:(long long)arg2 ;
+(id)defaultHoursForRow:(long long)arg1 ;
+(id)closedZeroHours;
+(BOOL)isHoursEmptyForDay:(long long)arg1 atRow:(long long)arg2 forHoursData:(id)arg3 ;
+(BOOL)hasNonEmptyHoursForHoursData:(id)arg1 ;
@end

