/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface FBPaymentsPriceListViewModel : FBValueObject <NSCopying> {

	BOOL _shouldDisplayTotalAmountOnly;
	BOOL _shouldShowTotalPrice;
	NSArray* _priceItems;

}

@property (nonatomic,copy,readonly) NSArray * priceItems;                      //@synthesize priceItems=_priceItems - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisplayTotalAmountOnly;              //@synthesize shouldDisplayTotalAmountOnly=_shouldDisplayTotalAmountOnly - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowTotalPrice;                      //@synthesize shouldShowTotalPrice=_shouldShowTotalPrice - In the implementation block
-(BOOL)shouldDisplayTotalAmountOnly;
-(NSArray *)priceItems;
-(id)initWithPriceItems:(id)arg1 shouldDisplayTotalAmountOnly:(BOOL)arg2 shouldShowTotalPrice:(BOOL)arg3 ;
-(BOOL)shouldShowTotalPrice;
@end
