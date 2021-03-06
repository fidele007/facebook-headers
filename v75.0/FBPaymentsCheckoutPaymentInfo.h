/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface FBPaymentsCheckoutPaymentInfo : FBValueObject <NSCopying> {

	NSString* _paymentType;
	NSString* _receiverID;
	NSString* _orderID;
	NSString* _action;
	NSDictionary* _extraData;

}

@property (nonatomic,copy,readonly) NSString * paymentType;                //@synthesize paymentType=_paymentType - In the implementation block
@property (nonatomic,copy,readonly) NSString * receiverID;                 //@synthesize receiverID=_receiverID - In the implementation block
@property (nonatomic,copy,readonly) NSString * orderID;                    //@synthesize orderID=_orderID - In the implementation block
@property (nonatomic,copy,readonly) NSString * action;                     //@synthesize action=_action - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extraData;              //@synthesize extraData=_extraData - In the implementation block
-(id)initWithPaymentType:(id)arg1 receiverID:(id)arg2 orderID:(id)arg3 action:(id)arg4 extraData:(id)arg5 ;
-(NSString *)orderID;
-(NSString *)receiverID;
-(NSString *)action;
-(NSString *)paymentType;
-(NSDictionary *)extraData;
@end

