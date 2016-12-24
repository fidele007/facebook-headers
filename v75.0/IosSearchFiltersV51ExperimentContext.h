/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@class NSString;

@interface IosSearchFiltersV51ExperimentContext : FBExperimentContext {

	BOOL _search_serp_filters_config_enable_filters;
	NSString* _search_serp_filters_config_nux_text;
	BOOL _search_serp_filters_config_enable_nux;
	BOOL _search_serp_filters_config_enable_filters_module;

}

@property (assign,nonatomic) BOOL search_serp_filters_config_enable_filters;                     //@synthesize search_serp_filters_config_enable_filters=_search_serp_filters_config_enable_filters - In the implementation block
@property (nonatomic,copy) NSString * search_serp_filters_config_nux_text;                       //@synthesize search_serp_filters_config_nux_text=_search_serp_filters_config_nux_text - In the implementation block
@property (assign,nonatomic) BOOL search_serp_filters_config_enable_nux;                         //@synthesize search_serp_filters_config_enable_nux=_search_serp_filters_config_enable_nux - In the implementation block
@property (assign,nonatomic) BOOL search_serp_filters_config_enable_filters_module;              //@synthesize search_serp_filters_config_enable_filters_module=_search_serp_filters_config_enable_filters_module - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)search_serp_filters_config_enable_filters;
-(BOOL)search_serp_filters_config_enable_filters_module;
-(BOOL)search_serp_filters_config_enable_nux;
-(NSString *)search_serp_filters_config_nux_text;
-(void)setSearch_serp_filters_config_enable_filters:(BOOL)arg1 ;
-(void)setSearch_serp_filters_config_nux_text:(NSString *)arg1 ;
-(void)setSearch_serp_filters_config_enable_nux:(BOOL)arg1 ;
-(void)setSearch_serp_filters_config_enable_filters_module:(BOOL)arg1 ;
@end

