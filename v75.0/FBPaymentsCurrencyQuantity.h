/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDecimalNumber;

@interface FBPaymentsCurrencyQuantity : FBValueObject <NSCopying> {

	NSString* _currencyCode;
	NSDecimalNumber* _amount;

}

@property (nonatomic,copy,readonly) NSString * currencyCode;               //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * amount;              //@synthesize amount=_amount - In the implementation block
-(id)initWithCurrencyCode:(id)arg1 amount:(id)arg2 ;
-(NSDecimalNumber *)amount;
-(NSString *)currencyCode;
@end

