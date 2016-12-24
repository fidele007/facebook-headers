/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@class NSString;

@interface IosFeedVpvdLoggingV62UniverseExperimentContext : FBExperimentContext {

	BOOL _feed_vp_vd_logging_vpvd_logging_via_working_ranges_enabled;
	BOOL _feed_vp_vd_logging_is_suspended_snapshotting_enabled;
	BOOL _feed_vp_vd_logging_vpvd_deduplication_key_tracking_enabled;
	NSString* _feed_vp_vd_logging_ignored_vpvd_fields;
	BOOL _feed_vp_vd_logging_is_item_view_state_frame_included_in_hash_and_is_equals_enabled;

}

@property (assign,nonatomic) BOOL feed_vp_vd_logging_vpvd_logging_via_working_ranges_enabled;                                      //@synthesize feed_vp_vd_logging_vpvd_logging_via_working_ranges_enabled=_feed_vp_vd_logging_vpvd_logging_via_working_ranges_enabled - In the implementation block
@property (assign,nonatomic) BOOL feed_vp_vd_logging_is_suspended_snapshotting_enabled;                                            //@synthesize feed_vp_vd_logging_is_suspended_snapshotting_enabled=_feed_vp_vd_logging_is_suspended_snapshotting_enabled - In the implementation block
@property (assign,nonatomic) BOOL feed_vp_vd_logging_vpvd_deduplication_key_tracking_enabled;                                      //@synthesize feed_vp_vd_logging_vpvd_deduplication_key_tracking_enabled=_feed_vp_vd_logging_vpvd_deduplication_key_tracking_enabled - In the implementation block
@property (nonatomic,copy) NSString * feed_vp_vd_logging_ignored_vpvd_fields;                                                      //@synthesize feed_vp_vd_logging_ignored_vpvd_fields=_feed_vp_vd_logging_ignored_vpvd_fields - In the implementation block
@property (assign,nonatomic) BOOL feed_vp_vd_logging_is_item_view_state_frame_included_in_hash_and_is_equals_enabled;              //@synthesize feed_vp_vd_logging_is_item_view_state_frame_included_in_hash_and_is_equals_enabled=_feed_vp_vd_logging_is_item_view_state_frame_included_in_hash_and_is_equals_enabled - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(NSString *)feed_vp_vd_logging_ignored_vpvd_fields;
-(BOOL)feed_vp_vd_logging_is_item_view_state_frame_included_in_hash_and_is_equals_enabled;
-(BOOL)feed_vp_vd_logging_is_suspended_snapshotting_enabled;
-(BOOL)feed_vp_vd_logging_vpvd_deduplication_key_tracking_enabled;
-(BOOL)feed_vp_vd_logging_vpvd_logging_via_working_ranges_enabled;
-(void)setFeed_vp_vd_logging_vpvd_logging_via_working_ranges_enabled:(BOOL)arg1 ;
-(void)setFeed_vp_vd_logging_is_suspended_snapshotting_enabled:(BOOL)arg1 ;
-(void)setFeed_vp_vd_logging_vpvd_deduplication_key_tracking_enabled:(BOOL)arg1 ;
-(void)setFeed_vp_vd_logging_ignored_vpvd_fields:(NSString *)arg1 ;
-(void)setFeed_vp_vd_logging_is_item_view_state_frame_included_in_hash_and_is_equals_enabled:(BOOL)arg1 ;
@end
