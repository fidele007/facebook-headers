/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMemPaymentAccountEmail, FBMemPaymentAccountPhone;

@interface FBPaymentsPurchaseInfoContactDataModel : FBValueObject <NSCopying> {

	FBMemPaymentAccountEmail* _contactEmail;
	FBMemPaymentAccountPhone* _contactPhone;

}

@property (nonatomic,copy,readonly) FBMemPaymentAccountEmail * contactEmail;              //@synthesize contactEmail=_contactEmail - In the implementation block
@property (nonatomic,copy,readonly) FBMemPaymentAccountPhone * contactPhone;              //@synthesize contactPhone=_contactPhone - In the implementation block
-(FBMemPaymentAccountEmail *)contactEmail;
-(FBMemPaymentAccountPhone *)contactPhone;
-(id)initWithContactEmail:(id)arg1 contactPhone:(id)arg2 ;
@end

