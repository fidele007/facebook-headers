/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPageActivitiesCardController.h>
#import <Facebook/FBPageActivitiesPostLinksCardCellDelegate.h>
#import <Facebook/FBPageBadgeCountListener.h>
#import <Facebook/FBCardViewProvider.h>

@protocol FBPageBadgeCountManagerProtocol;
@class FBPageActivitiesPostLinksCardCell, NSString;

@interface FBPageActivitiesPostLinksCardController : FBPageActivitiesCardController <FBPageActivitiesPostLinksCardCellDelegate, FBPageBadgeCountListener, FBCardViewProvider> {

	id<FBPageBadgeCountManagerProtocol> _badgeCountManager;
	FBPageActivitiesPostLinksCardCell* _cardCell;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView*<FBPageCardProtocol> cardView; 
-(void)cellHeightDidChange;
-(void)configureWithPage:(id)arg1 ;
-(void)_loadScheduledPostsCount;
-(void)_loadDraftPostsCount;
-(void)openScheduledPosts;
-(void)openDraftPosts;
-(id)initWithPage:(id)arg1 analyticsUUID:(id)arg2 delegate:(id)arg3 userSession:(id)arg4 badgeCountManager:(id)arg5 ;
-(void)reloadBadgeCounts;
-(void)pageAdminBadgeCountManager:(id)arg1 countDidChangeForPageFBID:(id)arg2 type:(int)arg3 count:(long long)arg4 ;
-(void)dealloc;
-(UIView*<FBPageCardProtocol>)cardView;
@end

