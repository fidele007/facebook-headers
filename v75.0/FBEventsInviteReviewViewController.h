/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBEventsInviteDataSourceDelegateProtocol.h>
#import <UIKit/UITableViewDelegate.h>

@protocol FBEventsInviteDataSourceProtocol, FBEventsInviteReviewViewControllerDelegate;
@class FBUserSession, FBMemEvent, NSMutableArray, UITableView, FBTableViewAggregatedDataSource, FBEventsInviteAnalyticsManager, NSString;

@interface FBEventsInviteReviewViewController : UIViewController <FBEventsInviteDataSourceDelegateProtocol, UITableViewDelegate> {

	FBUserSession* _session;
	FBMemEvent* _event;
	NSMutableArray* _selectedCandidates;
	UITableView* _tableView;
	id<FBEventsInviteDataSourceProtocol> _selectedDataSource;
	FBTableViewAggregatedDataSource* _aggregatedDataSource;
	FBEventsInviteAnalyticsManager* _selectedAnalyticsManager;
	NSString* _inviteSessionUUID;
	id<FBEventsInviteReviewViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBEventsInviteReviewViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(BOOL)fb_showNavBarSearchField;
-(id)_sendButton;
-(void)_didModifySelectedCandidatesList;
-(BOOL)_isCandidateSelected:(id)arg1 ;
-(void)_removeCandidateFromSelectedList:(id)arg1 ;
-(void)_addCandidateToSelectedList:(id)arg1 ;
-(void)didSelectSendButton:(id)arg1 ;
-(BOOL)dataSource:(id)arg1 isCandidateSelected:(id)arg2 ;
-(BOOL)dataSource:(id)arg1 isCandidateInvited:(id)arg2 ;
-(BOOL)isInvitesLimitReached;
-(void)dataSource:(id)arg1 didSelectInviteeCandidate:(id)arg2 ;
-(id)initWithSession:(id)arg1 selectedCandidates:(id)arg2 inviteSessionUUID:(id)arg3 event:(id)arg4 ;
-(void)setDelegate:(id<FBEventsInviteReviewViewControllerDelegate>)arg1 ;
-(id<FBEventsInviteReviewViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)navigationTitle;
@end

