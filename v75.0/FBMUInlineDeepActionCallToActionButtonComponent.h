/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@protocol FBNavigationCoordinator;
@class NSArray, FBMUServiceSession;

@interface FBMUInlineDeepActionCallToActionButtonComponent : CKCompositeComponent {

	BOOL _isSelected;
	id<FBNavigationCoordinator> _navigationCoordinator;
	NSArray* _iOSURLS;
	FBMUServiceSession* _session;
	CKTypedComponentAction<> _didTapCallToAction;
	CKTypedComponentAction<> _willStartAuthenticationFlowAction;

}

@property (nonatomic,readonly) id<FBNavigationCoordinator> navigationCoordinator;                       //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,copy,readonly) NSArray * iOSURLS;                                                  //@synthesize iOSURLS=_iOSURLS - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> didTapCallToAction;                             //@synthesize didTapCallToAction=_didTapCallToAction - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> willStartAuthenticationFlowAction;              //@synthesize willStartAuthenticationFlowAction=_willStartAuthenticationFlowAction - In the implementation block
@property (nonatomic,readonly) FBMUServiceSession * session;                                            //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) BOOL isSelected;                                                           //@synthesize isSelected=_isSelected - In the implementation block
+(id)newWithSession:(id)arg1 buttonConfigBlock:(/*^block*/id)arg2 size:(const CKComponentSize*)arg3 deduplicationKey:(id)arg4 iOSURLS:(id)arg5 didTapCallToAction:(CKTypedComponentAction<>)arg6 attributes:(const unordered_map<CKComponentViewAttribute, CKBoxedValue, std::__1::hash<CKComponentViewAttribute>, std::__1::equal_to<CKComponentViewAttribute>, std::__1::allocator<std::__1::pair<const CKComponentViewAttribute, CKBoxedValue> > >*)arg7 navigationCoordinator:(id)arg8 willStartAuthenticationFlowAction:(CKTypedComponentAction<>)arg9 ;
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(void)deepActionCTA;
-(CKTypedComponentAction<>)didTapCallToAction;
-(NSArray *)iOSURLS;
-(CKTypedComponentAction<>)willStartAuthenticationFlowAction;
-(BOOL)isSelected;
-(void)setIsSelected:(BOOL)arg1 ;
-(FBMUServiceSession *)session;
@end

