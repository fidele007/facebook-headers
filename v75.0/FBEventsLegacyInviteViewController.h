/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBEventsLegacyInviteDataSourceDelegateProtocol.h>
#import <Facebook/FBEventsInviteSearchableDataSourceDelegateProtocol.h>
#import <Facebook/FBEventsLegacyInviteReviewViewControllerDelegate.h>
#import <Facebook/FBEventsLegacyInviteCandidateManagerDelegate.h>
#import <Facebook/FBEventsPreviouslyInvitedDelegateProtocol.h>
#import <Facebook/FBCollationManagerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchDisplayDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol FBEventsLegacyInviteViewControllerDelegate, FBEventsLegacyInviteNetworkedDataSourceProtocol, FBEventsLegacyInviteSearchableDataSourceProtocol;
@class FBMemEvent, FBUserSession, FBTransientViewStateManager, UISearchDisplayController, FBEventsLegacyInviteView, FBEventsLegacyInviteCandidateManager, FBTableViewAggregatedDataSource, FBEventAnalyticTracker, FBEventsInviteAnalyticsManager, NSString, UIActivityIndicatorView, UITapGestureRecognizer, FBNuxController, FBEventsLegacyInviteFriendsWithSearchHintDataSource;

@interface FBEventsLegacyInviteViewController : UIViewController <FBEventsLegacyInviteDataSourceDelegateProtocol, FBEventsInviteSearchableDataSourceDelegateProtocol, FBEventsLegacyInviteReviewViewControllerDelegate, FBEventsLegacyInviteCandidateManagerDelegate, FBEventsPreviouslyInvitedDelegateProtocol, FBCollationManagerDelegate, UIGestureRecognizerDelegate, UISearchBarDelegate, UISearchDisplayDelegate, UITableViewDelegate, UITableViewDataSource> {

	FBMemEvent* _event;
	FBUserSession* _session;
	FBTransientViewStateManager* _viewStateManager;
	UISearchDisplayController* _searchDisplayController;
	FBEventsLegacyInviteView* _inviteView;
	FBEventsLegacyInviteCandidateManager* _selectedCandidateManager;
	FBEventsLegacyInviteCandidateManager* _invitedCandidateManager;
	FBTableViewAggregatedDataSource* _aggregatedDataSource;
	long long _defaultStatusBarStyle;
	FBEventAnalyticTracker* _tracker;
	FBEventsInviteAnalyticsManager* _selectedAnalyticsManager;
	NSString* _inviteSessionUUID;
	BOOL _sendInviteThroughMessenger;
	NSString* _currentSearchQuery;
	BOOL _useNetworkSearch;
	UIActivityIndicatorView* _searchActivityIndicatorView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	FBNuxController* _inviteThroughMessengerNuxController;
	BOOL _loggingHasStartedForSearch;
	id<FBEventsLegacyInviteViewControllerDelegate> _delegate;
	id<FBEventsLegacyInviteNetworkedDataSourceProtocol> _suggestionsDataSource;
	id<FBEventsLegacyInviteSearchableDataSourceProtocol> _allFriendsDataSource;
	id<FBEventsLegacyInviteSearchableDataSourceProtocol> _searchDataSource;
	FBEventsLegacyInviteFriendsWithSearchHintDataSource* _friendSearchWithHintDataSource;

}

