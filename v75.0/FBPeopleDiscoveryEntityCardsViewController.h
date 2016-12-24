/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBRapidFeedbackSurveyManagerDelegate.h>

@class FBPeopleDiscoveryEntityCardsLoadingStateView, FBUserSession, NSString, FBAvatarProfilePictureView, FBProfileDiscoveryViewStateTracker, FBProfileDiscoveryBucketSessionLogger, NSArray, FBProfileCurationTagsRefreshTrigger, FBRapidFeedbackSurveyManager;

@interface FBPeopleDiscoveryEntityCardsViewController : UIViewController <FBRapidFeedbackSurveyManagerDelegate> {

	FBPeopleDiscoveryEntityCardsLoadingStateView* _loadingIndicatorView;
	FBUserSession* _session;
	BOOL _hasPresentedEntityCards;
	NSString* _bucketId;
	FBAvatarProfilePictureView* _profilePictureView;
	FBProfileDiscoveryViewStateTracker* _viewStateTracker;
	FBProfileDiscoveryBucketSessionLogger* _analytics;
	NSArray* _bucketItemTypes;
	unsigned long long _selectedEntityIndex;
	FBProfileCurationTagsRefreshTrigger* _tagsRefreshTrigger;
	FBRapidFeedbackSurveyManager* _surveyManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(BOOL)fb_showNavBarSearchField;
-(BOOL)fb_hidesNavigationBar;
-(id)analyticsUUID;
-(SEL)fb_actionForBackArrowButton;
-(BOOL)fb_hideNavBarRightButton;
-(BOOL)fb_hidesTabBar;
-(void)didTapBackButton;
-(id)initWithSession:(id)arg1 analytics:(id)arg2 bucketId:(id)arg3 selectedEntityIndex:(unsigned long long)arg4 ;
-(void)didTapNavigateToDashboard;
-(void)didTapCogIcon;
-(void)_presentEntityCardWithBucket:(id)arg1 ;
-(id)_integrationPointWithBucketId:(id)arg1 ;
-(void)surveyManager:(id)arg1 shouldDismiss:(BOOL)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
@end
