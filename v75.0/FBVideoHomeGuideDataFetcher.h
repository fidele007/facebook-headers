/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBReactionGraphQLConnectionDataFetcherDelegate.h>

@class NSArray, FBReactionGraphQLConnectionDataFetcher, FBVideoHomeGuideGQLCCFactory, FBVideoHomeGuideDataFetcherListenerAnnouncer, FBGraphQLConnectionController, NSDate;

@interface FBVideoHomeGuideDataFetcher : NSObject <FBReactionGraphQLConnectionDataFetcherDelegate> {

	NSArray* _clientCapabilities;
	FBReactionGraphQLConnectionDataFetcher* _reactionDataFetcher;
	FBVideoHomeGuideGQLCCFactory* _gqlccFactory;
	FBVideoHomeGuideDataFetcherListenerAnnouncer* _announcer;
	FBGraphQLConnectionController* _gqlcc;
	BOOL _isReloading;
	BOOL _dataDirty;
	unsigned long long _requestType;
	NSDate* _lastHeadLoadDate;
	NSDate* _lastTailLoadDate;

}
-(id)buildDebugInfo;
-(BOOL)canLoadTail;
-(double)timeSinceLastHeadLoad;
-(void)_initializeReactionDataFetcherWithCapabilities:(id)arg1 ;
-(void)_loadClientCapabilitiesWithCompletionCallback:(/*^block*/id)arg1 ;
-(BOOL)canLoadHead;
-(BOOL)hasAnotherPage;
-(void)loadHead;
-(BOOL)_isLoadingHead;
-(BOOL)_isLoadingTail;
-(void)_updateTimestampsWithLoadTypes:(unsigned long long)arg1 ;
-(void)reactionDataFetcher:(id)arg1 didLoadUnits:(id)arg2 loadType:(unsigned long long)arg3 ;
-(void)emptyResultSetForReactionDataFetcher:(id)arg1 forLoadType:(unsigned long long)arg2 ;
-(void)reactionDataFetcher:(id)arg1 loadType:(unsigned long long)arg2 experiencedError:(id)arg3 ;
-(id)graphQLConnectionControllerUserInputForReactionDataFetcher:(id)arg1 ;
-(id)initWithGQLCCFactory:(id)arg1 ;
-(void)reloadWithLimit:(unsigned long long)arg1 requestType:(unsigned long long)arg2 ;
-(void)loadTailWithLimit:(unsigned long long)arg1 requestType:(unsigned long long)arg2 ;
-(id)loadedUnits;
-(BOOL)isReloading;
-(void)clearAllDataAndRequests;
-(BOOL)isDataDirty;
-(void)markDataDirtyWithReason:(id)arg1 ;
-(double)timeSinceLastTailLoad;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

