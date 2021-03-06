/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBEventActionResponderTarget.h>

@class FBEventActionResponder, NSString;

@interface FBEventActionBarComponent : CKCompositeComponent <FBEventActionResponderTarget> {

	FBEventActionResponder* _actionResponder;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithModel:(id)arg1 actionResponder:(id)arg2 showTopSeparator:(BOOL)arg3 showBottomSeparator:(BOOL)arg4 session:(id)arg5 ;
-(void)buyTickets:(id)arg1 mechanism:(id)arg2 ;
-(void)thankYouAction:(id)arg1 ;
-(void)toolbarMoreButtonTapped:(id)arg1 overflowItems:(id)arg2 ;
-(void)overflowAction:(id)arg1 ;
-(void)watchDeclineAction:(id)arg1 ;
-(void)removeFromEventAction:(id)arg1 ;
-(void)postAction:(id)arg1 ;
-(void)postPhotoAction:(id)arg1 ;
-(void)checkinAction:(id)arg1 ;
-(void)showPurchasedTickets:(id)arg1 ;
-(void)notGoingAction:(id)arg1 ;
-(void)goingAction:(id)arg1 ;
-(void)maybeAction:(id)arg1 ;
-(void)rsvpDeclinedAction:(id)arg1 ;
-(void)editEventAction:(id)arg1 ;
-(void)promoteEventAction:(id)arg1 ;
-(void)inviteAction:(id)arg1 ;
-(void)shareAction:(id)arg1 ;
-(void)rsvpGoingAction:(id)arg1 ;
-(void)rsvpMaybeAction:(id)arg1 ;
-(void)reportEventAction:(id)arg1 ;
-(void)saveAction:(id)arg1 ;
-(void)postToCurrentUserTimelineAction:(id)arg1 ;
-(void)unsaveAction:(id)arg1 ;
-(void)respondAction:(id)arg1 ;
-(void)notificationSettingAction:(id)arg1 ;
-(void)unwatchAction:(id)arg1 ;
-(void)changeFromGoingForWatchedEvent:(id)arg1 ;
-(void)watchRespondAction:(id)arg1 ;
-(void)viewPhotosAction:(id)arg1 ;
-(void)cancelEventAction:(id)arg1 ;
-(void)publishDraftAction:(id)arg1 ;
-(void)deleteDraftAction:(id)arg1 ;
-(void)scheduleDraftAction:(id)arg1 ;
-(void)removeScheduleAction:(id)arg1 ;
-(void)watchAction:(id)arg1 ;
-(void)watchGoingAction:(id)arg1 ;
-(void)changeFromWatched:(id)arg1 ;
@end

