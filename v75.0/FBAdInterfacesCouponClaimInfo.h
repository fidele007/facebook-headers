/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBAdInterfacesMessage;

@interface FBAdInterfacesCouponClaimInfo : FBValueObject <NSCopying> {

	BOOL _promotionCouponClaimed;
	NSString* _adAccountID;
	NSString* _couponPromotionGroupID;
	NSString* _placement;
	FBAdInterfacesMessage* _claimMessage;

}

@property (nonatomic,copy,readonly) NSString * adAccountID;                            //@synthesize adAccountID=_adAccountID - In the implementation block
@property (nonatomic,copy,readonly) NSString * couponPromotionGroupID;                 //@synthesize couponPromotionGroupID=_couponPromotionGroupID - In the implementation block
@property (nonatomic,copy,readonly) NSString * placement;                              //@synthesize placement=_placement - In the implementation block
@property (nonatomic,readonly) BOOL promotionCouponClaimed;                            //@synthesize promotionCouponClaimed=_promotionCouponClaimed - In the implementation block
@property (nonatomic,copy,readonly) FBAdInterfacesMessage * claimMessage;              //@synthesize claimMessage=_claimMessage - In the implementation block
-(NSString *)couponPromotionGroupID;
-(BOOL)promotionCouponClaimed;
-(NSString *)adAccountID;
-(FBAdInterfacesMessage *)claimMessage;
-(id)initWithAdAccountID:(id)arg1 couponPromotionGroupID:(id)arg2 placement:(id)arg3 promotionCouponClaimed:(BOOL)arg4 claimMessage:(id)arg5 ;
-(NSString *)placement;
@end

