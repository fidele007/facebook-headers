/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBScenePathProviding, FBPolling, FBStreamLoadBackgrounder;
#import <Facebook/Facebook-Structs.h>
@class FBUserSession, NSString, FBStreamAnalytics, NSNotificationCenter, FBStreamListenerAnnouncer;

@interface FBStreamConfiguration : NSObject {

	BOOL _shouldRefetchPagingInfoOnEnable;
	BOOL _dispatchOffMain;
	FBUserSession* _userSession;
	NSString* _graphQLRequestTargetID;
	id<FBScenePathProviding> _scenePathProvider;
	FBStreamAnalytics* _streamAnalytics;
	id<FBPolling> _pollingSource;
	NSNotificationCenter* _notificationCenter;
	id<FBStreamLoadBackgrounder> _backgrounder;
	FBStreamListenerAnnouncer* _streamListenerAnnouncer;
	NSString* _actorFBID;
	/*^block*/id _graphQLRequestBuilder;
	/*^block*/id _responseHandlerBuilder;
	/*^block*/id _pagingInfoBuilder;
	ProcessPMCpuStat _fetchLimit;

}

@property (nonatomic,copy) id graphQLRequestBuilder;                                             //@synthesize graphQLRequestBuilder=_graphQLRequestBuilder - In the implementation block
@property (nonatomic,copy) id responseHandlerBuilder;                                            //@synthesize responseHandlerBuilder=_responseHandlerBuilder - In the implementation block
@property (nonatomic,copy) id pagingInfoBuilder;                                                 //@synthesize pagingInfoBuilder=_pagingInfoBuilder - In the implementation block
@property (nonatomic,readonly) FBUserSession * userSession;                                      //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,copy,readonly) NSString * graphQLRequestTargetID;                           //@synthesize graphQLRequestTargetID=_graphQLRequestTargetID - In the implementation block
@property (nonatomic,readonly) id<FBScenePathProviding> scenePathProvider;                       //@synthesize scenePathProvider=_scenePathProvider - In the implementation block
@property (nonatomic,copy,readonly) FBStreamAnalytics * streamAnalytics;                         //@synthesize streamAnalytics=_streamAnalytics - In the implementation block
@property (nonatomic,readonly) id<FBPolling> pollingSource;                                      //@synthesize pollingSource=_pollingSource - In the implementation block
@property (nonatomic,readonly) ProcessPMCpuStat fetchLimit;                                      //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (nonatomic,readonly) BOOL shouldRefetchPagingInfoOnEnable;                             //@synthesize shouldRefetchPagingInfoOnEnable=_shouldRefetchPagingInfoOnEnable - In the implementation block
@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;                        //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,readonly) id<FBStreamLoadBackgrounder> backgrounder;                        //@synthesize backgrounder=_backgrounder - In the implementation block
@property (nonatomic,readonly) FBStreamListenerAnnouncer * streamListenerAnnouncer;              //@synthesize streamListenerAnnouncer=_streamListenerAnnouncer - In the implementation block
@property (nonatomic,copy) NSString * actorFBID;                                                 //@synthesize actorFBID=_actorFBID - In the implementation block
@property (nonatomic,readonly) BOOL dispatchOffMain;                                             //@synthesize dispatchOffMain=_dispatchOffMain - In the implementation block
+(id)configuration:(/*^block*/id)arg1 ;
-(void)setActorFBID:(NSString *)arg1 ;
-(NSString *)actorFBID;
-(NSString *)graphQLRequestTargetID;
-(FBStreamAnalytics *)streamAnalytics;
-(void)setGraphQLRequestBuilder:(id)arg1 ;
-(void)setPagingInfoBuilder:(id)arg1 ;
-(id<FBScenePathProviding>)scenePathProvider;
-(id)initWithBuilderBlock:(/*^block*/id)arg1 ;
-(void)_setAttributesWithBuilder:(id)arg1 ;
-(void)_warnIfNecessaryAttributesAreInvalid;
-(id)responseHandlerBuilder;
-(void)setResponseHandlerBuilder:(id)arg1 ;
-(id<FBPolling>)pollingSource;
-(BOOL)shouldRefetchPagingInfoOnEnable;
-(id<FBStreamLoadBackgrounder>)backgrounder;
-(FBStreamListenerAnnouncer *)streamListenerAnnouncer;
-(id)graphQLRequestBuilder;
-(id)pagingInfoBuilder;
-(BOOL)dispatchOffMain;
-(id)streamPagingInfoWithPreviousPagingInfo:(id)arg1 ;
-(id)graphQLDownloadRequestWithLoadType:(unsigned long long)arg1 refreshMode:(id)arg2 cursor:(id)arg3 includeRecentVPVds:(BOOL)arg4 includeBatteryInfo:(BOOL)arg5 includeCachedLocation:(BOOL)arg6 ;
-(id)streamResponseHandlerWithLoadType:(unsigned long long)arg1 beforeCursor:(id)arg2 afterCursor:(id)arg3 debugContextFactory:(/*^block*/id)arg4 ;
-(FBUserSession *)userSession;
-(ProcessPMCpuStat)fetchLimit;
-(NSNotificationCenter *)notificationCenter;
@end

