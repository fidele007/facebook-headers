/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGraphQLConnectionListener.h>

@protocol FBGraphQLConnectionInterface;
@class NSMutableIndexSet, FBGraphQLConnectionListenerAnnouncer, FBGraphQLConnectionInterfacesAdaptedSubsetAnnouncer, NSString;

@interface FBFeedGraphQLConnectionControllerAnnouncerFilter : NSObject <FBGraphQLConnectionListener> {

	id<FBGraphQLConnectionInterface> _connection;
	unsigned long long _hideFromIndex;
	BOOL _hasHiddenIndex;
	BOOL _hasEverHidden;
	NSMutableIndexSet* _visibleChunkIndexes;
	FBGraphQLConnectionListenerAnnouncer* _announcer;
	FBGraphQLConnectionInterfacesAdaptedSubsetAnnouncer* _connectionInterfacesAdaptedSubsetAnnouncer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hasHiddenIndex;
-(long long)hidingFromIndex;
-(void)hideChunksFromIndex:(long long)arg1 edgeLimit:(long long)arg2 ;
-(id)loadLocationAfterVisibleChunk:(long long)arg1 ;
-(void)graphQLConnectionDidFinishAttemptingToRestoreFirstPersistedPage:(id)arg1 ;
-(void)graphQLConnection:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingChunkAtIndex:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnection:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingChunksAtIndexes:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnection:(id)arg1 didModifyPreviousState:(id)arg2 byMergingChunkAtIndexWithPrecedingChunk:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnection:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnection:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4 ;
-(void)graphQLConnection:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnection:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingLocations:(id)arg3 userInfo:(id)arg4 ;
-(void)_visibleIndicesRemove:(id)arg1 ;
-(void)trimToHiddenEdgeLimit:(long long)arg1 ;
-(id)indexSetWithChunksFromIndex:(long long)arg1 ;
-(id)hiddenChunkIndices;
-(void)_deleteHiddenChunksFromIndex:(long long)arg1 ;
-(void)_visibleIndicesAdd:(id)arg1 ;
-(void)batchAnnounceInsertions:(id)arg1 batchSize:(long long)arg2 graphQLConnection:(id)arg3 previousState:(id)arg4 userInfo:(id)arg5 ;
-(id)connection;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
@end

