/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBOffer.h>

@class FBUserSession, FBMemCoupon;

@interface FBOfferMemCouponWrapper : FBOffer {

	FBUserSession* _session;
	FBMemCoupon* _wrappedCoupon;

}

@property (nonatomic,retain) FBMemCoupon * wrappedCoupon;              //@synthesize wrappedCoupon=_wrappedCoupon - In the implementation block
-(id)pageId;
-(id)imageURLAtIndex:(int)arg1 ;
-(int)offerImageCount;
-(id)videoAtIndex:(int)arg1 ;
-(unsigned long long)claimType;
-(id)onlineDiscountCode;
-(id)offerId;
-(id)offerViewId;
-(unsigned long long)redeemLocation;
-(unsigned long long)claimCount;
-(BOOL)viewerHasClaimed;
-(id)instoreDiscountCode;
-(id)couponId;
-(id)siteURL;
-(id)claimId;
-(id)claimTime;
-(id)initWithMemCoupon:(id)arg1 session:(id)arg2 ;
-(void)wrapNewOffer:(id)arg1 ;
-(int)offerVideoCount;
-(FBMemCoupon *)wrappedCoupon;
-(void)setWrappedCoupon:(FBMemCoupon *)arg1 ;
-(BOOL)isActive;
-(id)title;
-(id)owner;
-(id)descriptionText;
-(unsigned long long)loadState;
-(float)imageAspectRatio;
-(id)termsAndConditions;
-(id)expiration;
-(id)shareId;
@end
