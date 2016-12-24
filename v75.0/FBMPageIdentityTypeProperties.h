/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMPlatformProperties, NSString, FBMMessengerWelcomePageContextBannerInfo;

@interface FBMPageIdentityTypeProperties : FBValueObject <NSCoding, NSCopying> {

	BOOL _isLegacyBot;
	BOOL _promotionalMessagesAreBlockedByViewer;
	BOOL _isCommerceNuxEnabled;
	BOOL _shouldShowPageWelcomeScreen;
	long long _subIdentityType;
	FBMPlatformProperties* _platformProperties;
	NSString* _coverPhotoURL;
	FBMMessengerWelcomePageContextBannerInfo* _welcomePageContextBannerInfo;
	NSString* _fullAddress;
	NSString* _bestDescription;
	NSString* _priceRangeDescription;

}

@property (nonatomic,readonly) BOOL isLegacyBot;                                                                          //@synthesize isLegacyBot=_isLegacyBot - In the implementation block
@property (nonatomic,readonly) long long subIdentityType;                                                                 //@synthesize subIdentityType=_subIdentityType - In the implementation block
@property (nonatomic,readonly) BOOL promotionalMessagesAreBlockedByViewer;                                                //@synthesize promotionalMessagesAreBlockedByViewer=_promotionalMessagesAreBlockedByViewer - In the implementation block
@property (nonatomic,readonly) BOOL isCommerceNuxEnabled;                                                                 //@synthesize isCommerceNuxEnabled=_isCommerceNuxEnabled - In the implementation block
@property (nonatomic,copy,readonly) FBMPlatformProperties * platformProperties;                                           //@synthesize platformProperties=_platformProperties - In the implementation block
@property (nonatomic,copy,readonly) NSString * coverPhotoURL;                                                             //@synthesize coverPhotoURL=_coverPhotoURL - In the implementation block
@property (nonatomic,copy,readonly) FBMMessengerWelcomePageContextBannerInfo * welcomePageContextBannerInfo;              //@synthesize welcomePageContextBannerInfo=_welcomePageContextBannerInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * fullAddress;                                                               //@synthesize fullAddress=_fullAddress - In the implementation block
@property (nonatomic,copy,readonly) NSString * bestDescription;                                                           //@synthesize bestDescription=_bestDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * priceRangeDescription;                                                     //@synthesize priceRangeDescription=_priceRangeDescription - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowPageWelcomeScreen;                                                          //@synthesize shouldShowPageWelcomeScreen=_shouldShowPageWelcomeScreen - In the implementation block
-(NSString *)coverPhotoURL;
-(NSString *)bestDescription;
-(NSString *)priceRangeDescription;
-(NSString *)fullAddress;
-(id)initWithIsLegacyBot:(BOOL)arg1 subIdentityType:(long long)arg2 promotionalMessagesAreBlockedByViewer:(BOOL)arg3 isCommerceNuxEnabled:(BOOL)arg4 platformProperties:(id)arg5 coverPhotoURL:(id)arg6 welcomePageContextBannerInfo:(id)arg7 fullAddress:(id)arg8 bestDescription:(id)arg9 priceRangeDescription:(id)arg10 shouldShowPageWelcomeScreen:(BOOL)arg11 ;
-(BOOL)isLegacyBot;
-(long long)subIdentityType;
-(BOOL)promotionalMessagesAreBlockedByViewer;
-(BOOL)isCommerceNuxEnabled;
-(FBMPlatformProperties *)platformProperties;
-(FBMMessengerWelcomePageContextBannerInfo *)welcomePageContextBannerInfo;
-(BOOL)shouldShowPageWelcomeScreen;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
