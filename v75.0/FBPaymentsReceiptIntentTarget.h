/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBIntentTarget.h>

@class NSString;

@interface FBPaymentsReceiptIntentTarget : FBIntentTarget {

	NSString* _productType;
	NSString* _productID;
	NSString* _actorID;

}

@property (nonatomic,copy,readonly) NSString * productType;              //@synthesize productType=_productType - In the implementation block
@property (nonatomic,copy,readonly) NSString * productID;                //@synthesize productID=_productID - In the implementation block
@property (nonatomic,copy,readonly) NSString * actorID;                  //@synthesize actorID=_actorID - In the implementation block
+(id)receiptIntentWithProductType:(id)arg1 productID:(id)arg2 actorID:(id)arg3 ;
-(id)fallbackURLs;
-(NSString *)actorID;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)productID;
-(NSString *)productType;
@end

