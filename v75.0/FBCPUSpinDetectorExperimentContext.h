/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface FBCPUSpinDetectorExperimentContext : FBExperimentContext {

	long long _threadPctTrigger;
	long long _processPctTrigger;
	BOOL _detectorEnabled;
	long long _periodSeconds;

}

@property (assign,nonatomic) long long threadPctTrigger;               //@synthesize threadPctTrigger=_threadPctTrigger - In the implementation block
@property (assign,nonatomic) long long processPctTrigger;              //@synthesize processPctTrigger=_processPctTrigger - In the implementation block
@property (assign,nonatomic) BOOL detectorEnabled;                     //@synthesize detectorEnabled=_detectorEnabled - In the implementation block
@property (assign,nonatomic) long long periodSeconds;                  //@synthesize periodSeconds=_periodSeconds - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)detectorEnabled;
-(long long)periodSeconds;
-(long long)processPctTrigger;
-(long long)threadPctTrigger;
-(void)setThreadPctTrigger:(long long)arg1 ;
-(void)setProcessPctTrigger:(long long)arg1 ;
-(void)setDetectorEnabled:(BOOL)arg1 ;
-(void)setPeriodSeconds:(long long)arg1 ;
@end

