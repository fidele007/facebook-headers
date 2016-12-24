/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@class NSString;

@interface FBCustomizablePullToRefreshExperimentContext : FBExperimentContext {

	long long _triggerThreshold;
	NSString* _animationAssetName;
	BOOL _enabled;
	BOOL _enabledEarlyFetch;
	double _minimumSpinningTime;
	long long _contentHeight;
	BOOL _enabledFetching;
	BOOL _enabledForegroundFetch;

}

@property (assign,nonatomic) long long triggerThreshold;               //@synthesize triggerThreshold=_triggerThreshold - In the implementation block
@property (nonatomic,copy) NSString * animationAssetName;              //@synthesize animationAssetName=_animationAssetName - In the implementation block
@property (assign,nonatomic) BOOL enabled;                             //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL enabledEarlyFetch;                   //@synthesize enabledEarlyFetch=_enabledEarlyFetch - In the implementation block
@property (assign,nonatomic) double minimumSpinningTime;               //@synthesize minimumSpinningTime=_minimumSpinningTime - In the implementation block
@property (assign,nonatomic) long long contentHeight;                  //@synthesize contentHeight=_contentHeight - In the implementation block
@property (assign,nonatomic) BOOL enabledFetching;                     //@synthesize enabledFetching=_enabledFetching - In the implementation block
@property (assign,nonatomic) BOOL enabledForegroundFetch;              //@synthesize enabledForegroundFetch=_enabledForegroundFetch - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(NSString *)animationAssetName;
-(BOOL)enabledEarlyFetch;
-(BOOL)enabledFetching;
-(BOOL)enabledForegroundFetch;
-(double)minimumSpinningTime;
-(long long)triggerThreshold;
-(void)setTriggerThreshold:(long long)arg1 ;
-(void)setAnimationAssetName:(NSString *)arg1 ;
-(void)setEnabledEarlyFetch:(BOOL)arg1 ;
-(void)setMinimumSpinningTime:(double)arg1 ;
-(void)setEnabledFetching:(BOOL)arg1 ;
-(void)setEnabledForegroundFetch:(BOOL)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setContentHeight:(long long)arg1 ;
-(long long)contentHeight;
@end

