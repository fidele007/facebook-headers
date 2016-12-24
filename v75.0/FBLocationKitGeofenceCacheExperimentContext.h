/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface FBLocationKitGeofenceCacheExperimentContext : FBExperimentContext {

	long long _maxGeofenceCacheSize;
	BOOL _shouldCacheGeofences;

}

@property (assign,nonatomic) long long maxGeofenceCacheSize;              //@synthesize maxGeofenceCacheSize=_maxGeofenceCacheSize - In the implementation block
@property (assign,nonatomic) BOOL shouldCacheGeofences;                   //@synthesize shouldCacheGeofences=_shouldCacheGeofences - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(long long)maxGeofenceCacheSize;
-(BOOL)shouldCacheGeofences;
-(void)setMaxGeofenceCacheSize:(long long)arg1 ;
-(void)setShouldCacheGeofences:(BOOL)arg1 ;
@end

