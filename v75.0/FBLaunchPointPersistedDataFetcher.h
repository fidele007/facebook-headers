/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGraphQLConnectionStoreListener.h>
#import <Facebook/FBReactionDataFetcherPersistDelegate.h>

@protocol FBReactionRequestSupportedStylesProtocol;
@class NSString, FBUserSession, FBReactionTriggerData, FBReactionDataFetcher, FBGraphQLConnectionStore;

@interface FBLaunchPointPersistedDataFetcher : NSObject <FBGraphQLConnectionStoreListener, FBReactionDataFetcherPersistDelegate> {

	NSString* _reactionSessionId;
	FBUserSession* _session;
	FBReactionTriggerData* _triggerData;
	FBReactionDataFetcher* _reactionDataFetcher;
	FBGraphQLConnectionStore* _connectionStore;
	NSString* _surface;
	id<FBReactionRequestSupportedStylesProtocol> _supportedStyles;

}

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
-(BOOL)shouldEarlyPersist;
-(void)persistGraphQLConnectionStoreState:(id)arg1 ;
-(unsigned long long)maxNumberOfEdgesToPersist;
-(id)dataFetcher;
-(void)_initPersistedDataStore;
-(id)initWithSession:(id)arg1 reactionSessionId:(id)arg2 triggerData:(id)arg3 surface:(id)arg4 supportedStyles:(id)arg5 ;
-(void)dealloc;
@end
