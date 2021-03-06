/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSAttributedString, NSArray;

@interface FBEventContextRowsViewModelBuilder : NSObject {

	NSString* _cityTimeZone;
	NSString* _locationName;
	NSString* _locationSubtitle;
	NSString* _time;
	NSAttributedString* _timeSubtitle;
	NSString* _ticketItem;
	NSString* _ticketItemSubtitle;
	NSString* _invitedByTitle;
	NSString* _invitedByFBID;
	unsigned long long _totalJoinedCount;
	unsigned long long _totalJoinedFriendCount;
	NSArray* _joinedFriendNames;
	BOOL _showGroupName;
	NSString* _groupFBID;
	NSString* _groupName;
	BOOL _showInvited;
	NSString* _locationSharingTitle;
	NSString* _locationSharingSubtitle;
	NSString* _eventDescription;
	BOOL _descriptionExpanded;
	BOOL _isPastEvent;
	BOOL _isInterestedConnectionStyle;

}
+(id)eventContextRowsViewModel;
+(id)eventContextRowsViewModelFromExistingEventContextRowsViewModel:(id)arg1 ;
-(id)withEventDescription:(id)arg1 ;
-(id)withCityTimeZone:(id)arg1 ;
-(id)withLocationName:(id)arg1 ;
-(id)withLocationSubtitle:(id)arg1 ;
-(id)withTime:(id)arg1 ;
-(id)withTimeSubtitle:(id)arg1 ;
-(id)withTicketItem:(id)arg1 ;
-(id)withTicketItemSubtitle:(id)arg1 ;
-(id)withInvitedByTitle:(id)arg1 ;
-(id)withInvitedByFBID:(id)arg1 ;
-(id)withTotalJoinedCount:(unsigned long long)arg1 ;
-(id)withTotalJoinedFriendCount:(unsigned long long)arg1 ;
-(id)withJoinedFriendNames:(id)arg1 ;
-(id)withShowGroupName:(BOOL)arg1 ;
-(id)withGroupFBID:(id)arg1 ;
-(id)withGroupName:(id)arg1 ;
-(id)withShowInvited:(BOOL)arg1 ;
-(id)withLocationSharingTitle:(id)arg1 ;
-(id)withLocationSharingSubtitle:(id)arg1 ;
-(id)withDescriptionExpanded:(BOOL)arg1 ;
-(id)withIsPastEvent:(BOOL)arg1 ;
-(id)withIsInterestedConnectionStyle:(BOOL)arg1 ;
-(id)build;
@end

