/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, FBAdInterfacesPromotionSelections, FBAdInterfacesInstagramInfo;

@interface FBAdInterfacesAdminInfoBuilder : NSObject {

	BOOL _isBusinessManager;
	NSArray* _accounts;
	NSArray* _audienceOptions;
	unsigned long long _unifiedAudienceTotalCount;
	NSArray* _budgetRecommendations;
	FBAdInterfacesPromotionSelections* _defaultSelections;
	FBAdInterfacesInstagramInfo* _instagramInfo;
	NSArray* _whitelistedTargetingTypes;

}
+(id)adInterfacesAdminInfoFromExistingAdInterfacesAdminInfo:(id)arg1 ;
+(id)adInterfacesAdminInfo;
-(id)withDefaultSelections:(id)arg1 ;
-(id)withIsBusinessManager:(BOOL)arg1 ;
-(id)withAccounts:(id)arg1 ;
-(id)withAudienceOptions:(id)arg1 ;
-(id)withUnifiedAudienceTotalCount:(unsigned long long)arg1 ;
-(id)withBudgetRecommendations:(id)arg1 ;
-(id)withInstagramInfo:(id)arg1 ;
-(id)withWhitelistedTargetingTypes:(id)arg1 ;
-(id)build;
@end

