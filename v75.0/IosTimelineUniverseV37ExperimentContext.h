/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface IosTimelineUniverseV37ExperimentContext : FBExperimentContext {

	BOOL _enable_profile_pic_controller;
	long long _stream_list_view_bottom_buffer;
	BOOL _use_graphql_batch_query_for_header_loading;
	BOOL _begins_sync_in_view_did_load;

}

@property (assign,nonatomic) BOOL enable_profile_pic_controller;                           //@synthesize enable_profile_pic_controller=_enable_profile_pic_controller - In the implementation block
@property (assign,nonatomic) long long stream_list_view_bottom_buffer;                     //@synthesize stream_list_view_bottom_buffer=_stream_list_view_bottom_buffer - In the implementation block
@property (assign,nonatomic) BOOL use_graphql_batch_query_for_header_loading;              //@synthesize use_graphql_batch_query_for_header_loading=_use_graphql_batch_query_for_header_loading - In the implementation block
@property (assign,nonatomic) BOOL begins_sync_in_view_did_load;                            //@synthesize begins_sync_in_view_did_load=_begins_sync_in_view_did_load - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)begins_sync_in_view_did_load;
-(BOOL)enable_profile_pic_controller;
-(long long)stream_list_view_bottom_buffer;
-(BOOL)use_graphql_batch_query_for_header_loading;
-(void)setEnable_profile_pic_controller:(BOOL)arg1 ;
-(void)setStream_list_view_bottom_buffer:(long long)arg1 ;
-(void)setUse_graphql_batch_query_for_header_loading:(BOOL)arg1 ;
-(void)setBegins_sync_in_view_did_load:(BOOL)arg1 ;
@end

