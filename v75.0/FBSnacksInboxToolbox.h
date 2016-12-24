/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNavigationCoordinator, FBIntentHandler, FBDirectInboxSessionManager;
@class FBUserSession, FBVideoToolbox;

@interface FBSnacksInboxToolbox : NSObject {

	FBUserSession* _session;
	FBVideoToolbox* _videoToolbox;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBIntentHandler> _intentHandler;
	id<FBDirectInboxSessionManager> _sessionManager;

}

@property (nonatomic,readonly) FBUserSession * session;                                               //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBVideoToolbox * videoToolbox;                                         //@synthesize videoToolbox=_videoToolbox - In the implementation block
@property (nonatomic,__weak,readonly) id<FBNavigationCoordinator> navigationCoordinator;              //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,__weak,readonly) id<FBIntentHandler> intentHandler;                              //@synthesize intentHandler=_intentHandler - In the implementation block
@property (nonatomic,__weak,readonly) id<FBDirectInboxSessionManager> sessionManager;                 //@synthesize sessionManager=_sessionManager - In the implementation block
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(id<FBIntentHandler>)intentHandler;
-(FBVideoToolbox *)videoToolbox;
-(id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 intentHandler:(id)arg3 sessionManager:(id)arg4 ;
-(id<FBDirectInboxSessionManager>)sessionManager;
-(FBUserSession *)session;
@end

