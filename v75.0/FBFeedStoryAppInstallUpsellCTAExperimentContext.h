/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface FBFeedStoryAppInstallUpsellCTAExperimentContext : FBExperimentContext {

	BOOL _shouldShowCtaWithoutPivots;
	BOOL _shouldShowUpsellCta;
	BOOL _shouldShowCtaOnPivot;

}

@property (assign,nonatomic) BOOL shouldShowCtaWithoutPivots;              //@synthesize shouldShowCtaWithoutPivots=_shouldShowCtaWithoutPivots - In the implementation block
@property (assign,nonatomic) BOOL shouldShowUpsellCta;                     //@synthesize shouldShowUpsellCta=_shouldShowUpsellCta - In the implementation block
@property (assign,nonatomic) BOOL shouldShowCtaOnPivot;                    //@synthesize shouldShowCtaOnPivot=_shouldShowCtaOnPivot - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)shouldShowCtaOnPivot;
-(BOOL)shouldShowCtaWithoutPivots;
-(BOOL)shouldShowUpsellCta;
-(void)setShouldShowCtaWithoutPivots:(BOOL)arg1 ;
-(void)setShouldShowUpsellCta:(BOOL)arg1 ;
-(void)setShouldShowCtaOnPivot:(BOOL)arg1 ;
@end

