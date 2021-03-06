/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface FBSouvenirsStoryGenerationContext : FBExperimentContext {

	double _hourTimeThresholdForCloseTimeCheck;
	long long _videoMinimumDuration;
	double _kmDistanceThresholdIfPassesCloseTimeCheck;
	long long _minimumAssetCount;
	long long _maxStoriesToShow;
	long long _dbVersion;
	double _hourTimeThresholdIfPassesCloseDistanceCheck;
	double _kmDistanceThresholdForCloseDistanceCheck;
	double _hourTimeThresholdIfNoKnownDistance;
	BOOL _storyGenerationEnabled;
	long long _maximumAgeInDays;
	long long _videoMaximumDuration;
	long long _maximumAssetCountPerSouvenir;
	long long _maximumVideoCountPerSouvenir;

}

@property (assign,nonatomic) double hourTimeThresholdForCloseTimeCheck;                       //@synthesize hourTimeThresholdForCloseTimeCheck=_hourTimeThresholdForCloseTimeCheck - In the implementation block
@property (assign,nonatomic) long long videoMinimumDuration;                                  //@synthesize videoMinimumDuration=_videoMinimumDuration - In the implementation block
@property (assign,nonatomic) double kmDistanceThresholdIfPassesCloseTimeCheck;                //@synthesize kmDistanceThresholdIfPassesCloseTimeCheck=_kmDistanceThresholdIfPassesCloseTimeCheck - In the implementation block
@property (assign,nonatomic) long long minimumAssetCount;                                     //@synthesize minimumAssetCount=_minimumAssetCount - In the implementation block
@property (assign,nonatomic) long long maxStoriesToShow;                                      //@synthesize maxStoriesToShow=_maxStoriesToShow - In the implementation block
@property (assign,nonatomic) long long dbVersion;                                             //@synthesize dbVersion=_dbVersion - In the implementation block
@property (assign,nonatomic) double hourTimeThresholdIfPassesCloseDistanceCheck;              //@synthesize hourTimeThresholdIfPassesCloseDistanceCheck=_hourTimeThresholdIfPassesCloseDistanceCheck - In the implementation block
@property (assign,nonatomic) double kmDistanceThresholdForCloseDistanceCheck;                 //@synthesize kmDistanceThresholdForCloseDistanceCheck=_kmDistanceThresholdForCloseDistanceCheck - In the implementation block
@property (assign,nonatomic) double hourTimeThresholdIfNoKnownDistance;                       //@synthesize hourTimeThresholdIfNoKnownDistance=_hourTimeThresholdIfNoKnownDistance - In the implementation block
@property (assign,nonatomic) BOOL storyGenerationEnabled;                                     //@synthesize storyGenerationEnabled=_storyGenerationEnabled - In the implementation block
@property (assign,nonatomic) long long maximumAgeInDays;                                      //@synthesize maximumAgeInDays=_maximumAgeInDays - In the implementation block
@property (assign,nonatomic) long long videoMaximumDuration;                                  //@synthesize videoMaximumDuration=_videoMaximumDuration - In the implementation block
@property (assign,nonatomic) long long maximumAssetCountPerSouvenir;                          //@synthesize maximumAssetCountPerSouvenir=_maximumAssetCountPerSouvenir - In the implementation block
@property (assign,nonatomic) long long maximumVideoCountPerSouvenir;                          //@synthesize maximumVideoCountPerSouvenir=_maximumVideoCountPerSouvenir - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(double)hourTimeThresholdForCloseTimeCheck;
-(double)hourTimeThresholdIfNoKnownDistance;
-(double)hourTimeThresholdIfPassesCloseDistanceCheck;
-(double)kmDistanceThresholdForCloseDistanceCheck;
-(double)kmDistanceThresholdIfPassesCloseTimeCheck;
-(long long)maxStoriesToShow;
-(long long)maximumAgeInDays;
-(long long)maximumAssetCountPerSouvenir;
-(long long)maximumVideoCountPerSouvenir;
-(long long)minimumAssetCount;
-(BOOL)storyGenerationEnabled;
-(long long)videoMinimumDuration;
-(void)setHourTimeThresholdForCloseTimeCheck:(double)arg1 ;
-(void)setVideoMinimumDuration:(long long)arg1 ;
-(void)setKmDistanceThresholdIfPassesCloseTimeCheck:(double)arg1 ;
-(void)setMinimumAssetCount:(long long)arg1 ;
-(void)setMaxStoriesToShow:(long long)arg1 ;
-(void)setHourTimeThresholdIfPassesCloseDistanceCheck:(double)arg1 ;
-(void)setKmDistanceThresholdForCloseDistanceCheck:(double)arg1 ;
-(void)setHourTimeThresholdIfNoKnownDistance:(double)arg1 ;
-(void)setStoryGenerationEnabled:(BOOL)arg1 ;
-(void)setMaximumAgeInDays:(long long)arg1 ;
-(void)setMaximumAssetCountPerSouvenir:(long long)arg1 ;
-(void)setMaximumVideoCountPerSouvenir:(long long)arg1 ;
-(long long)videoMaximumDuration;
-(void)setVideoMaximumDuration:(long long)arg1 ;
-(long long)dbVersion;
-(void)setDbVersion:(long long)arg1 ;
@end

