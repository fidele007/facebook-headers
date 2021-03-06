/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBProfileWizardToolbox.h>
@class FBUserSession, FBScenePath, FBFeedToolboxManager;


@protocol FBProfileWizardToolbox <NSObject>
@property (nonatomic,readonly) FBUserSession * session; 
@property (nonatomic,readonly) id<FBNavigationCoordinator> navigationCoordinator; 
@property (nonatomic,readonly) FBScenePath * scenePath; 
@property (nonatomic,copy,readonly) FBFeedToolboxManager * feedToolboxManager; 
@required
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(FBScenePath *)scenePath;
-(FBFeedToolboxManager *)feedToolboxManager;
-(FBUserSession *)session;

@end


@protocol FBNavigationCoordinator;
@class FBUserSession, FBScenePath, FBFeedToolboxManager, NSString;

@interface FBProfileWizardToolbox : NSObject <FBProfileWizardToolbox> {

	FBUserSession* _session;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBScenePath* _scenePath;
	FBFeedToolboxManager* _feedToolboxManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FBUserSession * session;                                        //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) id<FBNavigationCoordinator> navigationCoordinator;              //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,readonly) FBScenePath * scenePath;                                        //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,copy,readonly) FBFeedToolboxManager * feedToolboxManager;                 //@synthesize feedToolboxManager=_feedToolboxManager - In the implementation block
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(FBScenePath *)scenePath;
-(FBFeedToolboxManager *)feedToolboxManager;
-(id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 scenePath:(id)arg3 feedToolboxmanager:(id)arg4 ;
-(FBUserSession *)session;
@end

