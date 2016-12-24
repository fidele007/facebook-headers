/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGraphQLConnectionStoreListener.h>
#import <Facebook/FBGraphQLConnectionControllerListener.h>

@protocol FBGraphQLConnectionInterface;
@class FBUserSession, FBFriendingPossibilitiesCountListenerAnnouncer, FBFriendingPossibilitiesEdgesListenerAnnouncer, NSError, NSDate, NSArray, NSString;

@interface FBFriendingPossibilitiesDataSource : NSObject <FBGraphQLConnectionStoreListener, FBGraphQLConnectionControllerListener> {

	FBUserSession* _session;
	id<FBGraphQLConnectionInterface> _friendingConnection;
	FBFriendingPossibilitiesCountListenerAnnouncer* _countAnnouncer;
	FBFriendingPossibilitiesEdgesListenerAnnouncer* _edgesAnnouncer;
	long long _loadType;
	long long _previousLoadType;
	BOOL _edgesInsertedForPendingLoad;
	NSError* _errorInPendingLoad;
	long long _totalCount;
	long long _unseenCount;
	NSDate* _timestamp;

}

@property (nonatomic,readonly) BOOL enabled; 
@property (nonatomic,copy,readonly) NSDate * timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL edgesInsertedForPendingLoad;                 //@synthesize edgesInsertedForPendingLoad=_edgesInsertedForPendingLoad - In the implementation block
@property (nonatomic,readonly) long long loadType;                               //@synthesize loadType=_loadType - In the implementation block
@property (nonatomic,copy) NSError * errorInPendingLoad;                         //@synthesize errorInPendingLoad=_errorInPendingLoad - In the implementation block
@property (nonatomic,readonly) long long totalCount;                             //@synthesize totalCount=_totalCount - In the implementation block
@property (nonatomic,readonly) long long unseenCount;                            //@synthesize unseenCount=_unseenCount - In the implementation block
@property (nonatomic,copy,readonly) NSArray * fetchedObjects; 
@property (nonatomic,copy,readonly) NSArray * fetchedActiveObjects; 
@property (nonatomic,copy,readonly) NSArray * allFetchedMemPersons; 
@property (nonatomic,readonly) BOOL hasMoreObjects; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeEdgesListener:(id)arg1 ;
-(void)addEdgesListener:(id)arg1 ;
-(void)markAllUnseenAsUnread;
-(void)markAllSeenAsRead;
-(BOOL)hasMoreObjects;
-(NSArray *)allFetchedMemPersons;
-(void)addCountListener:(id)arg1 ;
-(void)removeCountListener:(id)arg1 ;
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
-(long long)unseenCount;
-(NSArray *)fetchedActiveObjects;
-(void)_graphQLConnection:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4 ;
-(unsigned long long)invalidatedEdgesCount;
-(unsigned long long)invalidatedHiddenEdgesCount;
-(void)didFinishLoading;
-(void)_graphQLConnection:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingChunkAtIndex:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)_graphQLConnection:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingChunksAtIndexes:(id)arg3 userInfo:(id)arg4 ;
-(void)_graphQLConnection:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)_graphQLConnection:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingEdgesAtIndexPaths:(id)arg3 ;
-(id)initWithSession:(id)arg1 friendingPossibilitiesConnection:(id)arg2 ;
-(void)processConnectionStoreInitialEdges;
-(void)enableWithConnectionStore:(id)arg1 ;
-(void)setErrorInPendingLoad:(NSError *)arg1 ;
-(BOOL)edgesInsertedForPendingLoad;
-(void)didStartLoadingForType:(long long)arg1 ;
-(void)updateTotalCount:(long long)arg1 unseenCount:(long long)arg2 andTimestamp:(id)arg3 ;
-(void)_loadingFinishedWithEdges:(id)arg1 andEventType:(long long)arg2 ;
-(void)_markAllUseenAsSeen;
-(BOOL)_isEdgeActive:(id)arg1 ;
-(NSError *)errorInPendingLoad;
-(BOOL)enabled;
-(NSDate *)timestamp;
-(long long)loadType;
-(NSArray *)fetchedObjects;
-(long long)totalCount;
@end

