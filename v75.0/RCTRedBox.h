/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/RCTBridgeModule.h>

@class NSString, RCTBridge;

@interface RCTRedBox : NSObject <RCTBridgeModule>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
-(void)registerErrorCustomizer:(id)arg1 ;
-(void)showErrorMessage:(id)arg1 withRawStack:(id)arg2 ;
-(void)showErrorMessage:(id)arg1 ;
-(void)showErrorMessage:(id)arg1 withDetails:(id)arg2 ;
-(void)showErrorMessage:(id)arg1 withStack:(id)arg2 ;
-(void)updateErrorMessage:(id)arg1 withStack:(id)arg2 ;
-(void)showErrorMessage:(id)arg1 withStack:(id)arg2 isUpdate:(BOOL)arg3 ;
-(void)dismiss;
-(void)showError:(id)arg1 ;
@end

