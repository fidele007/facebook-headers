/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:02 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKComponentStateListener;
#import <Facebook/Facebook-Structs.h>
@class CKComponentController, CKComponent;

@interface CKComponentScopeHandle : NSObject {

	id<CKComponentStateListener> _listener;
	CKComponentController* _controller;
	int _rootIdentifier;
	BOOL _acquired;
	BOOL _resolved;
	CKComponent* _acquiredComponent;
	int _globalIdentifier;
	Class _componentClass;
	id _state;

}

@property (nonatomic,readonly) CKComponentController * controller; 
@property (nonatomic,readonly) Class componentClass;                            //@synthesize componentClass=_componentClass - In the implementation block
@property (nonatomic,readonly) id state;                                        //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) int globalIdentifier;                            //@synthesize globalIdentifier=_globalIdentifier - In the implementation block
+(id)handleForComponent:(id)arg1 ;
-(void)updateState:(/*^block*/id)arg1 mode:(unsigned long long)arg2 ;
-(BOOL)acquireFromComponent:(id)arg1 ;
-(id)initWithListener:(id)arg1 globalIdentifier:(int)arg2 rootIdentifier:(int)arg3 componentClass:(Class)arg4 state:(id)arg5 controller:(id)arg6 ;
-(id)initWithListener:(id)arg1 rootIdentifier:(int)arg2 componentClass:(Class)arg3 initialStateCreator:(/*^block*/id)arg4 ;
-(id)newHandleWithStateUpdates:(const unordered_multimap<int, id ()(id), std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, id ()(id)> > >*)arg1 componentScopeRoot:(id)arg2 ;
-(id)newHandleToBeReacquiredDueToScopeCollision;
-(void)dealloc;
-(id)state;
-(id)responder;
-(CKComponentController *)controller;
-(void)resolve;
-(int)globalIdentifier;
-(Class)componentClass;
@end

