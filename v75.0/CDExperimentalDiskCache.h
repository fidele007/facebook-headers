/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDExperimentalDiskCache <NSObject>
@required
-(void)fetchCachedDataOnDiskForKey:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(void)cacheData:(id)arg1 toDiskForKey:(id)arg2 options:(unsigned long long)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5;
-(void)fetch:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(void)store:(id)arg1 key:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4;
-(void)storeForKey:(id)arg1 writeBlock:(/*^block*/id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4;
-(void)removeItemForKey:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(id)dataForKey:(id)arg1 modificationDate:(id*)arg2;
-(id)getAllKeys;
-(void)fetch:(id)arg1 readBlock:(/*^block*/id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4;
-(void)updateLastAccessDateForKey:(id)arg1;
-(void)fetch:(id)arg1 tag:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4;
-(void)fetchFirstCachedDataOnDiskForKeys:(id)arg1 tag:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4;
-(void)fetchCachedDataOnDiskForKey:(id)arg1 tag:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4;
-(void)fetch:(id)arg1 tag:(id)arg2 readBlock:(/*^block*/id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5;
-(void)updateLastAccessDateForKey:(id)arg1 tag:(id)arg2;
-(void)store:(id)arg1 key:(id)arg2;
-(void)clear:(/*^block*/id)arg1;

@end

