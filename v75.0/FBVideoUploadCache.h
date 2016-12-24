/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBKeyValueObjectStore;
@class NSMutableDictionary, NSMutableArray;

@interface FBVideoUploadCache : NSObject {

	id<FBKeyValueObjectStore> _store;
	NSMutableDictionary* _allCachedStates;
	BOOL _hasSynced;
	BOOL _isLoading;
	NSMutableArray* _completionBlocks;

}
-(void)_successfullyLoadedObject:(id)arg1 ;
-(void)_failedToLoadStoredObject;
-(id)initWithKeyValueObjectStore:(id)arg1 ;
-(void)removeVideoUploadState:(id)arg1 ;
-(id)getVideoUploadStateForComposerId:(id)arg1 assetId:(id)arg2 ;
-(void)loadAllVideoUploadStatesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)saveVideoUploadState:(id)arg1 ;
-(void)_storeState;
-(void)_removeVideoUploadStateForComposerId:(id)arg1 assetId:(id)arg2 ;
-(void)_attemptedToLoadNonExistentStoredObject;
-(void)_didFinishLoading;
-(void)_addCompletionBlock:(/*^block*/id)arg1 ;
@end

