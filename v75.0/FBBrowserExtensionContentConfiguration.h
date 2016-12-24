/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPaymentsCheckoutPayActionContentProviding.h>
#import <Facebook/FBPaymentsCheckoutPaymentProcessLoadingStyleProviding.h>
#import <Facebook/FBPaymentsCheckoutContentConfiguration.h>

@class FBUserSession, NSArray, NSAttributedString, FBPaymentsPaymentMethodsCoordinator, NSString;

@interface FBBrowserExtensionContentConfiguration : NSObject <FBPaymentsCheckoutPayActionContentProviding, FBPaymentsCheckoutPaymentProcessLoadingStyleProviding, FBPaymentsCheckoutContentConfiguration> {

	FBUserSession* _session;
	NSArray* _sectionsArray;
	long long _checkoutLogoStyle;
	NSAttributedString* _termsAndPoliciesString;
	FBPaymentsPaymentMethodsCoordinator* _paymentMethodsCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)headerViewModelCreator;
-(id)purchaseInfoExtensionDescriptors;
-(id)payActionContentProvider;
-(id)priceDetails;
-(id)checkoutViewTitle;
-(id)paymentProcessLoadingStyleProvider;
-(long long)checkoutLogoStyle;
-(id)termsAndPoliciesModel:(id)arg1 ;
-(id)payActionTitleWithCollectedData:(id)arg1 ;
-(id)initWithSession:(id)arg1 sectionsArray:(id)arg2 checkoutLogoStyle:(long long)arg3 termsAndPoliciesString:(id)arg4 ;
-(long long)paymentProcessLoadingStyleWithCollectedData:(id)arg1 ;
-(void)_loadPaymentMethodsCoordinatorIfNeeded;
@end
