/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBStreamingEventPinnedModel.h>

@protocol FBGraphQLSubscriptionHandle, FBServiceTransactionMutating, FBStreamingEventPinnedModelDelegate;
@class FBUserSession, NSString, FBScenePath;

@interface FBStreamingEventPinnedLiveModel : NSObject <FBStreamingEventPinnedModel> {

	FBUserSession* _session;
	NSString* _videoID;
	FBScenePath* _scenePath;
	id<FBGraphQLSubscriptionHandle> _subscriptionHandle;
	id<FBServiceTransactionMutating> _queryHandle;
	id<FBStreamingEventPinnedModelDelegate> delegate;
	NSString* _currentPinEventID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBStreamingEventPinnedModelDelegate> delegate; 
@property (nonatomic,copy,readonly) NSString * currentPinEventID;                                  //@synthesize currentPinEventID=_currentPinEventID - In the implementation block
-(id)initWithSession:(id)arg1 videoID:(id)arg2 scenePath:(id)arg3 ;
-(void)setMediaTime:(double)arg1 ;
-(NSString *)currentPinEventID;
-(void)_historicalQuerySucceededWithResponse:(id)arg1 ;
-(void)_subscriptionSentPayload:(id)arg1 ;
-(void)setDelegate:(id<FBStreamingEventPinnedModelDelegate>)arg1 ;
-(void)dealloc;
-(id<FBStreamingEventPinnedModelDelegate>)delegate;
-(void)startObserving;
-(void)stopObserving;
@end
