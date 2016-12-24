/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMemPageCardController.h>
#import <Facebook/FBMemPageUpcomingEventsCardCellDelegate.h>
#import <Facebook/FBCardViewProvider.h>

@class FBMemPageUpcomingEventsCardCell, FBPageUpcomingEventsViewModel, FBMemPage, FBConsistentLookasideCacheObservationHandle, NSString;

@interface FBMemPageUpcomingEventsCardController : FBMemPageCardController <FBMemPageUpcomingEventsCardCellDelegate, FBCardViewProvider> {

	FBMemPageUpcomingEventsCardCell* _cardCell;
	FBPageUpcomingEventsViewModel* _viewModel;
	FBMemPage* _page;
	BOOL _canShowEmptyCard;
	FBConsistentLookasideCacheObservationHandle* _upcomingEventsCLCHandle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView*<FBPageCardProtocol> cardView; 
-(void)configureWithPage:(id)arg1 ;
-(void)upcomingEventsOpenEventWithFBID:(id)arg1 ;
-(void)upcomingEventsSendRSVPToEventWithFBID:(id)arg1 rsvpStatus:(id)arg2 ;
-(void)upcomingEventsCardCellHeightUpdated;
-(void)upcomingEventsViewDidUpdateSubscribedStatus:(BOOL)arg1 ;
-(void)upcomingEventsViewAllEventsForPageFBID:(id)arg1 ;
-(void)_setupCLCObserverWithPage:(id)arg1 ;
-(void)didUpdateUpcomingEventsFields:(id)arg1 ;
-(void)dealloc;
-(UIView*<FBPageCardProtocol>)cardView;
@end
