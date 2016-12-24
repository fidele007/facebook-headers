/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBComposerMarketplaceCrossPostSetting : FBValueObject <NSCopying> {

	BOOL _isEnabled;
	BOOL _shouldShowIntercept;
	BOOL _shouldShowTooltip;
	BOOL _isCompulsory;
	NSString* _tooltipLabel;
	NSString* _checkBoxLabel;
	NSString* _upsellTitleLabel;
	NSString* _upsellSubtitleLabel;
	NSString* _interceptAcceptButtonLabel;
	NSString* _interceptDeclineButtonLabel;
	NSString* _upsellAcceptButtonLabel;
	NSString* _upsellDeclineButtonLabel;

}

@property (nonatomic,readonly) BOOL isEnabled;                                           //@synthesize isEnabled=_isEnabled - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowIntercept;                                 //@synthesize shouldShowIntercept=_shouldShowIntercept - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowTooltip;                                   //@synthesize shouldShowTooltip=_shouldShowTooltip - In the implementation block
@property (nonatomic,readonly) BOOL isCompulsory;                                        //@synthesize isCompulsory=_isCompulsory - In the implementation block
@property (nonatomic,copy,readonly) NSString * tooltipLabel;                             //@synthesize tooltipLabel=_tooltipLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * checkBoxLabel;                            //@synthesize checkBoxLabel=_checkBoxLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * upsellTitleLabel;                         //@synthesize upsellTitleLabel=_upsellTitleLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * upsellSubtitleLabel;                      //@synthesize upsellSubtitleLabel=_upsellSubtitleLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * interceptAcceptButtonLabel;               //@synthesize interceptAcceptButtonLabel=_interceptAcceptButtonLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * interceptDeclineButtonLabel;              //@synthesize interceptDeclineButtonLabel=_interceptDeclineButtonLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * upsellAcceptButtonLabel;                  //@synthesize upsellAcceptButtonLabel=_upsellAcceptButtonLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * upsellDeclineButtonLabel;                 //@synthesize upsellDeclineButtonLabel=_upsellDeclineButtonLabel - In the implementation block
-(BOOL)isCompulsory;
-(NSString *)checkBoxLabel;
-(NSString *)tooltipLabel;
-(BOOL)shouldShowTooltip;
-(NSString *)upsellTitleLabel;
-(NSString *)upsellSubtitleLabel;
-(BOOL)shouldShowIntercept;
-(NSString *)interceptAcceptButtonLabel;
-(NSString *)interceptDeclineButtonLabel;
-(NSString *)upsellAcceptButtonLabel;
-(NSString *)upsellDeclineButtonLabel;
-(id)initWithIsEnabled:(BOOL)arg1 shouldShowIntercept:(BOOL)arg2 shouldShowTooltip:(BOOL)arg3 isCompulsory:(BOOL)arg4 tooltipLabel:(id)arg5 checkBoxLabel:(id)arg6 upsellTitleLabel:(id)arg7 upsellSubtitleLabel:(id)arg8 interceptAcceptButtonLabel:(id)arg9 interceptDeclineButtonLabel:(id)arg10 upsellAcceptButtonLabel:(id)arg11 upsellDeclineButtonLabel:(id)arg12 ;
-(BOOL)isEnabled;
@end

