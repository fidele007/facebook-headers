/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface FBFeedStoryAppAttributionCTAExperimentContext : FBExperimentContext {

	BOOL _showOnlyAfterInteraction;
	BOOL _enabled;
	BOOL _showOnPermalink;
	long long _maximumImpressionsPerPeriod;
	BOOL _showIcon;
	long long _hoursPerImpressionPeriod;

}

@property (assign,nonatomic) BOOL showOnlyAfterInteraction;                      //@synthesize showOnlyAfterInteraction=_showOnlyAfterInteraction - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                       //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL showOnPermalink;                               //@synthesize showOnPermalink=_showOnPermalink - In the implementation block
@property (assign,nonatomic) long long maximumImpressionsPerPeriod;              //@synthesize maximumImpressionsPerPeriod=_maximumImpressionsPerPeriod - In the implementation block
@property (assign,nonatomic) BOOL showIcon;                                      //@synthesize showIcon=_showIcon - In the implementation block
@property (assign,nonatomic) long long hoursPerImpressionPeriod;                 //@synthesize hoursPerImpressionPeriod=_hoursPerImpressionPeriod - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(long long)hoursPerImpressionPeriod;
-(long long)maximumImpressionsPerPeriod;
-(BOOL)showOnPermalink;
-(BOOL)showOnlyAfterInteraction;
-(void)setShowOnlyAfterInteraction:(BOOL)arg1 ;
-(void)setShowOnPermalink:(BOOL)arg1 ;
-(void)setMaximumImpressionsPerPeriod:(long long)arg1 ;
-(void)setHoursPerImpressionPeriod:(long long)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)showIcon;
-(void)setShowIcon:(BOOL)arg1 ;
@end
