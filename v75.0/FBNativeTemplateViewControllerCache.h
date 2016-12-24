/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class FBPersistentKeyValueStore, NSObject;

@interface FBNativeTemplateViewControllerCache : NSObject {

	FBPersistentKeyValueStore* _store;
	NSObject*<OS_dispatch_queue> _storeQueue;

}
-(void)fetchCachedDataForQuery:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)writeToCacheForViewController:(id)arg1 ;
-(id)allCachedPaths;
-(void)_processFetchedData:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_fireCompletionBlock:(/*^block*/id)arg1 withData:(id)arg2 ;
-(void)clearCache;
-(id)initWithSession:(id)arg1 ;
@end

