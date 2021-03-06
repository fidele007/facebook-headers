/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@class NSString;

@interface IosInstantExperiencesCtaExperimentContext : FBExperimentContext {

	NSString* _organic_share_cta_text;
	BOOL _organic_share_show_cta;

}

@property (nonatomic,copy) NSString * organic_share_cta_text;              //@synthesize organic_share_cta_text=_organic_share_cta_text - In the implementation block
@property (assign,nonatomic) BOOL organic_share_show_cta;                  //@synthesize organic_share_show_cta=_organic_share_show_cta - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(NSString *)organic_share_cta_text;
-(BOOL)organic_share_show_cta;
-(void)setOrganic_share_cta_text:(NSString *)arg1 ;
-(void)setOrganic_share_show_cta:(BOOL)arg1 ;
@end

