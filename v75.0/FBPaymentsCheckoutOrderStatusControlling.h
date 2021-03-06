/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPaymentsCheckoutOrderStatusControlling <FBPaymentsDataLoadingControlling>
@property (assign,nonatomic,__weak) id<FBPaymentsCheckoutOrderStatusControllingDelegate> orderStatusControllingDelegate; 
@property (assign,nonatomic,__weak) id<FBPaymentsCheckoutOrderStatusCollectedDataDelegate> orderStatusCollectedDataDelegate; 
@optional
-(void)setContentConfiguration:(id)arg1;
-(void)setDataLoadingStatus:(long long)arg1;
-(void)updateOrderStatus;
-(id)orderData;
-(void)setUp;

@required
-(void)setOrderStatusCollectedDataDelegate:(id)arg1;
-(id)contentConfiguration;
-(id<FBPaymentsCheckoutOrderStatusControllingDelegate>)orderStatusControllingDelegate;
-(void)setOrderStatusControllingDelegate:(id)arg1;
-(id<FBPaymentsCheckoutOrderStatusCollectedDataDelegate>)orderStatusCollectedDataDelegate;

@end

