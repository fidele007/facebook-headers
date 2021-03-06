/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPinnedConversationsCommentSubscriberListener, FBGraphQLSubscriptionHandle;
@class FBUserSession, FBConsistentLookasideCacheObservationHandle, FBMemFeedback;

@interface FBPinnedConversationsCommentSubscriber : NSObject {

	FBUserSession* _session;
	id<FBPinnedConversationsCommentSubscriberListener> _listener;
	long long _readCommentCount;
	id<FBGraphQLSubscriptionHandle> _subscriptionHandle;
	FBConsistentLookasideCacheObservationHandle* _observationHandle;
	FBMemFeedback* _feedback;
	unsigned long long _unreadCommentCount;

}
-(void)feedbackDidUpdate:(id)arg1 ;
-(id)initWithSession:(id)arg1 listener:(id)arg2 ;
-(void)resetUnreadCommentCount;
-(void)subscribeToFeedback:(id)arg1 ;
-(void)sendUnreadCountUpdateIfNecessary;
-(void)dealloc;
-(void)applicationWillEnterForeground;
@end

