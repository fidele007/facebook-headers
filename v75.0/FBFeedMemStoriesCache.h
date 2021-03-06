/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGraphQLConnectionStoreListener.h>
#import <Facebook/FBGraphQLConnectionControllerListener.h>
#import <Facebook/FBFeedGraphQLConnectionManagerListener.h>

@class FBCache, NSString;

@interface FBFeedMemStoriesCache : NSObject <FBGraphQLConnectionStoreListener, FBGraphQLConnectionControllerListener, FBFeedGraphQLConnectionManagerListener> {

	FBCache* _graphQLIDToStoryInfoStorage;
	unsigned long long _capacity;

}

@property (nonatomic,readonly) unsigned long long currentSize; 
@property (nonatomic,readonly) unsigned long long capacity;                 //@synthesize capacity=_capacity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_storyByRemovingTrackingDataFromStory:(id)arg1 ;
-(void)graphQLConnectionControllerDidFinishAttemptingToRestoreFirstPersistedPage:(id)arg1 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingChunkAtIndex:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingChunksAtIndexes:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byMergingChunkAtIndexWithPrecedingChunk:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingLocations:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStoreDidFinishAttemptingToRestoreFirstPersistedPage:(id)arg1 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingChunkAtIndex:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingChunksAtIndexes:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byMergingChunkAtIndexWithPrecedingChunk:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingLocations:(id)arg3 userInfo:(id)arg4 ;
-(void)removeStoriesWithGraphQLIDs:(id)arg1 ;
-(BOOL)isStoryCachedForGraphQLID:(id)arg1 isStale:(BOOL*)arg2 ;
-(void)addStories:(id)arg1 ;
-(void)addStories:(id)arg1 secondsBeforeStale:(unsigned long long)arg2 ;
-(void)feedGraphQLConnectionManager:(id)arg1 didCreateConnection:(id)arg2 forConnectionInfo:(id)arg3 ;
-(void)feedGraphQLConnectionManagerDidRemoveConnectionForConnectionInfo:(id)arg1 connectionStoreState:(id)arg2 ;
-(id)storyForGraphQLID:(id)arg1 isStale:(BOOL*)arg2 ;
-(void)removeStories:(id)arg1 ;
-(id)_setUpStorageWithCapacity:(unsigned long long)arg1 ;
-(void)_addStoryToCache:(id)arg1 secondsBeforeStale:(unsigned long long)arg2 ;
-(id)_cacheInfoForGraphQLID:(id)arg1 ;
-(void)_removeStoryFromCache:(id)arg1 ;
-(void)_addStoriesToCacheFromEdges:(id)arg1 ;
-(void)_addStoryToCache:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)currentSize;
-(unsigned long long)capacity;
@end

