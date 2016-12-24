/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface SessionlessIosRegistrationFlowHoldoutExperimentContext : FBExperimentContext {

	BOOL _enable_new_gender_ui;
	BOOL _enable_open_completion_url_in_browser;
	BOOL _enable_light_background;
	BOOL _enable_reverse_name;
	BOOL _enable_parallel_registration;
	BOOL _enable_ux_improvements;

}

@property (assign,nonatomic) BOOL enable_new_gender_ui;                               //@synthesize enable_new_gender_ui=_enable_new_gender_ui - In the implementation block
@property (assign,nonatomic) BOOL enable_open_completion_url_in_browser;              //@synthesize enable_open_completion_url_in_browser=_enable_open_completion_url_in_browser - In the implementation block
@property (assign,nonatomic) BOOL enable_light_background;                            //@synthesize enable_light_background=_enable_light_background - In the implementation block
@property (assign,nonatomic) BOOL enable_reverse_name;                                //@synthesize enable_reverse_name=_enable_reverse_name - In the implementation block
@property (assign,nonatomic) BOOL enable_parallel_registration;                       //@synthesize enable_parallel_registration=_enable_parallel_registration - In the implementation block
@property (assign,nonatomic) BOOL enable_ux_improvements;                             //@synthesize enable_ux_improvements=_enable_ux_improvements - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)enable_light_background;
-(BOOL)enable_new_gender_ui;
-(BOOL)enable_open_completion_url_in_browser;
-(BOOL)enable_parallel_registration;
-(BOOL)enable_reverse_name;
-(BOOL)enable_ux_improvements;
-(void)setEnable_new_gender_ui:(BOOL)arg1 ;
-(void)setEnable_open_completion_url_in_browser:(BOOL)arg1 ;
-(void)setEnable_light_background:(BOOL)arg1 ;
-(void)setEnable_reverse_name:(BOOL)arg1 ;
-(void)setEnable_parallel_registration:(BOOL)arg1 ;
-(void)setEnable_ux_improvements:(BOOL)arg1 ;
@end
