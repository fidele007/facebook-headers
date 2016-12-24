/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBEventUtils : NSObject
+(BOOL)canViewerUseInviteOffFBForEvent:(id)arg1 session:(id)arg2 ;
+(BOOL)isUserHost:(id)arg1 forEvent:(id)arg2 ;
+(id)parseDateFromDateString:(id)arg1 ;
+(BOOL)isGoingToEvent:(id)arg1 ;
+(BOOL)isInterestedConnectionStyle:(id)arg1 ;
+(BOOL)isEventHappeningToday:(id)arg1 ;
+(BOOL)isConnectedToEvent:(id)arg1 ;
+(BOOL)isPastEvent:(id)arg1 ;
+(BOOL)isSavedEvent:(id)arg1 ;
+(BOOL)isPrivateEvent:(id)arg1 ;
+(long long)maybeGuestlistTypeForEvent:(id)arg1 session:(id)arg2 ;
+(id)messengerShareURLForEvent:(id)arg1 withRecipients:(id)arg2 ;
+(BOOL)canViewerSeePermalinkActivityTab:(id)arg1 session:(id)arg2 ;
+(BOOL)canBuyTicketsFromPartner:(id)arg1 session:(id)arg2 ;
+(unsigned long long)callToActionForEvent:(id)arg1 session:(id)arg2 ;
+(BOOL)shouldPostBeReviewed:(id)arg1 session:(id)arg2 ;
+(BOOL)isUserAdminWithSession:(id)arg1 forEvent:(id)arg2 ;
+(BOOL)isRsvpStatusGoing:(id)arg1 ;
+(id)messengerShareURLForEvent:(id)arg1 withRecipients:(id)arg2 title:(id)arg3 ;
+(BOOL)isPublicEvent:(id)arg1 ;
+(BOOL)isTicketOrderWithQRCode:(id)arg1 ;
+(BOOL)isTabbedPermalink:(id)arg1 ;
+(long long)maybePositiveRSVPStatusForEvent:(id)arg1 session:(id)arg2 ;
+(long long)inviteSocialContextPermutationForEvent:(id)arg1 ;
+(long long)compareWithReferenceDate:(id)arg1 withStartDate:(id)arg2 endDate:(id)arg3 ;
+(BOOL)isEvent:(id)arg1 happeningOnReferenceDate:(id)arg2 ;
+(BOOL)canViewerBuyTickets:(id)arg1 ;
+(BOOL)isViewerEligibleForCheckIn:(id)arg1 session:(id)arg2 ;
+(BOOL)canViewerSeeSayThanksButton:(id)arg1 session:(id)arg2 ;
+(BOOL)isEventHappeningNow:(id)arg1 ;
+(id)headerDetailTextForEvent:(id)arg1 session:(id)arg2 ;
+(BOOL)hasRespondedToEvent:(id)arg1 ;
+(BOOL)isViewerInvited:(id)arg1 ;
+(BOOL)isEventHappeningTomorrow:(id)arg1 ;
+(BOOL)didEventHappenYesterday:(id)arg1 ;
+(BOOL)isViewerGoingToEvent:(id)arg1 ;
+(BOOL)isViewerInNewTicketFlow:(id)arg1 ;
+(BOOL)canViewerSeeBoughtTicketsFromPartner:(id)arg1 ;
+(BOOL)isWithinWeekOffset:(long long)arg1 withStartDate:(id)arg2 endDate:(id)arg3 ;
+(id)titleForRSVPStatus:(id)arg1 ;
@end

