/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface FBPaymentsKitSelectPaymentMethodViewConfiguration : FBValueObject <NSCopying> {

	BOOL _shouldAllowAddingPaypal;
	NSArray* _existingPaymentMethods;
	NSArray* _eligibleCardTypes;
	NSString* _userCountry;
	NSString* _userCurrency;
	NSString* _accountID;

}

@property (nonatomic,copy,readonly) NSArray * existingPaymentMethods;              //@synthesize existingPaymentMethods=_existingPaymentMethods - In the implementation block
@property (nonatomic,readonly) BOOL shouldAllowAddingPaypal;                       //@synthesize shouldAllowAddingPaypal=_shouldAllowAddingPaypal - In the implementation block
@property (nonatomic,copy,readonly) NSArray * eligibleCardTypes;                   //@synthesize eligibleCardTypes=_eligibleCardTypes - In the implementation block
@property (nonatomic,copy,readonly) NSString * userCountry;                        //@synthesize userCountry=_userCountry - In the implementation block
@property (nonatomic,copy,readonly) NSString * userCurrency;                       //@synthesize userCurrency=_userCurrency - In the implementation block
@property (nonatomic,copy,readonly) NSString * accountID;                          //@synthesize accountID=_accountID - In the implementation block
-(NSArray *)existingPaymentMethods;
-(id)initWithExistingPaymentMethods:(id)arg1 shouldAllowAddingPaypal:(BOOL)arg2 eligibleCardTypes:(id)arg3 userCountry:(id)arg4 userCurrency:(id)arg5 accountID:(id)arg6 ;
-(NSString *)userCurrency;
-(BOOL)shouldAllowAddingPaypal;
-(NSString *)userCountry;
-(NSArray *)eligibleCardTypes;
-(NSString *)accountID;
@end

