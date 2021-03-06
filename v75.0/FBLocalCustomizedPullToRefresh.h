/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSDate, NSArray, NSURL, FBKeyframesPullToRefreshAnimation;

@interface FBLocalCustomizedPullToRefresh : FBValueObject <NSCopying, NSCoding> {

	unsigned long long _key;
	NSDate* _startTime;
	NSDate* _endTime;
	NSArray* _daysOfWeek;
	double _startTimeOfDay;
	double _endTimeOfDay;
	NSURL* _animationFileURL;
	FBKeyframesPullToRefreshAnimation* _animation;
	NSDate* _lastUpdated;

}

@property (nonatomic,readonly) unsigned long long key;                                          //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSDate * startTime;                                         //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,copy,readonly) NSDate * endTime;                                           //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,copy,readonly) NSArray * daysOfWeek;                                       //@synthesize daysOfWeek=_daysOfWeek - In the implementation block
@property (nonatomic,readonly) double startTimeOfDay;                                           //@synthesize startTimeOfDay=_startTimeOfDay - In the implementation block
@property (nonatomic,readonly) double endTimeOfDay;                                             //@synthesize endTimeOfDay=_endTimeOfDay - In the implementation block
@property (nonatomic,copy,readonly) NSURL * animationFileURL;                                   //@synthesize animationFileURL=_animationFileURL - In the implementation block
@property (nonatomic,copy,readonly) FBKeyframesPullToRefreshAnimation * animation;              //@synthesize animation=_animation - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastUpdated;                                       //@synthesize lastUpdated=_lastUpdated - In the implementation block
-(id)initWithKey:(unsigned long long)arg1 startTime:(id)arg2 endTime:(id)arg3 daysOfWeek:(id)arg4 startTimeOfDay:(double)arg5 endTimeOfDay:(double)arg6 animationFileURL:(id)arg7 animation:(id)arg8 lastUpdated:(id)arg9 ;
-(double)startTimeOfDay;
-(double)endTimeOfDay;
-(NSURL *)animationFileURL;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)key;
-(FBKeyframesPullToRefreshAnimation *)animation;
-(NSDate *)startTime;
-(NSDate *)endTime;
-(NSDate *)lastUpdated;
-(NSArray *)daysOfWeek;
@end

