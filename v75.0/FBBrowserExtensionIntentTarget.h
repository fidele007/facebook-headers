/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBIntentTarget.h>

@class NSString, NSArray, NSURL, NSDictionary, FBMemPlatformApplication;

@interface FBBrowserExtensionIntentTarget : FBIntentTarget {

	NSString* _appID;
	NSString* _pageID;
	NSString* _pageName;
	NSString* _pageTermsAndPoliciesURLString;
	NSString* _pageShoppingCartURLString;
	long long _pageShoppingCartItemCount;
	NSString* _adID;
	NSString* _appScopedUserID;
	NSString* _pageScopedUserID;
	NSArray* _whitelistedDomainNames;
	NSURL* _extensionUrl;
	NSString* _logSource;
	NSString* _surface;
	NSDictionary* _offerData;

}

@property (nonatomic,readonly) FBMemPlatformApplication * app; 
@property (nonatomic,copy,readonly) NSString * appID;                                      //@synthesize appID=_appID - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageID;                                     //@synthesize pageID=_pageID - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageName;                                   //@synthesize pageName=_pageName - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageTermsAndPoliciesURLString;              //@synthesize pageTermsAndPoliciesURLString=_pageTermsAndPoliciesURLString - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageShoppingCartURLString;                  //@synthesize pageShoppingCartURLString=_pageShoppingCartURLString - In the implementation block
@property (nonatomic,readonly) long long pageShoppingCartItemCount;                        //@synthesize pageShoppingCartItemCount=_pageShoppingCartItemCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * adID;                                       //@synthesize adID=_adID - In the implementation block
@property (nonatomic,copy,readonly) NSString * appScopedUserID;                            //@synthesize appScopedUserID=_appScopedUserID - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageScopedUserID;                           //@synthesize pageScopedUserID=_pageScopedUserID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * whitelistedDomainNames;                      //@synthesize whitelistedDomainNames=_whitelistedDomainNames - In the implementation block
@property (nonatomic,copy,readonly) NSURL * extensionUrl;                                  //@synthesize extensionUrl=_extensionUrl - In the implementation block
@property (nonatomic,copy,readonly) NSString * logSource;                                  //@synthesize logSource=_logSource - In the implementation block
@property (nonatomic,copy,readonly) NSString * surface;                                    //@synthesize surface=_surface - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * offerData;                              //@synthesize offerData=_offerData - In the implementation block
+(id)intentTargetForInstantExperienceForAppID:(id)arg1 app:(id)arg2 pageID:(id)arg3 pageName:(id)arg4 adID:(id)arg5 appScopedUserID:(id)arg6 pageScopedUserID:(id)arg7 whitelistedDomainNames:(id)arg8 extensionUrlString:(id)arg9 offerData:(id)arg10 logSource:(id)arg11 ;
+(id)intentTargetForInstantExperienceForAppID:(id)arg1 pageID:(id)arg2 pageName:(id)arg3 adID:(id)arg4 appScopedUserID:(id)arg5 pageScopedUserID:(id)arg6 whitelistedDomainNames:(id)arg7 extensionUrlString:(id)arg8 offerData:(id)arg9 logSource:(id)arg10 ;
+(id)intentTargetForPageID:(id)arg1 pageName:(id)arg2 pageTermsAndPoliciesURLString:(id)arg3 pageShoppingCartURLString:(id)arg4 pageShoppingCartItemCount:(long long)arg5 adID:(id)arg6 appScopedUserID:(id)arg7 pageScopedUserID:(id)arg8 whitelistedDomainNames:(id)arg9 extensionUrlString:(id)arg10 logSource:(id)arg11 surface:(id)arg12 ;
-(id)fallbackURLs;
-(NSString *)pageName;
-(NSString *)pageTermsAndPoliciesURLString;
-(NSString *)pageShoppingCartURLString;
-(long long)pageShoppingCartItemCount;
-(NSString *)appScopedUserID;
-(NSString *)pageScopedUserID;
-(NSURL *)extensionUrl;
-(NSString *)logSource;
-(NSString *)adID;
-(NSDictionary *)offerData;
-(NSArray *)whitelistedDomainNames;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)pageID;
-(FBMemPlatformApplication *)app;
-(NSString *)appID;
-(NSString *)surface;
@end

