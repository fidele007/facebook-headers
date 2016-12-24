/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface FBVideoNetworkAutoPlayRuleExperimentContext : FBExperimentContext {

	BOOL _autoplayForUnknownBandwidth;
	long long _maxSampleStaleness;
	long long _minConfidence;
	BOOL _enabled;
	BOOL _enabledVod;
	long long _minBandwidth;

}

@property (assign,nonatomic) BOOL autoplayForUnknownBandwidth;              //@synthesize autoplayForUnknownBandwidth=_autoplayForUnknownBandwidth - In the implementation block
@property (assign,nonatomic) long long maxSampleStaleness;                  //@synthesize maxSampleStaleness=_maxSampleStaleness - In the implementation block
@property (assign,nonatomic) long long minConfidence;                       //@synthesize minConfidence=_minConfidence - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                  //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL enabledVod;                               //@synthesize enabledVod=_enabledVod - In the implementation block
@property (assign,nonatomic) long long minBandwidth;                        //@synthesize minBandwidth=_minBandwidth - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)autoplayForUnknownBandwidth;
-(BOOL)enabledVod;
-(long long)maxSampleStaleness;
-(long long)minBandwidth;
-(long long)minConfidence;
-(void)setAutoplayForUnknownBandwidth:(BOOL)arg1 ;
-(void)setMaxSampleStaleness:(long long)arg1 ;
-(void)setMinConfidence:(long long)arg1 ;
-(void)setEnabledVod:(BOOL)arg1 ;
-(void)setMinBandwidth:(long long)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
@end
