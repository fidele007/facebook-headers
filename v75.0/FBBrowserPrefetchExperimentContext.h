/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@class NSString;

@interface FBBrowserPrefetchExperimentContext : FBExperimentContext {

	BOOL _useFbNetworker;
	BOOL _useAcceptHeader;
	BOOL _prefetchOnWifiOnly;
	long long _newMaxTimeCacheUseOnceInSeconds;
	NSString* _blacklistUrls;
	BOOL _prefetchOnVideoShare;
	BOOL _blacklistAds;
	BOOL _usePrefetchedRequests;
	BOOL _prefetchOnShareAttachments;
	BOOL _prefetchOnOtherUrl;
	BOOL _useVpv;
	long long _maxTimeCacheUseOnceInSeconds;

}

@property (assign,nonatomic) BOOL useFbNetworker;                                    //@synthesize useFbNetworker=_useFbNetworker - In the implementation block
@property (assign,nonatomic) BOOL useAcceptHeader;                                   //@synthesize useAcceptHeader=_useAcceptHeader - In the implementation block
@property (assign,nonatomic) BOOL prefetchOnWifiOnly;                                //@synthesize prefetchOnWifiOnly=_prefetchOnWifiOnly - In the implementation block
@property (assign,nonatomic) long long newMaxTimeCacheUseOnceInSeconds;              //@synthesize newMaxTimeCacheUseOnceInSeconds=_newMaxTimeCacheUseOnceInSeconds - In the implementation block
@property (nonatomic,copy) NSString * blacklistUrls;                                 //@synthesize blacklistUrls=_blacklistUrls - In the implementation block
@property (assign,nonatomic) BOOL prefetchOnVideoShare;                              //@synthesize prefetchOnVideoShare=_prefetchOnVideoShare - In the implementation block
@property (assign,nonatomic) BOOL blacklistAds;                                      //@synthesize blacklistAds=_blacklistAds - In the implementation block
@property (assign,nonatomic) BOOL usePrefetchedRequests;                             //@synthesize usePrefetchedRequests=_usePrefetchedRequests - In the implementation block
@property (assign,nonatomic) BOOL prefetchOnShareAttachments;                        //@synthesize prefetchOnShareAttachments=_prefetchOnShareAttachments - In the implementation block
@property (assign,nonatomic) BOOL prefetchOnOtherUrl;                                //@synthesize prefetchOnOtherUrl=_prefetchOnOtherUrl - In the implementation block
@property (assign,nonatomic) BOOL useVpv;                                            //@synthesize useVpv=_useVpv - In the implementation block
@property (assign,nonatomic) long long maxTimeCacheUseOnceInSeconds;                 //@synthesize maxTimeCacheUseOnceInSeconds=_maxTimeCacheUseOnceInSeconds - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)blacklistAds;
-(NSString *)blacklistUrls;
-(long long)maxTimeCacheUseOnceInSeconds;
-(long long)newMaxTimeCacheUseOnceInSeconds;
-(BOOL)prefetchOnOtherUrl;
-(BOOL)prefetchOnShareAttachments;
-(BOOL)prefetchOnVideoShare;
-(BOOL)prefetchOnWifiOnly;
-(BOOL)useAcceptHeader;
-(BOOL)useFbNetworker;
-(BOOL)usePrefetchedRequests;
-(BOOL)useVpv;
-(void)setUseFbNetworker:(BOOL)arg1 ;
-(void)setUseAcceptHeader:(BOOL)arg1 ;
-(void)setPrefetchOnWifiOnly:(BOOL)arg1 ;
-(void)setNewMaxTimeCacheUseOnceInSeconds:(long long)arg1 ;
-(void)setBlacklistUrls:(NSString *)arg1 ;
-(void)setPrefetchOnVideoShare:(BOOL)arg1 ;
-(void)setBlacklistAds:(BOOL)arg1 ;
-(void)setUsePrefetchedRequests:(BOOL)arg1 ;
-(void)setPrefetchOnShareAttachments:(BOOL)arg1 ;
-(void)setPrefetchOnOtherUrl:(BOOL)arg1 ;
-(void)setUseVpv:(BOOL)arg1 ;
-(void)setMaxTimeCacheUseOnceInSeconds:(long long)arg1 ;
@end

