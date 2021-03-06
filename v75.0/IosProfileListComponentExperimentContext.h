/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface IosProfileListComponentExperimentContext : FBExperimentContext {

	BOOL _enable_list_component_for_contextual_sections;
	BOOL _enable_list_component;
	BOOL _disable_unseen_with_list_component;

}

@property (assign,nonatomic) BOOL enable_list_component_for_contextual_sections;              //@synthesize enable_list_component_for_contextual_sections=_enable_list_component_for_contextual_sections - In the implementation block
@property (assign,nonatomic) BOOL enable_list_component;                                      //@synthesize enable_list_component=_enable_list_component - In the implementation block
@property (assign,nonatomic) BOOL disable_unseen_with_list_component;                         //@synthesize disable_unseen_with_list_component=_disable_unseen_with_list_component - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)disable_unseen_with_list_component;
-(BOOL)enable_list_component;
-(BOOL)enable_list_component_for_contextual_sections;
-(void)setEnable_list_component_for_contextual_sections:(BOOL)arg1 ;
-(void)setEnable_list_component:(BOOL)arg1 ;
-(void)setDisable_unseen_with_list_component:(BOOL)arg1 ;
@end

