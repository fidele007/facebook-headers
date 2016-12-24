/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSearchCombinedResultsEdgeBufferDelegate.h>
#import <Facebook/FBGraphQLConnectionStoreListener.h>

@protocol FBGraphSearchBufferedConnectionStoreListenerDelegate;
@class FBSearchCombinedResultsEdgeBuffer, NSString;

@interface FBGraphSearchBufferedConnectionStoreListener : NSObject <FBSearchCombinedResultsEdgeBufferDelegate, FBGraphQLConnectionStoreListener> {

	FBSearchCombinedResultsEdgeBuffer* _buffer;
	BOOL _useBufferForHeadLoads;
	id<FBGraphSearchBufferedConnectionStoreListenerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBGraphSearchBufferedConnectionStoreListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL useBufferForHeadLoads;                                                            //@synthesize useBufferForHeadLoads=_useBufferForHeadLoads - In the implementation block
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
-(void)_processEdgesFromStoreState:(id)arg1 indexPathToEdgesMap:(id)arg2 userInfo:(id)arg3 ;
-(void)combinedResultsEdgeBuffer:(id)arg1 didPopEdge:(id)arg2 ;
-(id)initWithConnectionStore:(id)arg1 bufferInterval:(double)arg2 ;
-(BOOL)useBufferForHeadLoads;
-(void)setUseBufferForHeadLoads:(BOOL)arg1 ;
-(void)setDelegate:(id<FBGraphSearchBufferedConnectionStoreListenerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBGraphSearchBufferedConnectionStoreListenerDelegate>)delegate;
@end
