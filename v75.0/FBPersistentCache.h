/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSString, FBCache, NSObject;

@interface FBPersistentCache : NSObject {

	NSString* _persistedCacheFilePath;
	FBCache* _cache;
	NSObject*<OS_dispatch_queue> _persistenceQueue;
	NSObject*<OS_dispatch_source> _timer;
	BOOL _scheduledWriteToDisk;
	long long _persistenceInterval;

}

@property (assign,nonatomic) long long persistenceInterval;                 //@synthesize persistenceInterval=_persistenceInterval - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumCost; 
-(void)setObject:(id)arg1 forKey:(id)arg2 withCost:(unsigned long long)arg3 ;
-(id)initWithFilePath:(id)arg1 maximumCacheCost:(unsigned long long)arg2 cacheStrategy:(unsigned long long)arg3 options:(id)arg4 ;
-(unsigned long long)maximumCost;
-(void)_writeToDisk;
-(void)clearPersistedDataAndDisablePersistence;
-(void)setPersistenceInterval:(long long)arg1 ;
-(void)_scheduleWriteToDisk;
-(void)_writeDictionaryToDisk:(id)arg1 ;
-(long long)persistenceInterval;
-(void)dealloc;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allKeys;
@end

