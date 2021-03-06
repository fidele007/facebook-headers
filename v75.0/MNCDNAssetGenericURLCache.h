/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNCDNURLExpirationEvaluating;
@class FBCache, FBDiskCache, FBAnalytics;

@interface MNCDNAssetGenericURLCache : NSObject {

	FBCache* _urlCache;
	FBDiskCache* _urlDiskCache;
	id<MNCDNURLExpirationEvaluating> _expirationEvaluator;
	FBAnalytics* _analytics;

}
-(id)getAllKeys;
-(void)_diskCacheDidFetchData:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithCache:(id)arg1 diskCache:(id)arg2 expirationEvaluator:(id)arg3 analytics:(id)arg4 ;
-(void)cacheUrl:(id)arg1 forKey:(id)arg2 ;
-(void)fetchCachedUrlForKey:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)invalidateUrlForKey:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_cacheUrlToMemoryCache:(id)arg1 forKey:(id)arg2 ;
@end

