/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface FBCLLocationQualityChecker : NSObject {

	double _oldestLocTimestamp;
	NSMutableArray* _lastLocations;
	double _bestAccuracy;
	double _timeWindow;

}

@property (nonatomic,readonly) double timeWindow;              //@synthesize timeWindow=_timeWindow - In the implementation block
-(id)initWithTimeWindow:(double)arg1 ;
-(unsigned long long)qualityLevelUntilDate:(id)arg1 ;
-(void)addLocations:(id)arg1 forDate:(id)arg2 ;
-(double)timeWindow;
@end

