/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, FBFGLLogger;

@interface FBFGLLocationServiceConfig : NSObject {

	NSSet* _allFetcherIds;
	NSSet* _allFetchers;
	FBFGLLogger* _logger;
	BOOL _fireTriggerUponForeground;
	BOOL _expireOldSignal;
	double _periodicity;
	double _minimumFetchInterval;
	double _maximumSignalAge;
	double _maximumSignalsCollectionTime;

}

@property (nonatomic,readonly) double periodicity;                               //@synthesize periodicity=_periodicity - In the implementation block
@property (nonatomic,readonly) double minimumFetchInterval;                      //@synthesize minimumFetchInterval=_minimumFetchInterval - In the implementation block
@property (nonatomic,readonly) BOOL fireTriggerUponForeground;                   //@synthesize fireTriggerUponForeground=_fireTriggerUponForeground - In the implementation block
@property (nonatomic,readonly) double maximumSignalAge;                          //@synthesize maximumSignalAge=_maximumSignalAge - In the implementation block
@property (nonatomic,readonly) BOOL expireOldSignal;                             //@synthesize expireOldSignal=_expireOldSignal - In the implementation block
@property (nonatomic,readonly) double maximumSignalsCollectionTime;              //@synthesize maximumSignalsCollectionTime=_maximumSignalsCollectionTime - In the implementation block
-(double)minimumFetchInterval;
-(double)maximumSignalsCollectionTime;
-(BOOL)expireOldSignal;
-(double)maximumSignalAge;
-(void)_generateFetcherIds;
-(id)initWithPeriodicity:(double)arg1 maximumSignalAge:(double)arg2 maximumSignalsCollectionTime:(double)arg3 fetchers:(id)arg4 minimumFetchInterval:(double)arg5 logger:(id)arg6 fireTriggerUponForeground:(BOOL)arg7 expireOldSignal:(BOOL)arg8 ;
-(id)allFetchers;
-(id)allFetcherIds;
-(double)periodicity;
-(BOOL)fireTriggerUponForeground;
@end

