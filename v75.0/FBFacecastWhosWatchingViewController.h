/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBFacecastWhosWatchingViewDelegate.h>
#import <Facebook/FBFacecastWithWhosWatchingDelegate.h>

@protocol FBFacecastWhosWatchingViewControllerDelegate;
@class NSString, FBTimer, UIViewController, FBUserSession, FBFacecastWithWhosWatchingHandler, FBScenePath, FBFacecastWithInviteGuestLogger, NSArray, FBFacecastWhosWatchingView;

@interface FBFacecastWhosWatchingViewController : UIViewController <FBFacecastWhosWatchingViewDelegate, FBFacecastWithWhosWatchingDelegate> {

	NSString* _videoID;
	NSString* _broadcasterID;
	FBTimer* _timer;
	UIViewController* _actionSheetController;
	FBUserSession* _session;
	FBFacecastWithWhosWatchingHandler* _handler;
	unsigned long long _style;
	FBScenePath* _scenePath;
	long long _totalViewerCount;
	BOOL _isViewVisible;
	BOOL _isBroadcasting;
	FBFacecastWithInviteGuestLogger* _logger;
	NSArray* _viewers;
	long long _liveWithEnabledType;
	id<FBFacecastWhosWatchingViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) FBFacecastWhosWatchingView * view; 
@property (assign,nonatomic,__weak) id<FBFacecastWhosWatchingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                                      //@synthesize style=_style - In the implementation block
@property (assign,getter=isFetchingSuspended,nonatomic) BOOL fetchingSuspended; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_collectionViewDataFromViewers:(id)arg1 totalViewerCount:(long long)arg2 numberOfColumns:(long long)arg3 ;
+(long long)_totalLastKnownViewers:(id)arg1 ;
-(void)setFetchingSuspended:(BOOL)arg1 ;
-(void)_dismissSocialActionSheet;
-(id)initWithSession:(id)arg1 videoID:(id)arg2 broadcasterID:(id)arg3 privacySetting:(id)arg4 style:(unsigned long long)arg5 isBroadcasting:(BOOL)arg6 scenePath:(id)arg7 ;
-(BOOL)isFetchingSuspended;
-(void)presentActionSheetForFBID:(id)arg1 inviteGuestContext:(unsigned long long)arg2 ;
-(void)inviteGuest:(id)arg1 inviteGuestContext:(unsigned long long)arg2 ;
-(BOOL)isInvitable:(id)arg1 ;
-(void)facecastWhosWatchingView:(id)arg1 didSelectItem:(id)arg2 ;
-(void)_updateCollectionViewData;
-(void)_didUpdateViewerCount:(long long)arg1 ;
-(void)_fetchViewers;
-(long long)_indexFromFBID:(id)arg1 ;
-(void)_presentActionSheetForViewer:(id)arg1 inviteGuestContext:(unsigned long long)arg2 ;
-(void)_processViewers:(id)arg1 ;
-(BOOL)_isValidViewer:(id)arg1 ;
-(void)facecastWithWhosWatchingHandlerDidStartInvitingGuest:(id)arg1 ;
-(BOOL)facecastWithWhosWatchingHandlerIsCurrentViewer:(id)arg1 userID:(id)arg2 ;
-(void)facecastWithWhosWatchingHandlerReloadData:(id)arg1 ;
-(void)setDelegate:(id<FBFacecastWhosWatchingViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBFacecastWhosWatchingViewControllerDelegate>)delegate;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

