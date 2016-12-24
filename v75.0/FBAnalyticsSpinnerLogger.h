/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBAnalytics, FBAnalyticsPerfLogger;

@interface FBAnalyticsSpinnerLogger : NSObject {

	double _spinnerStartTime;
	BOOL _active;
	NSString* _spinnerName;
	NSString* _moduleName;
	NSString* _analyticsUUID;
	FBAnalytics* _analytics;
	FBAnalyticsPerfLogger* _perfLogger;
	unsigned long long _currentSpinnerID;
	double _timeElapsed;

}

@property (assign,nonatomic) double timeElapsed;                                 //@synthesize timeElapsed=_timeElapsed - In the implementation block
@property (nonatomic,readonly) BOOL active;                                      //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) unsigned long long currentSpinnerID;              //@synthesize currentSpinnerID=_currentSpinnerID - In the implementation block
@property (nonatomic,copy,readonly) NSString * spinnerName;                      //@synthesize spinnerName=_spinnerName - In the implementation block
-(id)initWithSpinnerName:(id)arg1 moduleName:(id)arg2 ;
-(void)logSpinnerEvent:(/*^block*/id)arg1 withResult:(unsigned long long)arg2 ;
-(double)timeElapsed;
-(void)markAsStartupLoad;
-(void)logSpinnerEvent:(/*^block*/id)arg1 withResult:(unsigned long long)arg2 timeInterval:(double)arg3 ;
-(unsigned long long)currentSpinnerID;
-(NSString *)spinnerName;
-(void)logSpinnerEvent:(/*^block*/id)arg1 withResult:(unsigned long long)arg2 timeInterval:(double)arg3 spinnerName:(id)arg4 ;
-(id)initWithSpinnerName:(id)arg1 moduleName:(id)arg2 analyticsUUID:(id)arg3 ;
-(id)initWithSpinnerName:(id)arg1 moduleName:(id)arg2 analyticsUUID:(id)arg3 analytics:(id)arg4 perfLogger:(id)arg5 ;
-(id)spinnerNameSpace;
-(void)setTimeElapsed:(double)arg1 ;
-(/*^block*/id)_perfLoggerBlockForResult:(unsigned long long)arg1 extraBlock:(/*^block*/id)arg2 ;
-(/*^block*/id)_perfLoggerBlockForResult:(unsigned long long)arg1 extraBlock:(/*^block*/id)arg2 spinnerName:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(void)reset;
-(void)start;
-(BOOL)active;
@end
