/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface FBAdInterfacesPromotionState : FBValueObject <NSCopying> {

	BOOL _loading;
	BOOL _loadingBudgetRecommendations;
	BOOL _loadingAdPreview;
	BOOL _loadingSavedAudiences;
	BOOL _loadingAYMTTip;
	BOOL _performingCouponClaim;
	BOOL _updatingAdAccounts;
	BOOL _uploadingCreativeImage;
	BOOL _creativeImageUploadFailure;
	BOOL _promotionJustCreated;
	BOOL _justEditedPromotion;
	BOOL _invalidEstimatesForBudgets;
	BOOL _initializationError;
	BOOL _error;
	BOOL _boostAfterUpdatingPayment;
	BOOL _dialogJustLoaded;
	NSSet* _editedFields;

}

@property (nonatomic,readonly) BOOL loading;                                   //@synthesize loading=_loading - In the implementation block
@property (nonatomic,readonly) BOOL loadingBudgetRecommendations;              //@synthesize loadingBudgetRecommendations=_loadingBudgetRecommendations - In the implementation block
@property (nonatomic,readonly) BOOL loadingAdPreview;                          //@synthesize loadingAdPreview=_loadingAdPreview - In the implementation block
@property (nonatomic,readonly) BOOL loadingSavedAudiences;                     //@synthesize loadingSavedAudiences=_loadingSavedAudiences - In the implementation block
@property (nonatomic,readonly) BOOL loadingAYMTTip;                            //@synthesize loadingAYMTTip=_loadingAYMTTip - In the implementation block
@property (nonatomic,readonly) BOOL performingCouponClaim;                     //@synthesize performingCouponClaim=_performingCouponClaim - In the implementation block
@property (nonatomic,readonly) BOOL updatingAdAccounts;                        //@synthesize updatingAdAccounts=_updatingAdAccounts - In the implementation block
@property (nonatomic,readonly) BOOL uploadingCreativeImage;                    //@synthesize uploadingCreativeImage=_uploadingCreativeImage - In the implementation block
@property (nonatomic,readonly) BOOL creativeImageUploadFailure;                //@synthesize creativeImageUploadFailure=_creativeImageUploadFailure - In the implementation block
@property (nonatomic,readonly) BOOL promotionJustCreated;                      //@synthesize promotionJustCreated=_promotionJustCreated - In the implementation block
@property (nonatomic,readonly) BOOL justEditedPromotion;                       //@synthesize justEditedPromotion=_justEditedPromotion - In the implementation block
@property (nonatomic,readonly) BOOL invalidEstimatesForBudgets;                //@synthesize invalidEstimatesForBudgets=_invalidEstimatesForBudgets - In the implementation block
@property (nonatomic,readonly) BOOL initializationError;                       //@synthesize initializationError=_initializationError - In the implementation block
@property (nonatomic,readonly) BOOL error;                                     //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL boostAfterUpdatingPayment;                 //@synthesize boostAfterUpdatingPayment=_boostAfterUpdatingPayment - In the implementation block
@property (nonatomic,readonly) BOOL dialogJustLoaded;                          //@synthesize dialogJustLoaded=_dialogJustLoaded - In the implementation block
@property (nonatomic,copy,readonly) NSSet * editedFields;                      //@synthesize editedFields=_editedFields - In the implementation block
-(BOOL)initializationError;
-(BOOL)justEditedPromotion;
-(BOOL)promotionJustCreated;
-(BOOL)loadingAdPreview;
-(BOOL)uploadingCreativeImage;
-(BOOL)loadingBudgetRecommendations;
-(BOOL)performingCouponClaim;
-(NSSet *)editedFields;
-(BOOL)loadingSavedAudiences;
-(BOOL)loadingAYMTTip;
-(BOOL)updatingAdAccounts;
-(BOOL)creativeImageUploadFailure;
-(BOOL)boostAfterUpdatingPayment;
-(BOOL)dialogJustLoaded;
-(id)initWithLoading:(BOOL)arg1 loadingBudgetRecommendations:(BOOL)arg2 loadingAdPreview:(BOOL)arg3 loadingSavedAudiences:(BOOL)arg4 loadingAYMTTip:(BOOL)arg5 performingCouponClaim:(BOOL)arg6 updatingAdAccounts:(BOOL)arg7 uploadingCreativeImage:(BOOL)arg8 creativeImageUploadFailure:(BOOL)arg9 promotionJustCreated:(BOOL)arg10 justEditedPromotion:(BOOL)arg11 invalidEstimatesForBudgets:(BOOL)arg12 initializationError:(BOOL)arg13 error:(BOOL)arg14 boostAfterUpdatingPayment:(BOOL)arg15 dialogJustLoaded:(BOOL)arg16 editedFields:(id)arg17 ;
-(BOOL)invalidEstimatesForBudgets;
-(BOOL)loading;
-(BOOL)error;
@end

