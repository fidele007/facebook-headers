/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBPaymentsImage, NSString, FBPaymentsCurrencyQuantity, NSArray;

@interface FBPaymentsCartItemViewModel : FBValueObject <NSCopying> {

	FBPaymentsImage* _image;
	NSString* _title;
	long long _quantity;
	FBPaymentsCurrencyQuantity* _pricePerItem;
	NSString* _descriptionText;
	NSArray* _variants;

}

@property (nonatomic,copy,readonly) FBPaymentsImage * image;                                //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) long long quantity;                                          //@synthesize quantity=_quantity - In the implementation block
@property (nonatomic,copy,readonly) FBPaymentsCurrencyQuantity * pricePerItem;              //@synthesize pricePerItem=_pricePerItem - In the implementation block
@property (nonatomic,copy,readonly) NSString * descriptionText;                             //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy,readonly) NSArray * variants;                                     //@synthesize variants=_variants - In the implementation block
-(FBPaymentsCurrencyQuantity *)pricePerItem;
-(id)initWithImage:(id)arg1 title:(id)arg2 quantity:(long long)arg3 pricePerItem:(id)arg4 descriptionText:(id)arg5 variants:(id)arg6 ;
-(NSString *)title;
-(FBPaymentsImage *)image;
-(NSString *)descriptionText;
-(NSArray *)variants;
-(long long)quantity;
@end

