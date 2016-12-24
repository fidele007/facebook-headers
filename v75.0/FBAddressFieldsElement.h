/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, FBAddressFieldsElementFields;

@interface FBAddressFieldsElement : FBGraphQLInput {

	NSString* _formFieldId;
	NSString* _disableAutofill;
	FBAddressFieldsElementFields* _value;

}

@property (nonatomic,copy) NSString * formFieldId;                            //@synthesize formFieldId=_formFieldId - In the implementation block
@property (nonatomic,copy) NSString * disableAutofill;                        //@synthesize disableAutofill=_disableAutofill - In the implementation block
@property (nonatomic,copy) FBAddressFieldsElementFields * value;              //@synthesize value=_value - In the implementation block
-(NSString *)formFieldId;
-(NSString *)disableAutofill;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setDisableAutofill:(NSString *)arg1 ;
-(void)setFormFieldId:(NSString *)arg1 ;
-(FBAddressFieldsElementFields *)value;
-(void)setValue:(FBAddressFieldsElementFields *)arg1 ;
@end

