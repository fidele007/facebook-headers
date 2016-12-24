/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/RCTBridgeModule.h>

@protocol FBAdPaymentsCheckoutBridgeModuleDelegate;
@class NSString, RCTBridge;

@interface FBAdPaymentsCheckoutBridgeModule : NSObject <RCTBridgeModule> {

	id<FBAdPaymentsCheckoutBridgeModuleDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBAdPaymentsCheckoutBridgeModuleDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__140;
+(void)load;
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(void)checkoutFlowCompleted:(id)arg1 ;
-(void)setDelegate:(id<FBAdPaymentsCheckoutBridgeModuleDelegate>)arg1 ;
-(id<FBAdPaymentsCheckoutBridgeModuleDelegate>)delegate;
@end

