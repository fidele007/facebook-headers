/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBAdInterfacesPromotionState, FBAdInterfacesPromotionValidationState, FBAdInterfacesPromotion, FBAdInterfacesAdminInfo, NSDictionary, NSError, FBAdInterfacesAYMTActionData, FBAdInterfacesCouponClaimInfo, FBAdInterfacesPromotionSelections, FBAdCreativeOptions, UIImage, FBAdInterfacesAdPreview, FBAdInterfacesPaymentsData;

@interface FBAdInterfacesPromotionDataModel : FBValueObject <NSCopying> {

	NSString* _pageID;
	NSString* _promotableObjectID;
	FBAdInterfacesPromotionState* _state;
	FBAdInterfacesPromotionValidationState* _validationState;
	FBAdInterfacesPromotion* _promotion;
	FBAdInterfacesAdminInfo* _adminInfo;
	NSDictionary* _extraData;
	NSError* _error;
	FBAdInterfacesAYMTActionData* _potentialActionData;
	FBAdInterfacesCouponClaimInfo* _couponClaimInfo;
	FBAdInterfacesPromotionSelections* _selections;
	FBAdCreativeOptions* _creative;
	UIImage* _creativeImage;
	FBAdInterfacesAdPreview* _adPreview;
	FBAdInterfacesPaymentsData* _paymentsData;

}

@property (nonatomic,copy,readonly) NSString * pageID;                                                     //@synthesize pageID=_pageID - In the implementation block
@property (nonatomic,copy,readonly) NSString * promotableObjectID;                                         //@synthesize promotableObjectID=_promotableObjectID - In the implementation block
@property (nonatomic,copy,readonly) FBAdInterfacesPromotionState * state;                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,copy,readonly) FBAdInterfacesPromotionValidationState * validationState;              //@synthesize validationState=_validationState - In the implementation block
@property (nonatomic,copy,readonly) FBAdInterfacesPromotion * promotion;                                   //@synthesize promotion=_promotion - In the implementation block
@property (nonatomic,copy,readonly) FBAdInterfacesAdminInfo * adminInfo;                                   //@synthesize adminInfo=_adminInfo - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extraData;                                              //@synthesize extraData=_extraData - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                                                       //@synthesize error=_error - In the implementation block
@property (nonatomic,copy,readonly) FBAdInterfacesAYMTActionData * potentialActionData;                    //@synthesize potentialActionData=_potentialActionData - In the implementation block
@property (nonatomic,copy,readonly) FBAdInterfacesCouponClaimInfo * couponClaimInfo;                       //@synthesize couponClaimInfo=_couponClaimInfo - In the implementation block
@property (nonatomic,copy,readonly) FBAdInterfacesPromotionSelections * selections;                        //@synthesize selections=_selections - In the implementation block
@property (nonatomic,copy,readonly) FBAdCreativeOptions * creative;                                        //@synthesize creative=_creative - In the implementation block
@property (nonatomic,copy,readonly) UIImage * creativeImage;                                               //@synthesize creativeImage=_creativeImage - In the implementation block
@property (nonatomic,copy,readonly) FBAdInterfacesAdPreview * adPreview;                                   //@synthesize adPreview=_adPreview - In the implementation block
@property (nonatomic,copy,readonly) FBAdInterfacesPaymentsData * paymentsData;                             //@synthesize paymentsData=_paymentsData - In the implementation block
-(FBAdInterfacesAdminInfo *)adminInfo;
-(FBAdInterfacesPromotion *)promotion;
-(FBAdCreativeOptions *)creative;
-(FBAdInterfacesPromotionSelections *)selections;
-(NSString *)promotableObjectID;
-(FBAdInterfacesAdPreview *)adPreview;
-(UIImage *)creativeImage;
-(FBAdInterfacesAYMTActionData *)potentialActionData;
-(FBAdInterfacesCouponClaimInfo *)couponClaimInfo;
-(id)initWithPageID:(id)arg1 promotableObjectID:(id)arg2 state:(id)arg3 validationState:(id)arg4 promotion:(id)arg5 adminInfo:(id)arg6 extraData:(id)arg7 error:(id)arg8 potentialActionData:(id)arg9 couponClaimInfo:(id)arg10 selections:(id)arg11 creative:(id)arg12 creativeImage:(id)arg13 adPreview:(id)arg14 paymentsData:(id)arg15 ;
-(FBAdInterfacesPaymentsData *)paymentsData;
-(FBAdInterfacesPromotionState *)state;
-(FBAdInterfacesPromotionValidationState *)validationState;
-(NSString *)pageID;
-(NSError *)error;
-(NSDictionary *)extraData;
@end
