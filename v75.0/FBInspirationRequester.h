/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBScenePathHolding.h>

@protocol FBKeyValueObjectStore, OS_dispatch_queue;
@class FBUserSession, FBScenePath, NSObject, NSString;

@interface FBInspirationRequester : NSObject <FBScenePathHolding> {

	FBUserSession* _session;
	unsigned long long _numberOfEffectMetadataToFetch;
	FBScenePath* _scenePath;
	id<FBKeyValueObjectStore> _store;
	NSObject*<OS_dispatch_queue> _assetsMetadataDownloadQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleGraphQLResponse:(id)arg1 error:(id)arg2 downloadOnly:(BOOL)arg3 isFromCache:(BOOL)arg4 callbackQueue:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)_fetchInspirationsViaNetworkRequestWithIsCached:(BOOL)arg1 freshResponseOnly:(BOOL)arg2 callbackQueue:(id)arg3 location:(id)arg4 offlineEffects:(BOOL)arg5 cacheDuration:(unsigned long long)arg6 cacheKey:(id)arg7 completion:(/*^block*/id)arg8 ;
-(void)_storeGraphQLResponse:(id)arg1 cacheKey:(id)arg2 ;
-(id)initWithSession:(id)arg1 numberOfEffectsToFetch:(long long)arg2 ;
-(void)fetchInspirationsWithCallbackQueue:(id)arg1 offlineEffects:(BOOL)arg2 cacheKey:(id)arg3 cacheDuration:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
@end

