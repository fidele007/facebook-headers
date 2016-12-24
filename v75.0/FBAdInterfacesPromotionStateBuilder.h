/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface FBAdInterfacesPromotionStateBuilder : NSObject {

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
+(id)adInterfacesPromotionStateFromExistingAdInterfacesPromotionState:(id)arg1 ;
+(id)adInterfacesPromotionState;
-(id)withError:(BOOL)arg1 ;
-(id)withLoading:(BOOL)arg1 ;
-(id)withLoadingBudgetRecommendations:(BOOL)arg1 ;
-(id)withDialogJustLoaded:(BOOL)arg1 ;
-(id)withLoadingAdPreview:(BOOL)arg1 ;
-(id)withCreativeImageUploadFailure:(BOOL)arg1 ;
-(id)withUploadingCreativeImage:(BOOL)arg1 ;
-(id)withBoostAfterUpdatingPayment:(BOOL)arg1 ;
-(id)withInitializationError:(BOOL)arg1 ;
-(id)withLoadingSavedAudiences:(BOOL)arg1 ;
-(id)withLoadingAYMTTip:(BOOL)arg1 ;
-(id)withUpdatingAdAccounts:(BOOL)arg1 ;
-(id)withInvalidEstimatesForBudgets:(BOOL)arg1 ;
-(id)withJustEditedPromotion:(BOOL)arg1 ;
-(id)withEditedFields:(id)arg1 ;
-(id)withPromotionJustCreated:(BOOL)arg1 ;
-(id)withPerformingCouponClaim:(BOOL)arg1 ;
-(id)build;
@end
