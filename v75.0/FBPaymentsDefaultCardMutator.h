/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPaymentsPaymentMethodsDataMutator.h>

@class FBUserSession, NSString;

@interface FBPaymentsDefaultCardMutator : NSObject <FBPaymentsPaymentMethodsDataMutator> {

	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addPaymentMethodWithCollectedData:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)updatePaymentMethod:(id)arg1 collectedData:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)removePaymentMethod:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithSession:(id)arg1 ;
@end

