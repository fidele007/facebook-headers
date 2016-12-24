/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/MQEventHandlerProtocol.h>

@class NSString, NSMutableDictionary;

@interface MQEventHandler : NSObject <MQEventHandlerProtocol> {

	NSString* _functionName;
	/*^block*/id _targetBlock;
	id _target;
	NSMutableDictionary* _dispatcherMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFunction:(/*^block*/id)arg1 target:(id)arg2 name:(id)arg3 ;
-(void)_initialiseWithFunctionName:(id)arg1 ;
-(void)invokeHandlerWithEvent:(id)arg1 ;
-(void)addedToEventDispatcher:(id)arg1 forType:(id)arg2 ;
-(void)removedFromEventDispatcher:(id)arg1 forType:(id)arg2 ;
-(id)initWithFunction:(/*^block*/id)arg1 target:(id)arg2 ;
-(id)initWithSelector:(SEL)arg1 target:(id)arg2 ;
-(void)removeFromAllDispatchers;
-(id)init;
-(NSString *)description;
@end
