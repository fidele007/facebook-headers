/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSDate;

@interface FBBackgroundActivityInterval : FBValueObject <NSCopying, NSCoding> {

	double _timeSpentInInterval;
	double _timeSpentOnScreen;
	NSDate* _intervalStartTime;
	NSDate* _intervalEndTime;

}

@property (nonatomic,readonly) double timeSpentInInterval;                   //@synthesize timeSpentInInterval=_timeSpentInInterval - In the implementation block
@property (nonatomic,readonly) double timeSpentOnScreen;                     //@synthesize timeSpentOnScreen=_timeSpentOnScreen - In the implementation block
@property (nonatomic,copy,readonly) NSDate * intervalStartTime;              //@synthesize intervalStartTime=_intervalStartTime - In the implementation block
@property (nonatomic,copy,readonly) NSDate * intervalEndTime;                //@synthesize intervalEndTime=_intervalEndTime - In the implementation block
-(id)initWithTimeSpentInInterval:(double)arg1 timeSpentOnScreen:(double)arg2 intervalStartTime:(id)arg3 intervalEndTime:(id)arg4 ;
-(double)timeSpentInInterval;
-(double)timeSpentOnScreen;
-(NSDate *)intervalStartTime;
-(NSDate *)intervalEndTime;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

