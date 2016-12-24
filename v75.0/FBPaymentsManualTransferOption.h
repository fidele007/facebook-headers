/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBPaymentsPaymentMethodOption.h>

@class NSString;

@interface FBPaymentsManualTransferOption : NSObject <FBPaymentsPaymentMethodOption> {

	NSString* _transferOptionId;
	NSString* _title;
	NSString* _transferDescription;
	NSString* _invoiceId;

}

@property (nonatomic,copy,readonly) NSString * transferOptionId;                 //@synthesize transferOptionId=_transferOptionId - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * transferDescription;              //@synthesize transferDescription=_transferDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * invoiceId;                        //@synthesize invoiceId=_invoiceId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * paymentMethodType; 
-(NSString *)paymentMethodType;
-(BOOL)doesPaymentMethodBelongToThisOption:(id)arg1 ;
-(BOOL)doesCoverOption:(id)arg1 ;
-(BOOL)hasOverlapWithOption:(id)arg1 ;
-(NSString *)invoiceId;
-(NSString *)transferOptionId;
-(NSString *)transferDescription;
-(id)initWithTrasnferOptionId:(id)arg1 title:(id)arg2 transferDescription:(id)arg3 invoiceId:(id)arg4 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_compare:(id)arg1 ;
@end

