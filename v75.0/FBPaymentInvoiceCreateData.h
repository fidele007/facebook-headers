/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, NSArray, FBPaymentInvoiceCreateSelectedOptions;

@interface FBPaymentInvoiceCreateData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _client;
	NSString* _sellerId;
	NSString* _buyerId;
	NSArray* _items;
	FBPaymentInvoiceCreateSelectedOptions* _selectedOptions;
	NSArray* _customShippingOptions;
	NSString* _notes;
	NSArray* _extraData;

}

@property (nonatomic,copy) NSString * clientMutationId;                                          //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                                                   //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * client;                                                    //@synthesize client=_client - In the implementation block
@property (nonatomic,copy) NSString * sellerId;                                                  //@synthesize sellerId=_sellerId - In the implementation block
@property (nonatomic,copy) NSString * buyerId;                                                   //@synthesize buyerId=_buyerId - In the implementation block
@property (nonatomic,copy) NSArray * items;                                                      //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) FBPaymentInvoiceCreateSelectedOptions * selectedOptions;              //@synthesize selectedOptions=_selectedOptions - In the implementation block
@property (nonatomic,copy) NSArray * customShippingOptions;                                      //@synthesize customShippingOptions=_customShippingOptions - In the implementation block
@property (nonatomic,copy) NSString * notes;                                                     //@synthesize notes=_notes - In the implementation block
@property (nonatomic,copy) NSArray * extraData;                                                  //@synthesize extraData=_extraData - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)actorId;
-(void)setSellerId:(NSString *)arg1 ;
-(void)setBuyerId:(NSString *)arg1 ;
-(void)setCustomShippingOptions:(NSArray *)arg1 ;
-(void)setSelectedOptions:(FBPaymentInvoiceCreateSelectedOptions *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)sellerId;
-(NSString *)buyerId;
-(NSArray *)customShippingOptions;
-(FBPaymentInvoiceCreateSelectedOptions *)selectedOptions;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)setClient:(NSString *)arg1 ;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(void)setExtraData:(NSArray *)arg1 ;
-(NSString *)client;
-(NSArray *)extraData;
@end

