/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPaymentsPaymentMethodCollectedData.h>

@class NSString, NSURL;

@interface FBPaymentsPayPalPaymentProviderCollectedData : NSObject <FBPaymentsPaymentMethodCollectedData> {

	NSString* _pollingType;
	NSURL* _pollingURL;

}

@property (nonatomic,copy,readonly) NSString * pollingType;                    //@synthesize pollingType=_pollingType - In the implementation block
@property (nonatomic,copy,readonly) NSURL * pollingURL;                        //@synthesize pollingURL=_pollingURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * paymentMethodType; 
-(NSString *)paymentMethodType;
-(NSString *)pollingType;
-(NSURL *)pollingURL;
-(id)initWithPollingType:(id)arg1 pollingURL:(id)arg2 ;
@end
