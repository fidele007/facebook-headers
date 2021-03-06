/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBDateKey, NSArray;

@interface FBEventCalendarDay : FBValueObject <NSCopying> {

	FBDateKey* _key;
	NSArray* _events;
	NSArray* _birthdayPeople;
	NSArray* _appointments;

}

@property (nonatomic,copy,readonly) FBDateKey * key;                       //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSArray * events;                      //@synthesize events=_events - In the implementation block
@property (nonatomic,copy,readonly) NSArray * birthdayPeople;              //@synthesize birthdayPeople=_birthdayPeople - In the implementation block
@property (nonatomic,copy,readonly) NSArray * appointments;                //@synthesize appointments=_appointments - In the implementation block
-(NSArray *)appointments;
-(id)initWithKey:(id)arg1 events:(id)arg2 birthdayPeople:(id)arg3 appointments:(id)arg4 ;
-(NSArray *)birthdayPeople;
-(FBDateKey *)key;
-(NSArray *)events;
@end

