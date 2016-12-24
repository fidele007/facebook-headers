/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBModalContainerViewControllerDelegate.h>
#import <Facebook/FBIntentHandler.h>

@protocol FBNavigationCoordinator, FBIntentHandler;
@class FBUserSession, NSString;

@interface FBTarotChainedDigestsIntentHandler : NSObject <FBModalContainerViewControllerDelegate, FBIntentHandler> {

	FBUserSession* _session;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBIntentHandler> _rootIntentHandler;

}

@property (nonatomic,readonly) FBUserSession * session;                                               //@synthesize session=_session - In the implementation block
@property (nonatomic,__weak,readonly) id<FBNavigationCoordinator> navigationCoordinator;              //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,readonly) id<FBIntentHandler> rootIntentHandler;                                 //@synthesize rootIntentHandler=_rootIntentHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)intentHandlerWithSession:(id)arg1 navigationCoordinator:(id)arg2 rootIntentHandler:(id)arg3 ;
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(void)handleIntent:(id)arg1 ;
-(id<FBIntentHandler>)rootIntentHandler;
-(void)dismissModalContainerViewController:(id)arg1 ;
-(id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 rootIntentHandler:(id)arg3 ;
-(FBUserSession *)session;
@end
