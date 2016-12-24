/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPaymentsCheckoutConfirmationAction.h>

@protocol FBPaymentsNavigationDelegate, FBPaymentsCheckoutConfirmationActionDelegate;
@class NSString;

@interface FBPaymentsSampleCustomizedConfirmationAction : NSObject <FBPaymentsCheckoutConfirmationAction> {

	id<FBPaymentsNavigationDelegate> _navigationDelegate;
	id<FBPaymentsCheckoutConfirmationActionDelegate> _actionDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;                          //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsCheckoutConfirmationActionDelegate> actionDelegate;              //@synthesize actionDelegate=_actionDelegate - In the implementation block
-(id)cellReuseIdentifier;
-(BOOL)isDisabledForCheckoutResponse:(id)arg1 ;
-(void)handleActionWithCheckoutResponse:(id)arg1 checkoutFlowCollectedData:(id)arg2 ;
-(id)newActionCell;
-(void)configureActionCell:(id)arg1 withCheckoutResponse:(id)arg2 checkoutFlowCollectedData:(id)arg3 ;
-(double)heightForActionCell;
-(void)handleFollowUpAction;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setActionDelegate:(id<FBPaymentsCheckoutConfirmationActionDelegate>)arg1 ;
-(id<FBPaymentsCheckoutConfirmationActionDelegate>)actionDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
-(id)actionTitle;
@end

