/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface IosMessengerLigerExperimentContext : FBExperimentContext {

	BOOL _all_enabled;
	BOOL _enabled;
	BOOL _proxy_support_enabled;

}

@property (assign,nonatomic) BOOL all_enabled;                        //@synthesize all_enabled=_all_enabled - In the implementation block
@property (assign,nonatomic) BOOL enabled;                            //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL proxy_support_enabled;              //@synthesize proxy_support_enabled=_proxy_support_enabled - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)all_enabled;
-(BOOL)proxy_support_enabled;
-(void)setAll_enabled:(BOOL)arg1 ;
-(void)setProxy_support_enabled:(BOOL)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
@end

