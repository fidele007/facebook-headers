/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RCTKeyCommands : NSObject
+(id)sharedInstance;
-(void)registerKeyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(/*^block*/id)arg3 ;
-(void)unregisterKeyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 ;
-(BOOL)isKeyCommandRegisteredForInput:(id)arg1 modifierFlags:(long long)arg2 ;
-(void)registerDoublePressKeyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(/*^block*/id)arg3 ;
-(void)unregisterDoublePressKeyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 ;
-(BOOL)isDoublePressKeyCommandRegisteredForInput:(id)arg1 modifierFlags:(long long)arg2 ;
@end
