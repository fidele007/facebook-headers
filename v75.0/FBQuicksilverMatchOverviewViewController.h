/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBNuxStepChainControllerDelegate.h>
#import <Facebook/FBQuicksilverMatchOverviewViewDelegate.h>
#import <Facebook/FBQuicksilverThreadMatchViewControllerDelegate.h>
#import <Facebook/FBQuicksilverPlayerInfoTableViewControllerDelegate.h>

@protocol FBQuicksilverMatchOverviewViewControllerDelegate;
@class FBQuicksilverGameInfo, FBQuicksilverMatchOverviewView, FBUserSession, FBQuicksilverPlayerInfo, FBQuicksilverThreadMatchViewController, FBQuicksilverPlayerInfoTableViewController, UIViewController, NSMutableArray, NSString;

@interface FBQuicksilverMatchOverviewViewController : UIViewController <FBNuxStepChainControllerDelegate, FBQuicksilverMatchOverviewViewDelegate, FBQuicksilverThreadMatchViewControllerDelegate, FBQuicksilverPlayerInfoTableViewControllerDelegate> {

	long long _startScreenMode;
	FBQuicksilverGameInfo* _gameInfo;
	FBQuicksilverMatchOverviewView* _matchOverviewView;
	FBUserSession* _session;
	BOOL _shouldFastStart;
	FBQuicksilverPlayerInfo* _viewerPlayerInfo;
	FBQuicksilverThreadMatchViewController* _threadMatchViewController;
	FBQuicksilverPlayerInfoTableViewController* _allMatchesViewController;
	FBQuicksilverPlayerInfoTableViewController* _leaderboardViewController;
	UIViewController* _currentContentViewController;
	NSMutableArray* _contentViewControllers;
	BOOL _isGameLoaded;
	id<FBQuicksilverMatchOverviewViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBQuicksilverMatchOverviewViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isGameLoaded;                                                                 //@synthesize isGameLoaded=_isGameLoaded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stepChainControllerDidEnd:(id)arg1 ;
-(id)initWithStartScreenMode:(long long)arg1 session:(id)arg2 gameInfo:(id)arg3 shouldFastStart:(BOOL)arg4 ;
-(void)quicksilverMatchOverviewViewDidTabSegmentedControl:(id)arg1 withIndex:(long long)arg2 ;
-(void)quicksilverMatchOverviewDidSelectPlayAlone:(id)arg1 ;
-(BOOL)isGameLoaded;
-(void)setIsGameLoaded:(BOOL)arg1 ;
-(BOOL)_shouldShowSoloPlayButton;
-(void)_logFunnelActionForTableData:(id)arg1 indexPath:(id)arg2 ;
-(void)quicksilverPlayerInfoTableViewController:(id)arg1 didFecthTableData:(id)arg2 ;
-(void)quicksilverPlayerInfoTableViewController:(id)arg1 didTapPlayButtonAtIndexPath:(id)arg2 ;
-(void)threadMatchViewController:(id)arg1 didFinishFetchThreadMatchViewModel:(id)arg2 ;
-(void)threadMatchViewController:(id)arg1 didTapPlayButtonWithThreadMatchViewModel:(id)arg2 ;
-(void)setDelegate:(id<FBQuicksilverMatchOverviewViewControllerDelegate>)arg1 ;
-(id<FBQuicksilverMatchOverviewViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLoad;
-(void)_setContentViewController:(id)arg1 ;
@end

