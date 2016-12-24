/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBFeedSecondaryActionSequence, FBResolvableProxyingNegativeFeedbackActionDelegate, FBResolvableProxyingSeeFirstActionDelegate, FBResolvableProxyingHideTopicForUserActionDelegate;

@interface FBFeedSecondaryActionsInfo : NSObject {

	FBFeedSecondaryActionSequence* _actionSequence;
	FBResolvableProxyingNegativeFeedbackActionDelegate* _resolvableProxyingNegativeFeedbackActionDelegate;
	FBResolvableProxyingSeeFirstActionDelegate* _resolvableProxyingSeeFirstActionDelegate;
	FBResolvableProxyingHideTopicForUserActionDelegate* _resolvableProxyingHideTopicForUserActionDelegate;

}

@property (nonatomic,readonly) FBFeedSecondaryActionSequence * actionSequence;                                                                     //@synthesize actionSequence=_actionSequence - In the implementation block
@property (nonatomic,readonly) FBResolvableProxyingNegativeFeedbackActionDelegate * resolvableProxyingNegativeFeedbackActionDelegate;              //@synthesize resolvableProxyingNegativeFeedbackActionDelegate=_resolvableProxyingNegativeFeedbackActionDelegate - In the implementation block
@property (nonatomic,readonly) FBResolvableProxyingSeeFirstActionDelegate * resolvableProxyingSeeFirstActionDelegate;                              //@synthesize resolvableProxyingSeeFirstActionDelegate=_resolvableProxyingSeeFirstActionDelegate - In the implementation block
@property (nonatomic,readonly) FBResolvableProxyingHideTopicForUserActionDelegate * resolvableProxyingHideTopicForUserActionDelegate;              //@synthesize resolvableProxyingHideTopicForUserActionDelegate=_resolvableProxyingHideTopicForUserActionDelegate - In the implementation block
-(FBFeedSecondaryActionSequence *)actionSequence;
-(FBResolvableProxyingNegativeFeedbackActionDelegate *)resolvableProxyingNegativeFeedbackActionDelegate;
-(FBResolvableProxyingHideTopicForUserActionDelegate *)resolvableProxyingHideTopicForUserActionDelegate;
-(FBResolvableProxyingSeeFirstActionDelegate *)resolvableProxyingSeeFirstActionDelegate;
-(id)initWithActionSequence:(id)arg1 resolvableProxyingNegativeFeedbackActionDelegate:(id)arg2 resolvableProxyingSeeFirstActionDelegate:(id)arg3 resolvableProxyingHideTopicForUserActionDelegate:(id)arg4 ;
@end

