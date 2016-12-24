/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating, FBFacecastTipJarPaymentSettingManagerDelegate;
@class FBUserSession;

@interface FBFacecastTipJarPaymentSettingManager : NSObject {

	FBUserSession* _session;
	BOOL _shouldSkip;
	id<FBServiceTransactionMutating> _paymentSettingQueryToken;
	id<FBFacecastTipJarPaymentSettingManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBFacecastTipJarPaymentSettingManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithSession:(id)arg1 delegate:(id)arg2 ;
-(void)_didReceiveResponse:(id)arg1 ;
-(void)loadTipJarPaymentSetting;
-(void)updateTipJarPaymentSetting:(BOOL)arg1 ;
-(void)setDelegate:(id<FBFacecastTipJarPaymentSettingManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBFacecastTipJarPaymentSettingManagerDelegate>)delegate;
@end

