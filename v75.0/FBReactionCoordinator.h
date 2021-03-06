/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBReactionCoordinatorHandler;
@class NSMutableDictionary;

@interface FBReactionCoordinator : NSObject {

	id<FBReactionCoordinatorHandler> _handler;
	NSMutableDictionary* _cacheKeyMap;
	NSMutableDictionary* _timerMap;

}

@property (nonatomic,retain) id<FBReactionCoordinatorHandler> handler;              //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cacheKeyMap;                     //@synthesize cacheKeyMap=_cacheKeyMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * timerMap;                        //@synthesize timerMap=_timerMap - In the implementation block
-(void)registerHandler:(id)arg1 ;
-(void)openReactionWithPlaceID:(id)arg1 surface:(id)arg2 navigationCoordinator:(id)arg3 clearCache:(BOOL)arg4 referrer:(id)arg5 ;
-(void)openReactionWithNeighborhoodInputNeighborhoodTriggerData:(id)arg1 navigationCoordinator:(id)arg2 clearCache:(BOOL)arg3 referrer:(id)arg4 ;
-(void)openReactionWithPageID:(id)arg1 surface:(id)arg2 navigationCoordinator:(id)arg3 clearCache:(BOOL)arg4 referrer:(id)arg5 ;
-(BOOL)openPlaceTipsWithState:(id)arg1 navigationCoordinator:(id)arg2 referrer:(id)arg3 ;
-(void)prefetchReactionWithPlaceTipState:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)openReactionWithTriggerInputTriggerData:(id)arg1 navigationCoordinator:(id)arg2 clearCache:(BOOL)arg3 referrer:(id)arg4 ;
-(void)_removeCachedReactionForCacheKey:(id)arg1 ;
-(void)prefetchReactionWithTriggerInputTriggerData:(id)arg1 completionBlock:(/*^block*/id)arg2 placeTipState:(id)arg3 ;
-(void)_openReactionWithData:(id)arg1 clearCache:(BOOL)arg2 handlerBlock:(/*^block*/id)arg3 ;
-(void)_prefetchReactionWithData:(id)arg1 completionBlock:(id)arg2 handlerBlock:(/*^block*/id)arg3 ;
-(void)_updateCompletionBlock:(/*^block*/id)arg1 forPrefetchCacheKey:(id)arg2 ;
-(void)openReactionWithPlaceTipState:(id)arg1 navigationCoordinator:(id)arg2 clearCache:(BOOL)arg3 referrer:(id)arg4 ;
-(void)prefetchReactionWithTriggerInputTriggerData:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)prefetchReactionWithNeighborhoodInputNeighborhoodTriggerData:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)cacheKeyMap;
-(void)setCacheKeyMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)timerMap;
-(void)setTimerMap:(NSMutableDictionary *)arg1 ;
-(id)_init;
-(id<FBReactionCoordinatorHandler>)handler;
-(void)setHandler:(id<FBReactionCoordinatorHandler>)arg1 ;
@end

