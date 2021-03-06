/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Facebook/FBStreamingEventsViewTableDelegate.h>
#import <Facebook/FBStreamingEventModelDelegate.h>
#import <Facebook/FBStreamingEventPinnedViewControllerDelegate.h>

@protocol FBStreamingEventStrategy, FBStreamingEventModel, FBHumanQueriedFundraiserToCharityFieldsProtocol, FBStreamingEventViewControllerDelegate;
@class FBMemVideo, NSString, FBMemFeedback, NSArray, FBUserSession, FBScenePath, NSMutableArray, FBStreamingEventPinnedViewController, UIViewController, FBMemModelObject, UIAlertAction, FBStreamingEventView;

@interface FBStreamingEventViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, FBStreamingEventsViewTableDelegate, FBStreamingEventModelDelegate, FBStreamingEventPinnedViewControllerDelegate> {

	id<FBStreamingEventStrategy> _strategy;
	FBMemVideo* _video;
	NSString* _videoID;
	NSString* _targetID;
	NSString* _targetGraphQLTypeName;
	NSString* _broadcasterID;
	FBMemFeedback* _feedback;
	NSString* _analyicsModule;
	NSArray* _trackingCodes;
	FBUserSession* _session;
	id<FBStreamingEventModel> _model;
	BOOL _autoScrolling;
	BOOL _isMostRecentEventVisible;
	FBScenePath* _scenePath;
	NSMutableArray* _cachedRowHeights;
	double _mediaTimestamp;
	FBStreamingEventPinnedViewController* _pinnedViewController;
	UIViewController* _myPresentedViewController;
	BOOL _fetchingSuspended;
	unsigned long long _style;
	FBMemModelObject*<FBHumanQueriedFundraiserToCharityFieldsProtocol> _fundraiser;
	id<FBStreamingEventViewControllerDelegate> _delegate;
	UIAlertAction* _inviteEligibleGuestViaCommentsAction;

}

@property (nonatomic,retain) FBStreamingEventView * view; 
@property (nonatomic,retain) UIAlertAction * inviteEligibleGuestViaCommentsAction;                                       //@synthesize inviteEligibleGuestViaCommentsAction=_inviteEligibleGuestViaCommentsAction - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                                                   //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) FBMemModelObject*<FBHumanQueriedFundraiserToCharityFieldsProtocol> fundraiser;              //@synthesize fundraiser=_fundraiser - In the implementation block
@property (nonatomic,readonly) FBStreamingEventView * liveEventsView; 
@property (assign,getter=isFetchingSuspended,nonatomic) BOOL fetchingSuspended;                                          //@synthesize fetchingSuspended=_fetchingSuspended - In the implementation block
@property (assign,nonatomic,__weak) id<FBStreamingEventViewControllerDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)facecastEventsModel:(id)arg1 didLoadEvent:(id)arg2 ;
-(void)facecastEventsModel:(id)arg1 didDeliverEvent:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)facecastEventsModelFailedToLoadEvent:(id)arg1 ;
-(void)facecastEventsModelRefreshed:(id)arg1 ;
-(void)facecastEventsModel:(id)arg1 refreshedAtIndex:(unsigned long long)arg2 ;
-(FBMemModelObject*<FBHumanQueriedFundraiserToCharityFieldsProtocol>)fundraiser;
-(void)addOptimisticEvent:(id)arg1 ;
-(void)updateOptimisticEvent:(id)arg1 ;
-(void)setFetchingSuspended:(BOOL)arg1 ;
-(void)setVideoTime:(double)arg1 ;
-(id)initWithSession:(id)arg1 strategy:(id)arg2 video:(id)arg3 videoID:(id)arg4 targetID:(id)arg5 targetGraphQLTypeName:(id)arg6 broadcasterID:(id)arg7 feedback:(id)arg8 analyticsModule:(id)arg9 trackingCodes:(id)arg10 scenePath:(id)arg11 style:(unsigned long long)arg12 delegate:(id)arg13 ;
-(void)setFundraiser:(FBMemModelObject*<FBHumanQueriedFundraiserToCharityFieldsProtocol>)arg1 ;
-(FBStreamingEventView *)liveEventsView;
-(BOOL)isFetchingSuspended;
-(void)_didTapRecentEventsPill;
-(void)_resetFetching;
-(void)_scrollToFirstNonEvictedEventIfNeeded;
-(void)_showEvent:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(Class)_cellClassForEvent:(id)arg1 ;
-(void)_deleteEvent:(id)arg1 ;
-(BOOL)_canBanAuthorOfComment:(id)arg1 ;
-(void)_banActorID:(id)arg1 ;
-(UIAlertAction *)inviteEligibleGuestViaCommentsAction;
-(void)_markEventsByActorID:(id)arg1 banned:(BOOL)arg2 ;
-(void)_invalidateRowHeightCache;
-(void)_showModerationDialogForCommentEvent:(id)arg1 indexPath:(id)arg2 ;
-(Class)_cellClassForIndexPath:(id)arg1 ;
-(void)_callToActionControl:(id)arg1 tappedWithEvent:(id)arg2 ;
-(void)streamingEventsView:(id)arg1 didChangeTableSize:(CGSize)arg2 ;
-(void)streamingEventPinnedViewController:(id)arg1 updatedEntity:(id)arg2 ;
-(void)setInviteEligibleGuestViaCommentsAction:(UIAlertAction *)arg1 ;
-(void)dismissAllOverlays;
-(void)setDelegate:(id<FBStreamingEventViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<FBStreamingEventViewControllerDelegate>)delegate;
-(void)didReceiveMemoryWarning;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)loadView;
-(unsigned long long)_style;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

