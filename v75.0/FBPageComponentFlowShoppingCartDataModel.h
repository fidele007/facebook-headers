/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMemShoppingCartFormField, NSDictionary, FBMemCurrencyAmount, NSArray;

@interface FBPageComponentFlowShoppingCartDataModel : FBValueObject <NSCopying> {

	FBMemShoppingCartFormField* _formField;
	NSDictionary* _itemQuantities;
	FBMemCurrencyAmount* _itemsSubtotal;
	NSArray* _additionalFees;
	FBMemCurrencyAmount* _extraFee;
	FBMemCurrencyAmount* _totalAmount;
	FBMemCurrencyAmount* _tip;

}

@property (nonatomic,copy,readonly) FBMemShoppingCartFormField * formField;              //@synthesize formField=_formField - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * itemQuantities;                       //@synthesize itemQuantities=_itemQuantities - In the implementation block
@property (nonatomic,copy,readonly) FBMemCurrencyAmount * itemsSubtotal;                 //@synthesize itemsSubtotal=_itemsSubtotal - In the implementation block
@property (nonatomic,copy,readonly) NSArray * additionalFees;                            //@synthesize additionalFees=_additionalFees - In the implementation block
@property (nonatomic,copy,readonly) FBMemCurrencyAmount * extraFee;                      //@synthesize extraFee=_extraFee - In the implementation block
@property (nonatomic,copy,readonly) FBMemCurrencyAmount * totalAmount;                   //@synthesize totalAmount=_totalAmount - In the implementation block
@property (nonatomic,copy,readonly) FBMemCurrencyAmount * tip;                           //@synthesize tip=_tip - In the implementation block
+(id)newWithFormField:(id)arg1 itemQuantities:(id)arg2 tip:(id)arg3 ;
+(id)newWithFormField:(id)arg1 ;
-(FBMemCurrencyAmount *)totalAmount;
-(FBMemShoppingCartFormField *)formField;
-(id)initWithFormField:(id)arg1 itemQuantities:(id)arg2 itemsSubtotal:(id)arg3 additionalFees:(id)arg4 extraFee:(id)arg5 totalAmount:(id)arg6 tip:(id)arg7 ;
-(NSDictionary *)itemQuantities;
-(FBMemCurrencyAmount *)itemsSubtotal;
-(NSArray *)additionalFees;
-(FBMemCurrencyAmount *)extraFee;
-(long long)totalQuantities;
-(FBMemCurrencyAmount *)tip;
@end

