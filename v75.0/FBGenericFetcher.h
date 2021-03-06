/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating;
@class FBUserSession;

@interface FBGenericFetcher : NSObject {

	FBUserSession* _session;
	id<FBServiceTransactionMutating> _requestToken;
	BOOL _shouldAllowQueryCaching;
	long long _cacheThresholdInSeconds;
	BOOL _isFetching;

}

@property (nonatomic,readonly) BOOL isFetching;              //@synthesize isFetching=_isFetching - In the implementation block
-(id)initWithSession:(id)arg1 shouldAllowQueryCaching:(BOOL)arg2 cacheThresholdInSeconds:(long long)arg3 ;
-(void)fetchWithQuery:(id)arg1 requestPriority:(long long)arg2 callbackQueue:(id)arg3 successBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 ;
-(void)_handleSuccessWithSuccessBlock:(/*^block*/id)arg1 responseObject:(id)arg2 ;
-(void)_handleFailureWithFailureBlock:(/*^block*/id)arg1 error:(id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(BOOL)isFetching;
@end