@property (nonatomic,retain) id<FBEventsLegacyInviteNetworkedDataSourceProtocol> suggestionsDataSource;                         //@synthesize suggestionsDataSource=_suggestionsDataSource - In the implementation block
@property (nonatomic,retain) id<FBEventsLegacyInviteSearchableDataSourceProtocol> allFriendsDataSource;                         //@synthesize allFriendsDataSource=_allFriendsDataSource - In the implementation block
@property (nonatomic,retain) id<FBEventsLegacyInviteSearchableDataSourceProtocol> searchDataSource;                             //@synthesize searchDataSource=_searchDataSource - In the implementation block
@property (nonatomic,retain) FBEventsLegacyInviteFriendsWithSearchHintDataSource * friendSearchWithHintDataSource;              //@synthesize friendSearchWithHintDataSource=_friendSearchWithHintDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<FBEventsLegacyInviteViewControllerDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(BOOL)fb_showNavBarSearchField;
-(id)initWithSession:(id)arg1 event:(id)arg2 tracker:(id)arg3 selectedCandidates:(id)arg4 ;
-(void)didCancelWithInviteController:(id)arg1 forEventID:(id)arg2 ;
-(void)showNuxIfNecessary;
-(void)inviteeManager:(id)arg1 didUpdateSelectedCandidates:(id)arg2 ;
-(void)didSelectCancelButton:(id)arg1 ;
-(void)_configureRemainingInvitesView;
-(long long)_remainingInvites;
-(id)_backgroundColorForRemainingInvites:(unsigned long long)arg1 ;
-(void)setSearchDataSource:(id<FBEventsLegacyInviteSearchableDataSourceProtocol>)arg1 ;
-(void)inviteReviewController:(id)arg1 didFinishWithInvitees:(id)arg2 ;
-(void)inviteReviewController:(id)arg1 didSelectSendButtonWithInvitees:(id)arg2 ;
-(void)didSelectSendButton:(id)arg1 ;
-(BOOL)dataSource:(id)arg1 isCandidateSelected:(id)arg2 ;
-(BOOL)dataSource:(id)arg1 isCandidateInvited:(id)arg2 ;
-(BOOL)isInvitesLimitReached;
-(void)dataSource:(id)arg1 didSelectInviteeCandidate:(id)arg2 ;
-(void)dataSource:(id)arg1 didReceiveRemainingInvites:(id)arg2 ;
-(void)searchDataSource:(id)arg1 didFinishWithResults:(id)arg2 forSearchText:(id)arg3 ;
-(void)searchDataSource:(id)arg1 didFinishWithError:(id)arg2 forSearchText:(id)arg3 ;
-(id<FBEventsLegacyInviteNetworkedDataSourceProtocol>)suggestionsDataSource;
-(id<FBEventsLegacyInviteSearchableDataSourceProtocol>)allFriendsDataSource;
-(BOOL)_hasInviteThroughMessenger;
-(void)didSelectFaceBadge:(id)arg1 ;
-(void)_updateRightBarButton;
-(void)didToggleInviteThroughMessenger:(id)arg1 ;
-(void)_switchTouchedWhileDisabled:(id)arg1 ;
-(void)_updateFaceBadgeWithSelectedCandidates:(id)arg1 ;
-(void)loadNetworkedDataSources;
-(void)inviteController:(id)arg1 didFinishWithSelection:(id)arg2 forEventID:(id)arg3 ;
-(void)setSendInviteThroughMessenger:(BOOL)arg1 ;
-(FBEventsLegacyInviteFriendsWithSearchHintDataSource *)friendSearchWithHintDataSource;
-(id)_rightBarButtonTitle;
-(id)_textForRemainingInvites;
-(long long)_stateForRemainingInvites:(long long)arg1 ;
-(BOOL)_hasRemainingMessengerInvites;
-(void)_sendInvitesWithSelectedInvitees:(id)arg1 throughMessenger:(BOOL)arg2 messengerShareURL:(id)arg3 ;
-(void)_onInviteSuccess:(id)arg1 ;
-(void)_onInviteFailure:(id)arg1 ;
-(void)dataSource:(id)arg1 didUpdateInvitedPersons:(id)arg2 ;
-(void)setSuggestionsDataSource:(id<FBEventsLegacyInviteNetworkedDataSourceProtocol>)arg1 ;
-(void)setAllFriendsDataSource:(id<FBEventsLegacyInviteSearchableDataSourceProtocol>)arg1 ;
-(void)setFriendSearchWithHintDataSource:(FBEventsLegacyInviteFriendsWithSearchHintDataSource *)arg1 ;
-(void)setDelegate:(id<FBEventsLegacyInviteViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<FBEventsLegacyInviteViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayControllerDidEndSearch:(id)arg1 ;
-(void)searchDisplayControllerWillBeginSearch:(id)arg1 ;
-(void)searchDisplayControllerWillEndSearch:(id)arg1 ;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
-(id<FBEventsLegacyInviteSearchableDataSourceProtocol>)searchDataSource;
@end

