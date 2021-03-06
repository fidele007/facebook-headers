/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLConnectionStoreListener.h>

@class FBGraphQLConsistentLookasideCache, NSMapTable, FBGraphQLConnectionStoreUpdate, FBGraphQLConnectionStore, NSString;

@interface FBGraphQLConnectionStoreUpdateCoordinator : NSObject <FBGraphQLConnectionStoreListener> {

	FBGraphQLConsistentLookasideCache* _lookasideCache;
	NSMapTable* _handlesToEdges;
	NSMapTable* _edgesToHandles;
	FBGraphQLConnectionStoreUpdate* _inProgressUpdate;
	map<FBConsistentLookasideCacheObservationHandle *, FBMemModelObject *, std::__1::less<FBConsistentLookasideCacheObservationHandle *>, std::__1::allocator<std::__1::pair<FBConsistentLookasideCacheObservationHandle *const, FBMemModelObject *> > >* _coalescingUpdates;
	shared_ptr<facebook::mobile::graphstore::TreeShape::Resolver>* _resolver;
	FBGraphQLConnectionStore* _store;

}

@property (nonatomic,__weak,readonly) FBGraphQLConnectionStore * store;              //@synthesize store=_store - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)graphQLConnectionStoreDidFinishAttemptingToRestoreFirstPersistedPage:(id)arg1 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingChunkAtIndex:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingChunksAtIndexes:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byMergingChunkAtIndexWithPrecedingChunk:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingLocations:(id)arg3 userInfo:(id)arg4 ;
-(void)_didReceiveUpdatedEdge:(id)arg1 forHandle:(id)arg2 ;
-(id)initWithStore:(id)arg1 consistentLookasideCache:(id)arg2 treeShape:(shared_ptr<facebook::mobile::graphstore::TreeShape::Resolver>*)arg3 ;
-(void)_processCoalescingUpdatedEdgesIfNeeded;
-(void)_startObservingNewEdges:(id)arg1 ;
-(void)_stopObservingOldEdges:(id)arg1 ;
-(void)_mungeMapsForUpdate:(id)arg1 ;
-(FBGraphQLConnectionStore *)store;
@end

