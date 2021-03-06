/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, NSNumber;

@interface FBTipCurrencyAmount : FBGraphQLInput {

	NSString* _currency;
	NSNumber* _amount;
	NSString* _useCash;

}

@property (nonatomic,copy) NSString * currency;              //@synthesize currency=_currency - In the implementation block
@property (nonatomic,copy) NSNumber * amount;                //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy) NSString * useCash;               //@synthesize useCash=_useCash - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)useCash;
-(void)setUseCash:(NSString *)arg1 ;
-(void)setAmount:(NSNumber *)arg1 ;
-(NSNumber *)amount;
-(NSString *)currency;
-(void)setCurrency:(NSString *)arg1 ;
@end

