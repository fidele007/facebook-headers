/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/RCTEventEmitter.h>

@interface RCTStatusBarManager : RCTEventEmitter
+(id)moduleName;
+(id)__rct_export__990;
+(id)__rct_export__1071;
+(id)__rct_export__1192;
+(id)__rct_export__1303;
+(void)load;
-(id)methodQueue;
-(id)supportedEvents;
-(void)applicationDidChangeStatusBarFrame:(id)arg1 ;
-(void)applicationWillChangeStatusBarFrame:(id)arg1 ;
-(void)emitEvent:(id)arg1 forNotification:(id)arg2 ;
-(void)getHeight:(/*^block*/id)arg1 ;
-(void)setHidden:(BOOL)arg1 withAnimation:(long long)arg2 ;
-(void)setNetworkActivityIndicatorVisible:(BOOL)arg1 ;
-(void)setStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(void)startObserving;
-(void)stopObserving;
@end
