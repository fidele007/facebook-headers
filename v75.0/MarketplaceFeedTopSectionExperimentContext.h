/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@class NSString;

@interface MarketplaceFeedTopSectionExperimentContext : FBExperimentContext {

	long long _unit_count;
	NSString* _top_section_type;
	BOOL _use_modular_feed;

}

@property (assign,nonatomic) long long unit_count;                   //@synthesize unit_count=_unit_count - In the implementation block
@property (nonatomic,copy) NSString * top_section_type;              //@synthesize top_section_type=_top_section_type - In the implementation block
@property (assign,nonatomic) BOOL use_modular_feed;                  //@synthesize use_modular_feed=_use_modular_feed - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(NSString *)top_section_type;
-(long long)unit_count;
-(BOOL)use_modular_feed;
-(void)setUnit_count:(long long)arg1 ;
-(void)setTop_section_type:(NSString *)arg1 ;
-(void)setUse_modular_feed:(BOOL)arg1 ;
@end
