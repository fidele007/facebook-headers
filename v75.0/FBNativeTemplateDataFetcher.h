/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNativeTemplateDataFetcherListener;
@class FBUserSession;

@interface FBNativeTemplateDataFetcher : NSObject {

	FBUserSession* _session;
	BOOL _didGetNetworkData;
	id<FBNativeTemplateDataFetcherListener> _listener;

}

@property (assign,nonatomic,__weak) id<FBNativeTemplateDataFetcherListener> listener;              //@synthesize listener=_listener - In the implementation block
-(id)initWithSession:(id)arg1 exampleID:(id)arg2 allowCachedData:(BOOL)arg3 enableCachedTemplates:(BOOL)arg4 ;
-(void)_didGetCachedData:(id)arg1 ;
-(void)_sendCallbackForVCConfig:(id)arg1 forSource:(unsigned long long)arg2 ;
-(id<FBNativeTemplateDataFetcherListener>)listener;
-(void)setListener:(id<FBNativeTemplateDataFetcherListener>)arg1 ;
@end

