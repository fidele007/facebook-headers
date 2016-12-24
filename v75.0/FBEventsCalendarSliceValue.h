/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBEventsCalendarEventValue, NSDate;

@interface FBEventsCalendarSliceValue : FBValueObject <NSCopying> {

	FBEventsCalendarEventValue* _event;
	NSDate* _start;
	NSDate* _end;
	unsigned long long _rangeType;

}

@property (nonatomic,copy,readonly) FBEventsCalendarEventValue * event;              //@synthesize event=_event - In the implementation block
@property (nonatomic,copy,readonly) NSDate * start;                                  //@synthesize start=_start - In the implementation block
@property (nonatomic,copy,readonly) NSDate * end;                                    //@synthesize end=_end - In the implementation block
@property (nonatomic,readonly) unsigned long long rangeType;                         //@synthesize rangeType=_rangeType - In the implementation block
-(unsigned long long)rangeType;
-(id)initWithEvent:(id)arg1 start:(id)arg2 end:(id)arg3 rangeType:(unsigned long long)arg4 ;
-(NSDate *)start;
-(NSDate *)end;
-(FBEventsCalendarEventValue *)event;
@end
