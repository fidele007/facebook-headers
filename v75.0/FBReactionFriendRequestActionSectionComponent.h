/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBNotificationsEventBus, FBViewControllerAppearanceLifecycleListenerAnnouncer, CKComponent;

@interface FBReactionFriendRequestActionSectionComponent : CKCompositeComponent {

	BOOL _showPivotComponentForFriendRequestStateNormal;
	FBNotificationsEventBus* _notificationsEventBus;
	FBViewControllerAppearanceLifecycleListenerAnnouncer* _viewControllerLifeCycleAnnouncer;
	CKComponent* _pivotComponent;

}

@property (nonatomic,__weak,readonly) FBNotificationsEventBus * notificationsEventBus;                                                      //@synthesize notificationsEventBus=_notificationsEventBus - In the implementation block
@property (nonatomic,readonly) BOOL showPivotComponentForFriendRequestStateNormal;                                                          //@synthesize showPivotComponentForFriendRequestStateNormal=_showPivotComponentForFriendRequestStateNormal - In the implementation block
@property (nonatomic,__weak,readonly) FBViewControllerAppearanceLifecycleListenerAnnouncer * viewControllerLifeCycleAnnouncer;              //@synthesize viewControllerLifeCycleAnnouncer=_viewControllerLifeCycleAnnouncer - In the implementation block
@property (nonatomic,__weak,readonly) CKComponent * pivotComponent;                                                                         //@synthesize pivotComponent=_pivotComponent - In the implementation block
+(id)newWithRequesterGraphQLID:(id)arg1 requestState:(long long)arg2 pendingRequestCount:(long long)arg3 pendingFriendRequesters:(id)arg4 suggestedFriends:(id)arg5 reactionContext:(id)arg6 viewFriendRequestsAction:(CKTypedComponentAction<>)arg7 viewSuggestionsAction:(CKTypedComponentAction<>)arg8 viewContactImporterAction:(CKTypedComponentAction<>)arg9 confirmFriendRequestAction:(CKTypedComponentAction<>)arg10 deleteFriendRequestAction:(CKTypedComponentAction<>)arg11 ;
+(id)initialState;
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsFromPreviousComponent:(id)arg1 ;
-(CKComponentBoundsAnimation)boundsAnimationFromPreviousComponent:(id)arg1 ;
-(FBViewControllerAppearanceLifecycleListenerAnnouncer *)viewControllerLifeCycleAnnouncer;
-(CKComponent *)pivotComponent;
-(FBNotificationsEventBus *)notificationsEventBus;
-(BOOL)showPivotComponentForFriendRequestStateNormal;
@end

