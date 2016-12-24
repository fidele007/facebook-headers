/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBBackstagePublishingHandlerListener.h>
#import <Facebook/FBScenePathHolding.h>
#import <Facebook/FBBackstageSeenStateListener.h>
#import <Facebook/FBDirectInboxDataControllerProtocol.h>

@protocol OS_dispatch_queue, FBServiceTransactionMutating, FBGraphQLSubscriptionHandle;
@class FBDirectInboxDataControllerListenerAnnouncer, FBUserSession, NSObject, FBMessagePackCoder, NSArray, NSMutableArray, FBBackstageSeenStateHandler, NSString;

@interface FBNewDirectInboxDataController : NSObject <FBBackstagePublishingHandlerListener, FBScenePathHolding, FBBackstageSeenStateListener, FBDirectInboxDataControllerProtocol> {

	FBDirectInboxDataControllerListenerAnnouncer* _announcer;
	FBUserSession* _session;
	NSObject*<OS_dispatch_queue> _cacheQueue;
	NSObject*<OS_dispatch_queue> _updateQueue;
	FBMessagePackCoder* _messagePackCoder;
	NSArray* _serverBuckets;
	id<FBServiceTransactionMutating> _transaction;
	NSMutableArray* _validRequests;
	id<FBGraphQLSubscriptionHandle> _subscriptionHandle;
	FBBackstageSeenStateHandler* _seenStateHandler;
	NSArray* _directInboxBuckets;
	unsigned long long _badgeCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long badgeCount;                  //@synthesize badgeCount=_badgeCount - In the implementation block
@property (nonatomic,copy,readonly) NSArray * directInboxBuckets;              //@synthesize directInboxBuckets=_directInboxBuckets - In the implementation block
-(void)prefetchInbox;
-(void)publishingHandler:(id)arg1 willPublishTask:(id)arg2 ;
-(void)publishingHandler:(id)arg1 didEnqueueTask:(id)arg2 ;
-(void)publishingHandler:(id)arg1 didFinishTask:(id)arg2 error:(id)arg3 ;
-(void)publishingHandlerDidFinishAllPublications:(id)arg1 ;
-(void)publishingHandler:(id)arg1 didUpdateProgress:(double)arg2 forTask:(id)arg3 ;
-(void)publishingHandler:(id)arg1 didTimeoutForTask:(id)arg2 ;
-(void)publishingHandler:(id)arg1 didChangeCancelEligibilityForTask:(id)arg2 ;
-(void)loadDataWithForceRefresh:(BOOL)arg1 ;
-(void)_prefetchUnseenPosts;
-(void)cancelLoadingData;
-(void)removeOptimisticData;
-(void)startObservingUpdatesForThread:(id)arg1 ;
-(void)stopObservingUpdatesForThreads;
-(void)retrieveThreadsWithGraphQLIDs:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)subscribeToThreadWithID:(id)arg1 update:(/*^block*/id)arg2 ;
-(NSArray *)directInboxBuckets;
-(void)setDirectInboxBuckets:(NSArray *)arg1 ;
-(void)_parseResponse:(id)arg1 query:(id)arg2 ;
-(void)_cacheDirectBuckets:(id)arg1 ;
-(id)_arrayByValidatingLocalSeenStateWithBuckets:(id)arg1 ;
-(void)_invalidateExpiredThreads;
-(void)seenStateHandler:(id)arg1 didUpdateThread:(id)arg2 ;
-(void)dealloc;
-(id)initWithSession:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)_unsubscribe;
-(void)_subscribe;
-(void)_updateBadgeCount;
-(void)setBadgeCount:(unsigned long long)arg1 ;
-(unsigned long long)badgeCount;
@end

