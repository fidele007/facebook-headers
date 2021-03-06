/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNavigationCoordinator, FBVideoInsightViewDismissing, FBComponentContextConfiguration;
@class FBUserSession, NSString, FBScenePath, FBVideoInsightsEventListenerAnnouncer;

@interface FBVideoInsightToolbox : NSObject {

	FBUserSession* _session;
	NSString* _analyticsModule;
	FBScenePath* _scenePath;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBVideoInsightViewDismissing> _dismisser;
	id<FBComponentContextConfiguration> _componentContext;
	FBVideoInsightsEventListenerAnnouncer* _eventAnnouncer;

}

@property (nonatomic,readonly) FBUserSession * session;                                                //@synthesize session=_session - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsModule;                                        //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,readonly) FBScenePath * scenePath;                                                //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,readonly) id<FBNavigationCoordinator> navigationCoordinator;                      //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,__weak,readonly) id<FBVideoInsightViewDismissing> dismisser;                      //@synthesize dismisser=_dismisser - In the implementation block
@property (assign,nonatomic,__weak) id<FBComponentContextConfiguration> componentContext;              //@synthesize componentContext=_componentContext - In the implementation block
@property (nonatomic,readonly) FBVideoInsightsEventListenerAnnouncer * eventAnnouncer;                 //@synthesize eventAnnouncer=_eventAnnouncer - In the implementation block
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(FBScenePath *)scenePath;
-(NSString *)analyticsModule;
-(id<FBComponentContextConfiguration>)componentContext;
-(void)setComponentContext:(id<FBComponentContextConfiguration>)arg1 ;
-(FBVideoInsightsEventListenerAnnouncer *)eventAnnouncer;
-(id<FBVideoInsightViewDismissing>)dismisser;
-(id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 analyticsModule:(id)arg3 scenePath:(id)arg4 dismisser:(id)arg5 ;
-(FBUserSession *)session;
@end

