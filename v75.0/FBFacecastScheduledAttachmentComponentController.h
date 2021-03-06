/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKComponentController.h>

@protocol FBLiveStatusUpdateRegistrationToken, FBGraphQLSubscriptionHandle;
@class FBTimer;

@interface FBFacecastScheduledAttachmentComponentController : CKComponentController {

	FBTimer* _countDownTimer;
	FBTimer* _runningLateTimer;
	FBTimer* _expiredTimer;
	id<FBLiveStatusUpdateRegistrationToken> _statusListener;
	id<FBGraphQLSubscriptionHandle> _graphqlRescheduleSubscriptionHandle;

}
-(void)didMount;
-(void)didUnmount;
-(void)invalidateTimers;
-(id)attachmentComponent;
-(void)setupTimerWithStory:(id)arg1 ;
-(void)storyMutated:(id)arg1 ;
-(void)subscribeFromReschedule;
-(void)unsubscribeFromReschedule;
-(void)changeStateAndSuspendTimer:(id)arg1 ;
-(void)handleReschedulePayload:(id)arg1 ;
@end

