/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface Ios360AspectRatioTestsExperimentContext : FBExperimentContext {

	double _channels_aspect_ratio;
	double _feed_aspect_ratio;
	BOOL _override_for_sponsored_contents;

}

@property (assign,nonatomic) double channels_aspect_ratio;                      //@synthesize channels_aspect_ratio=_channels_aspect_ratio - In the implementation block
@property (assign,nonatomic) double feed_aspect_ratio;                          //@synthesize feed_aspect_ratio=_feed_aspect_ratio - In the implementation block
@property (assign,nonatomic) BOOL override_for_sponsored_contents;              //@synthesize override_for_sponsored_contents=_override_for_sponsored_contents - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(double)channels_aspect_ratio;
-(double)feed_aspect_ratio;
-(BOOL)override_for_sponsored_contents;
-(void)setChannels_aspect_ratio:(double)arg1 ;
-(void)setFeed_aspect_ratio:(double)arg1 ;
-(void)setOverride_for_sponsored_contents:(BOOL)arg1 ;
@end

