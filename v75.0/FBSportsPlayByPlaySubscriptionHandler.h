/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBGraphQLSubscriptionHandle, FBSportsPlayByPlaySubscriptionHandlerDelegate;
@class FBUserSession, NSString, NSDate;

@interface FBSportsPlayByPlaySubscriptionHandler : NSObject {

	FBUserSession* _session;
	NSString* _pageID;
	long long _sequenceNumber;
	NSDate* _latestTime;
	id<FBGraphQLSubscriptionHandle> _subscriptionHandle;
	BOOL _subscribedOnSequenceNumber;
	id<FBSportsPlayByPlaySubscriptionHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBSportsPlayByPlaySubscriptionHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithSession:(id)arg1 pageID:(id)arg2 ;
-(void)subscribeWithFacts:(id)arg1 ;
-(void)_didReceiveCreatePayload:(id)arg1 ;
-(void)setDelegate:(id<FBSportsPlayByPlaySubscriptionHandlerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBSportsPlayByPlaySubscriptionHandlerDelegate>)delegate;
-(void)unsubscribe;
@end

