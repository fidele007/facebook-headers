/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDecimalNumber, NSString, NSArray;

@interface FBEventTicketPricingEngineResult : FBValueObject <NSCopying> {

	NSDecimalNumber* _totalAmount;
	NSDecimalNumber* _subtotalAmount;
	NSString* _currency;
	NSArray* _ticketTierItems;
	NSArray* _taxesAndFeeItems;

}

@property (nonatomic,copy,readonly) NSDecimalNumber * totalAmount;                 //@synthesize totalAmount=_totalAmount - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * subtotalAmount;              //@synthesize subtotalAmount=_subtotalAmount - In the implementation block
@property (nonatomic,copy,readonly) NSString * currency;                           //@synthesize currency=_currency - In the implementation block
@property (nonatomic,copy,readonly) NSArray * ticketTierItems;                     //@synthesize ticketTierItems=_ticketTierItems - In the implementation block
@property (nonatomic,copy,readonly) NSArray * taxesAndFeeItems;                    //@synthesize taxesAndFeeItems=_taxesAndFeeItems - In the implementation block
-(NSDecimalNumber *)totalAmount;
-(NSArray *)taxesAndFeeItems;
-(NSDecimalNumber *)subtotalAmount;
-(NSArray *)ticketTierItems;
-(id)initWithTotalAmount:(id)arg1 subtotalAmount:(id)arg2 currency:(id)arg3 ticketTierItems:(id)arg4 taxesAndFeeItems:(id)arg5 ;
-(NSString *)currency;
@end

