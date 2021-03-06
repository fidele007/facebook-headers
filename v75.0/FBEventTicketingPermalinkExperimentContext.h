/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@class NSString;

@interface FBEventTicketingPermalinkExperimentContext : FBExperimentContext {

	BOOL _showPriceInCta;
	NSString* _paidTicketsCtaText;
	NSString* _freeAndPaidTicketsCtaText;
	NSString* _freeTicketsCtaText;
	BOOL _showOffsiteLinkInFlow;

}

@property (assign,nonatomic) BOOL showPriceInCta;                             //@synthesize showPriceInCta=_showPriceInCta - In the implementation block
@property (nonatomic,copy) NSString * paidTicketsCtaText;                     //@synthesize paidTicketsCtaText=_paidTicketsCtaText - In the implementation block
@property (nonatomic,copy) NSString * freeAndPaidTicketsCtaText;              //@synthesize freeAndPaidTicketsCtaText=_freeAndPaidTicketsCtaText - In the implementation block
@property (nonatomic,copy) NSString * freeTicketsCtaText;                     //@synthesize freeTicketsCtaText=_freeTicketsCtaText - In the implementation block
@property (assign,nonatomic) BOOL showOffsiteLinkInFlow;                      //@synthesize showOffsiteLinkInFlow=_showOffsiteLinkInFlow - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(NSString *)freeAndPaidTicketsCtaText;
-(NSString *)freeTicketsCtaText;
-(NSString *)paidTicketsCtaText;
-(BOOL)showOffsiteLinkInFlow;
-(BOOL)showPriceInCta;
-(void)setShowPriceInCta:(BOOL)arg1 ;
-(void)setPaidTicketsCtaText:(NSString *)arg1 ;
-(void)setFreeAndPaidTicketsCtaText:(NSString *)arg1 ;
-(void)setFreeTicketsCtaText:(NSString *)arg1 ;
-(void)setShowOffsiteLinkInFlow:(BOOL)arg1 ;
@end

