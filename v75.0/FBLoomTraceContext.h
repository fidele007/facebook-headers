/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBLoomTraceControlling;
@class NSString;

@interface FBLoomTraceContext : NSObject {

	int _enabledProviders;
	unsigned _cpuSamplingRate;
	long long _triggerId;
	long long _traceID;
	id<FBLoomTraceControlling> _controller;
	double _maximumTraceDuration;
	NSString* _customHeader;

}

@property (nonatomic,readonly) long long triggerId;                                //@synthesize triggerId=_triggerId - In the implementation block
@property (nonatomic,readonly) int enabledProviders;                               //@synthesize enabledProviders=_enabledProviders - In the implementation block
@property (nonatomic,readonly) long long traceID;                                  //@synthesize traceID=_traceID - In the implementation block
@property (nonatomic,readonly) id<FBLoomTraceControlling> controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,readonly) unsigned cpuSamplingRate;                           //@synthesize cpuSamplingRate=_cpuSamplingRate - In the implementation block
@property (nonatomic,readonly) double maximumTraceDuration;                        //@synthesize maximumTraceDuration=_maximumTraceDuration - In the implementation block
@property (nonatomic,copy,readonly) NSString * customHeader;                       //@synthesize customHeader=_customHeader - In the implementation block
+(id)contextWithTriggerId:(long long)arg1 enabledProviders:(int)arg2 controller:(id)arg3 cpuSamplingRate:(unsigned)arg4 customHeader:(id)arg5 maximumDuration:(double)arg6 ;
+(id)contextWithMaximumTraceDuration:(double)arg1 ;
+(id)contextWithTriggerId:(long long)arg1 enabledProviders:(int)arg2 controller:(id)arg3 ;
-(double)maximumTraceDuration;
-(int)enabledProviders;
-(long long)triggerId;
-(NSString *)customHeader;
-(long long)traceID;
-(unsigned)cpuSamplingRate;
-(id)init;
-(id<FBLoomTraceControlling>)controller;
@end

