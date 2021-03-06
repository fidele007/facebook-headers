/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBInstantGameStartViewDelegate.h>
#import <Facebook/FBInstantGameLeaderboardViewControllerDelegate.h>
#import <Facebook/FBInstantGameStartViewStateManagerDelegate.h>
#import <Facebook/FBQuicksilverStartViewController.h>

@protocol FBInstantGameLeaderboardFetcher, FBQuicksilverStartViewControllerDelegate;
@class FBQuicksilverGameInfo, FBUserSession, FBQuicksilverSessionInfo, FBInstantGameStartView, NSString, FBInstantGameUIMetrics, FBInstantGameLeaderboardViewController, FBInstantGameStartViewStateManager;

@interface FBInstantGameStartViewController : UIViewController <FBInstantGameStartViewDelegate, FBInstantGameLeaderboardViewControllerDelegate, FBInstantGameStartViewStateManagerDelegate, FBQuicksilverStartViewController> {

	FBQuicksilverGameInfo* _gameInfo;
	FBUserSession* _session;
	FBQuicksilverSessionInfo* _sessionInfo;
	FBInstantGameStartView* _startView;
	NSString* _threadID;
	NSString* _storyToken;
	NSString* _gamePlayID;
	FBInstantGameUIMetrics* _metrics;
	FBInstantGameLeaderboardViewController* _leaderboardViewController;
	id<FBInstantGameLeaderboardFetcher> _leaderboardFetcher;
	FBInstantGameStartViewStateManager* _startViewStateManager;
	id<FBQuicksilverStartViewControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBQuicksilverStartViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)didStartGameLoading;
-(void)didProgressGameLoading:(double)arg1 ;
-(void)didFinishGameLoading;
-(void)dismissStartViewWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithSession:(id)arg1 gameInfo:(id)arg2 gamePlayID:(id)arg3 threadID:(id)arg4 storyToken:(id)arg5 isGameLoaded:(BOOL)arg6 ;
-(void)gameLeaderboardViewController:(id)arg1 didFetchLeaderboardData:(id)arg2 ;
-(void)gameLeaderboardViewController:(id)arg1 didFailToFetchLeaderboardDataWithError:(id)arg2 ;
-(id)gameLeaderboardViewController:(id)arg1 leaderboardCellModelForViewerSection:(id)arg2 viewerRank:(unsigned long long)arg3 ;
-(void)gameLeaderboardViewDidScroll:(id)arg1 ;
-(void)instantGameStartViewDidTapPlayButton:(id)arg1 ;
-(BOOL)_shouldShowLegalText;
-(void)_fetchStartViewData;
-(void)_didFinishFetchLeaderboardWithLeaderboardData:(id)arg1 ;
-(id)gameLeaderboardViewController:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(double)gameLeaderboardViewController:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)informToDismissGameLoadingCard;
-(void)informToShowLeaderboardCard;
-(void)informToShowLeaderboardCardWithPlayButton;
-(void)informToShowChallengeCard;
-(void)informToShowPlayButtonShowLegalText:(BOOL)arg1 ;
-(void)setDelegate:(id<FBQuicksilverStartViewControllerDelegate>)arg1 ;
-(id<FBQuicksilverStartViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
@end

