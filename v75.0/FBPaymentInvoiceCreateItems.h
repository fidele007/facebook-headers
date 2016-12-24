/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, FBPaymentInvoiceCreateItemCurrencyAmount;

@interface FBPaymentInvoiceCreateItems : FBGraphQLInput {

	NSString* _graphQLID;
	NSString* _title;
	NSString* _subtitle;
	FBPaymentInvoiceCreateItemCurrencyAmount* _currencyAmount;
	NSString* _quantity;

}

@property (nonatomic,copy) NSString * graphQLID;                                                   //@synthesize graphQLID=_graphQLID - In the implementation block
@property (nonatomic,copy) NSString * title;                                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                                    //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) FBPaymentInvoiceCreateItemCurrencyAmount * currencyAmount;              //@synthesize currencyAmount=_currencyAmount - In the implementation block
@property (nonatomic,copy) NSString * quantity;                                                    //@synthesize quantity=_quantity - In the implementation block
-(void)setGraphQLID:(NSString *)arg1 ;
-(NSString *)graphQLID;
-(FBPaymentInvoiceCreateItemCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(FBPaymentInvoiceCreateItemCurrencyAmount *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setQuantity:(NSString *)arg1 ;
-(NSString *)quantity;
@end
