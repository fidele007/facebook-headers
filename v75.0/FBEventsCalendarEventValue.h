/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMemEvent, UIColor;

@interface FBEventsCalendarEventValue : FBValueObject <NSCopying> {

	BOOL _isAllDay;
	FBMemEvent* _event;
	UIColor* _color;
	unsigned long long _type;

}

@property (nonatomic,copy,readonly) FBMemEvent * event;              //@synthesize event=_event - In the implementation block
@property (nonatomic,copy,readonly) UIColor * color;                 //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL isAllDay;                        //@synthesize isAllDay=_isAllDay - In the implementation block
-(id)initWithEvent:(id)arg1 color:(id)arg2 type:(unsigned long long)arg3 isAllDay:(BOOL)arg4 ;
-(unsigned long long)type;
-(FBMemEvent *)event;
-(UIColor *)color;
-(BOOL)isAllDay;
@end

