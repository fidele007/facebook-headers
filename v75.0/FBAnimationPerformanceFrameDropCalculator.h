/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBAnimationPerformanceFrameDropCalculator : NSObject {

	long long _numberOfFrameDropsPerSmallDropEvent;
	long long _numberOfFrameDropsPerLargeDropEvent;
	long long _maximumNumberOfFrameDrops;
	double _smallFrameDropEvents;
	double _largeFrameDropEvents;
	double _duration;
	double _totalTimeStalled;

}

@property (nonatomic,readonly) double smallFrameDropEvents;              //@synthesize smallFrameDropEvents=_smallFrameDropEvents - In the implementation block
@property (nonatomic,readonly) double largeFrameDropEvents;              //@synthesize largeFrameDropEvents=_largeFrameDropEvents - In the implementation block
@property (nonatomic,readonly) double duration;                          //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double totalTimeStalled;                  //@synthesize totalTimeStalled=_totalTimeStalled - In the implementation block
-(id)initWithNumberOfFrameDropsPerSmallDropEvent:(long long)arg1 numberOfFrameDropsPerLargeDropEvent:(long long)arg2 maximumNumberOfFrameDrops:(long long)arg3 ;
-(double)smallFrameDropEvents;
-(double)largeFrameDropEvents;
-(double)totalTimeStalled;
-(long long)calculateFrameDropsFromActualFrameTime:(double)arg1 idealFrameTime:(double)arg2 ;
-(double)duration;
-(void)reset;
@end

