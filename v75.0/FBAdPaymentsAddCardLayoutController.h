/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBAdPaymentsFormLayoutDelegate.h>
#import <Facebook/FBAdPaymentsFormLayoutDataSource.h>

@protocol FBAdPaymentsFlowContext, FBNavigationCoordinator;
@class FBUserSession, NSString, NSArray, FBAdPaymentsFormLayout, FBAdPaymentsCardNumberComponentController, FBAdPaymentsExpirationDateComponentController, FBAdPaymentsSecurityCodeComponentController, FBAdPaymentsPostalCodeComponentController, FBAdPaymentsCardHeaderComponentController, FBAdPaymentsCardFooterComponentController, FBAdPaymentsInlineCardErrorComponentController;

@interface FBAdPaymentsAddCardLayoutController : NSObject <FBAdPaymentsFormLayoutDelegate, FBAdPaymentsFormLayoutDataSource> {

	FBUserSession* _session;
	id<FBAdPaymentsFlowContext> _flowContext;
	NSString* _countryCode;
	id<FBNavigationCoordinator> _navigationCoordinator;
	NSArray* _formComponents;
	FBAdPaymentsFormLayout* _formLayout;
	FBAdPaymentsCardNumberComponentController* _cardNumberComponentController;
	FBAdPaymentsExpirationDateComponentController* _expirationDateComponentController;
	FBAdPaymentsSecurityCodeComponentController* _securityCodeComponentController;
	FBAdPaymentsPostalCodeComponentController* _postalCodeComponentController;
	FBAdPaymentsCardHeaderComponentController* _headerComponentController;
	FBAdPaymentsCardFooterComponentController* _footerComponentController;
	FBAdPaymentsInlineCardErrorComponentController* _cardErrorComponentController;

}

@property (nonatomic,readonly) FBAdPaymentsFormLayout * formLayout;                                                            //@synthesize formLayout=_formLayout - In the implementation block
@property (nonatomic,readonly) FBAdPaymentsCardNumberComponentController * cardNumberComponentController;                      //@synthesize cardNumberComponentController=_cardNumberComponentController - In the implementation block
@property (nonatomic,readonly) FBAdPaymentsExpirationDateComponentController * expirationDateComponentController;              //@synthesize expirationDateComponentController=_expirationDateComponentController - In the implementation block
@property (nonatomic,readonly) FBAdPaymentsSecurityCodeComponentController * securityCodeComponentController;                  //@synthesize securityCodeComponentController=_securityCodeComponentController - In the implementation block
@property (nonatomic,readonly) FBAdPaymentsPostalCodeComponentController * postalCodeComponentController;                      //@synthesize postalCodeComponentController=_postalCodeComponentController - In the implementation block
@property (nonatomic,readonly) FBAdPaymentsCardHeaderComponentController * headerComponentController;                          //@synthesize headerComponentController=_headerComponentController - In the implementation block
@property (nonatomic,readonly) FBAdPaymentsCardFooterComponentController * footerComponentController;                          //@synthesize footerComponentController=_footerComponentController - In the implementation block
@property (nonatomic,readonly) FBAdPaymentsInlineCardErrorComponentController * cardErrorComponentController;                  //@synthesize cardErrorComponentController=_cardErrorComponentController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setupComponents;
-(long long)numberOfLayoutSections;
-(CGSize)layoutContainerSizeForIndexPath:(id)arg1 withConstraintSize:(CGSize)arg2 ;
-(CGSize)layoutFormHeaderSizeWithConstraintSize:(CGSize)arg1 forSection:(unsigned long long)arg2 ;
-(CGSize)layoutFormFooterSizeWithConstraintSize:(CGSize)arg1 forSection:(unsigned long long)arg2 ;
-(double)preferredLayoutContainerWidthForIndexPath:(id)arg1 ;
-(unsigned long long)numberOfSectionsForFormLayout:(id)arg1 ;
-(unsigned long long)numberOfRowsForFormLayout:(id)arg1 inSection:(unsigned long long)arg2 ;
-(unsigned long long)numberOfColsForFormLayout:(id)arg1 inSection:(unsigned long long)arg2 rowIndex:(unsigned long long)arg3 ;
-(id)initWithSession:(id)arg1 flowContext:(id)arg2 countryCode:(id)arg3 navigationCoordinator:(id)arg4 ;
-(id)formComponents;
-(FBAdPaymentsFormLayout *)formLayout;
-(FBAdPaymentsCardNumberComponentController *)cardNumberComponentController;
-(FBAdPaymentsExpirationDateComponentController *)expirationDateComponentController;
-(FBAdPaymentsSecurityCodeComponentController *)securityCodeComponentController;
-(FBAdPaymentsPostalCodeComponentController *)postalCodeComponentController;
-(FBAdPaymentsCardHeaderComponentController *)headerComponentController;
-(FBAdPaymentsCardFooterComponentController *)footerComponentController;
-(FBAdPaymentsInlineCardErrorComponentController *)cardErrorComponentController;
@end

