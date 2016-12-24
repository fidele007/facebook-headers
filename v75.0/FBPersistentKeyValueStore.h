/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBPersistentKeyValueStoreProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface FBPersistentKeyValueStore : NSObject <FBPersistentKeyValueStoreProtocol> {

	shared_ptr<facebook::mobile::xplat::compactdisk::PersistentKeyValueStore>* _pkvs;
	NSObject*<OS_dispatch_queue> _concurrentQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(void)fetch:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)store:(id)arg1 key:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)dataForKeyWithoutManifest:(id)arg1 ;
-(void)storeForKey:(id)arg1 writeBlock:(/*^block*/id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)removeItemForKey:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)dataForKey:(id)arg1 modificationDate:(id*)arg2 ;
-(id)getAllKeys;
-(id)getTemporaryDirectoryPath;
-(void)fetch:(id)arg1 version:(unsigned long long)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)store:(id)arg1 key:(id)arg2 version:(unsigned long long)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)store:(id)arg1 key:(id)arg2 extra:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)fetch:(id)arg1 readBlock:(/*^block*/id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)fetchFirst:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)updateLastAccessDateForKey:(id)arg1 ;
-(void)fetch:(id)arg1 tag:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)fetchModificationDate:(id)arg1 error:(id*)arg2 ;
-(void)fetch:(id)arg1 tag:(id)arg2 readBlock:(/*^block*/id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)updateLastAccessDateForKey:(id)arg1 tag:(id)arg2 ;
-(void)store:(id)arg1 key:(id)arg2 ;
-(id)_keyForKey:(id)arg1 version:(unsigned long long)arg2 ;
-(void)fetch:(id)arg1 tag:(id)arg2 version:(unsigned long long)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)fetch:(id)arg1 tag:(id)arg2 readBlock:(/*^block*/id)arg3 version:(unsigned long long)arg4 queue:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)fetchFirst:(id)arg1 tag:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)fetchFirst:(id)arg1 tag:(id)arg2 readBlock:(/*^block*/id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)dataForKey:(id)arg1 tag:(id)arg2 modificationDate:(id*)arg3 ;
-(void)storeForKey:(id)arg1 writeBlock:(/*^block*/id)arg2 version:(unsigned long long)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)fetch:(id)arg1 readBlock:(/*^block*/id)arg2 version:(unsigned long long)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)fetchFirst:(id)arg1 readBlock:(/*^block*/id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)removeItemForKey:(id)arg1 version:(unsigned long long)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)reverseMigrateFromCacheWithName:(id)arg1 oldScopeUUID:(id)arg2 oldVersionID:(id)arg3 ;
-(void)_callbackForStoreWithFuture:(future<void>*)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_callbackForFetchWithFuture:(future<std::__1::unique_ptr<facebook::mobile::xplat::compactdisk::PersistentKeyValueStore::FetchResult, std::__1::default_delete<facebook::mobile::xplat::compactdisk::PersistentKeyValueStore::FetchResult> > >*)arg1 key:(id)arg2 callbackQueue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)initWithStore:(shared_ptr<facebook::mobile::xplat::compactdisk::PersistentKeyValueStore>*)arg1 ;
-(void)invalidate;
-(BOOL)isValid;
-(void)clear:(/*^block*/id)arg1 ;
@end
