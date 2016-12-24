/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBIntentHandler, FBNavigationCoordinator;
@class FBScenePath, FBUserSession;

@interface FBFriendingToolbox : NSObject {

	BOOL _shouldShowUnreadSnippet;
	FBScenePath* _scenePath;
	id<FBIntentHandler> _intentHandler;
	FBUserSession* _session;
	id<FBNavigationCoordinator> _navigationCoordinator;

}

@property (nonatomic,copy,readonly) FBScenePath * scenePath;                                   //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,readonly) id<FBIntentHandler> intentHandler;                              //@synthesize intentHandler=_intentHandler - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                        //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) id<FBNavigationCoordinator> navigationCoordinator;              //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowUnreadSnippet;                                   //@synthesize shouldShowUnreadSnippet=_shouldShowUnreadSnippet - In the implementation block
+(id)toolboxWithSession:(id)arg1 scenePath:(id)arg2 intentHandler:(id)arg3 navigationCoordinator:(id)arg4 ;
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(id<FBIntentHandler>)intentHandler;
-(FBScenePath *)scenePath;
-(BOOL)shouldShowUnreadSnippet;
-(id)initWithSession:(id)arg1 scenePath:(id)arg2 intentHandler:(id)arg3 navigationCoordinator:(id)arg4 ;
-(FBUserSession *)session;
@end

