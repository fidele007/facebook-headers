/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, FBPaymentsPrice, NSArray;

@interface FBPaymentsPriceItem : FBValueObject <NSCopying, NSCoding> {

	NSString* _title;
	FBPaymentsPrice* _price;
	NSArray* _priceItems;

}

@property (nonatomic,copy,readonly) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) FBPaymentsPrice * price;              //@synthesize price=_price - In the implementation block
@property (nonatomic,copy,readonly) NSArray * priceItems;                 //@synthesize priceItems=_priceItems - In the implementation block
-(id)initWithTitle:(id)arg1 price:(id)arg2 priceItems:(id)arg3 ;
-(NSArray *)priceItems;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)title;
-(FBPaymentsPrice *)price;
@end

