/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPageActivitiesCardController.h>
#import <Facebook/FBPageActivitiesLinksCardCellDelegate.h>
#import <Facebook/FBPageBadgeCountListener.h>
#import <Facebook/FBGenericReactionViewDelegate.h>
#import <Facebook/FBCardViewProvider.h>

@protocol FBPageBadgeCountManagerProtocol;
@class FBPageActivitiesLinksCardCell, FBUserSession, UIViewController, FBNotificationTableViewTraits, FBPageActivitiesLinksCardViewModel, FBPageInsightsViewController, FBScenePathContext, NSString;

@interface FBPageActivitiesLinksCardController : FBPageActivitiesCardController <FBPageActivitiesLinksCardCellDelegate, FBPageBadgeCountListener, FBGenericReactionViewDelegate, FBCardViewProvider> {

	unsigned long long _pageMessagesNavigationType;
	id<FBPageBadgeCountManagerProtocol> _badgeCountManager;
	FBPageActivitiesLinksCardCell* _cardCell;
	FBUserSession* _userSession;
	UIViewController* _notificationViewController;
	FBNotificationTableViewTraits* _notificationTableViewTraits;
	FBPageActivitiesLinksCardViewModel* _viewModel;
	FBPageInsightsViewController* _insightsViewController;
	FBScenePathContext* _scenePathContext;
	UIViewController* _pageNewLikesViewController;
	NSString* _pageName;

}

@property (nonatomic,retain) UIViewController * pageNewLikesViewController;              //@synthesize pageNewLikesViewController=_pageNewLikesViewController - In the implementation block
@property (nonatomic,copy) NSString * pageName;                                          //@synthesize pageName=_pageName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView*<FBPageCardProtocol> cardView; 
-(void)cellHeightDidChange;
-(void)configureWithPage:(id)arg1 ;
-(void)openNotifications;
-(void)openPageTips;
-(void)openMessages;
-(void)openCommsHub;
-(void)openNewLikes;
-(void)openInsights;
-(void)openFollowers;
-(void)_fetchTitle;
-(UIViewController *)pageNewLikesViewController;
-(void)_markPageActivitySeenWithType:(int)arg1 ;
-(void)setPageName:(NSString *)arg1 ;
-(id)titleForEmpty;
-(id)subtitleForEmpty;
-(id)imageForEmpty;
-(id)buttonTextForEmpty;
-(void)buttonForEmptyTapped:(id)arg1 ;
-(id)initWithPage:(id)arg1 analyticsUUID:(id)arg2 delegate:(id)arg3 userSession:(id)arg4 pageMessagesNavigationType:(unsigned long long)arg5 badgeCountManaget:(id)arg6 notificationTableViewTraits:(id)arg7 showInsights:(BOOL)arg8 showCommsHub:(BOOL)arg9 scenePathContext:(id)arg10 scenePath:(id)arg11 ;
-(void)heightDidChange:(double)arg1 ;
-(void)setPageNewLikesViewController:(UIViewController *)arg1 ;
-(void)_loadUnreadCounts;
-(void)pageAdminBadgeCountManager:(id)arg1 countDidChangeForPageFBID:(id)arg2 type:(int)arg3 count:(long long)arg4 ;
-(NSString *)pageName;
-(void)dealloc;
-(id)title;
-(UIView*<FBPageCardProtocol>)cardView;
@end

