/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGroupsCollegeCommunitiesOnboardingFlowCoordinatorDelegate.h>

@protocol FBNavigationCoordinator;
@class FBGroupFeedActionHandler, FBMemGroup, FBUserSession, NSArray, FBGroupsCollegeCommunitiesOnboardingFlowDataListenerAnnouncer, NSString;

@interface FBGroupsCollegeCommunitiesOnboardingFlowCoordinator : NSObject <FBGroupsCollegeCommunitiesOnboardingFlowCoordinatorDelegate> {

	FBGroupFeedActionHandler* _actionHandler;
	FBMemGroup* _group;
	FBUserSession* _session;
	id<FBNavigationCoordinator> _navigationCoordinator;
	NSArray* _nuxViewControllers;
	unsigned long long _onboardingFlowMode;
	FBGroupsCollegeCommunitiesOnboardingFlowDataListenerAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithGroup:(id)arg1 session:(id)arg2 actionHandler:(id)arg3 navigationCoordinator:(id)arg4 ;
-(void)presentOnboardingFlow;
-(BOOL)viewControllerHasNext:(id)arg1 ;
-(void)viewControllerDidPressNext:(id)arg1 ;
-(void)viewControllerDidPressBack:(id)arg1 ;
@end

