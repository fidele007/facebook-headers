/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBPaymentsSelectPaymentMethodsSelectBillingCountryViewModel : FBValueObject <NSCopying> {

	NSString* _text;
	NSString* _country;

}

@property (nonatomic,copy,readonly) NSString * text;                 //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSString * country;              //@synthesize country=_country - In the implementation block
-(id)initWithText:(id)arg1 country:(id)arg2 ;
-(NSString *)text;
-(NSString *)country;
@end

