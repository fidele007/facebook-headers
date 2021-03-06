/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface IosSearchPerfUniverseV45ExperimentContext : FBExperimentContext {

	BOOL _search_perf_config_use_recent_searches_in_bootstrap;
	long long _search_perf_config_serp_request_hard_timeout;
	BOOL _search_perf_config_use_global_suggestion_cache;

}

@property (assign,nonatomic) BOOL search_perf_config_use_recent_searches_in_bootstrap;              //@synthesize search_perf_config_use_recent_searches_in_bootstrap=_search_perf_config_use_recent_searches_in_bootstrap - In the implementation block
@property (assign,nonatomic) long long search_perf_config_serp_request_hard_timeout;                //@synthesize search_perf_config_serp_request_hard_timeout=_search_perf_config_serp_request_hard_timeout - In the implementation block
@property (assign,nonatomic) BOOL search_perf_config_use_global_suggestion_cache;                   //@synthesize search_perf_config_use_global_suggestion_cache=_search_perf_config_use_global_suggestion_cache - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(long long)search_perf_config_serp_request_hard_timeout;
-(BOOL)search_perf_config_use_global_suggestion_cache;
-(BOOL)search_perf_config_use_recent_searches_in_bootstrap;
-(void)setSearch_perf_config_use_recent_searches_in_bootstrap:(BOOL)arg1 ;
-(void)setSearch_perf_config_serp_request_hard_timeout:(long long)arg1 ;
-(void)setSearch_perf_config_use_global_suggestion_cache:(BOOL)arg1 ;
@end

