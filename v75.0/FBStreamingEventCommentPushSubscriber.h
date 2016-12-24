/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBStreamingEventEntitySubscriber.h>

@protocol FBGraphQLSubscriptionHandle;
@class FBMemFeedback, FBScenePath, NSString, FBUserSession;

@interface FBStreamingEventCommentPushSubscriber : NSObject <FBStreamingEventEntitySubscriber> {

	id<FBGraphQLSubscriptionHandle> _subscriptionHandle;
	/*^block*/id _successHandler;
	FBMemFeedback* _feedback;
	FBScenePath* _scenePath;
	NSString* _analyticsModule;
	FBUserSession* _session;

}

@property (nonatomic,retain) FBMemFeedback * feedback;              //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,retain) FBScenePath * scenePath;               //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,copy) NSString * analyticsModule;              //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,retain) FBUserSession * session;               //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBScenePath *)scenePath;
-(NSString *)analyticsModule;
-(void)setScenePath:(FBScenePath *)arg1 ;
-(void)setAnalyticsModule:(NSString *)arg1 ;
-(id)_graphQLQuery;
-(id)initWithSession:(id)arg1 feedback:(id)arg2 scenePath:(id)arg3 analyticsModule:(id)arg4 ;
-(void)stopSubscription;
-(id)_eventsFromPayload:(id)arg1 ;
-(void)_processEventsFromPayload:(id)arg1 ;
-(void)startSubscriptionWithSuccessBlock:(/*^block*/id)arg1 ;
-(unsigned long long)type;
-(void)setFeedback:(FBMemFeedback *)arg1 ;
-(FBMemFeedback *)feedback;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end
