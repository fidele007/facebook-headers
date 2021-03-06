/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface IosFacecastStoryContextExperimentContext : FBExperimentContext {

	long long _vod_new_scrubber;
	long long _enabled_in_live;
	long long _enabled_in_vod;

}

@property (assign,nonatomic) long long vod_new_scrubber;              //@synthesize vod_new_scrubber=_vod_new_scrubber - In the implementation block
@property (assign,nonatomic) long long enabled_in_live;               //@synthesize enabled_in_live=_enabled_in_live - In the implementation block
@property (assign,nonatomic) long long enabled_in_vod;                //@synthesize enabled_in_vod=_enabled_in_vod - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(long long)enabled_in_live;
-(long long)enabled_in_vod;
-(long long)vod_new_scrubber;
-(void)setVod_new_scrubber:(long long)arg1 ;
-(void)setEnabled_in_live:(long long)arg1 ;
-(void)setEnabled_in_vod:(long long)arg1 ;
@end

