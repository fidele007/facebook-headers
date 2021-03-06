/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSAttributedString, NSArray;

@interface FBEventContextRowsViewModel : FBValueObject <NSCopying> {

	BOOL _showGroupName;
	BOOL _showInvited;
	BOOL _descriptionExpanded;
	BOOL _isPastEvent;
	BOOL _isInterestedConnectionStyle;
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
	NSString* _groupFBID;
	NSString* _groupName;
	NSString* _locationSharingTitle;
	NSString* _locationSharingSubtitle;
	NSString* _eventDescription;

}

@property (nonatomic,copy,readonly) NSString * cityTimeZone;                           //@synthesize cityTimeZone=_cityTimeZone - In the implementation block
@property (nonatomic,copy,readonly) NSString * locationName;                           //@synthesize locationName=_locationName - In the implementation block
@property (nonatomic,copy,readonly) NSString * locationSubtitle;                       //@synthesize locationSubtitle=_locationSubtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * time;                                   //@synthesize time=_time - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * timeSubtitle;                 //@synthesize timeSubtitle=_timeSubtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * ticketItem;                             //@synthesize ticketItem=_ticketItem - In the implementation block
@property (nonatomic,copy,readonly) NSString * ticketItemSubtitle;                     //@synthesize ticketItemSubtitle=_ticketItemSubtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * invitedByTitle;                         //@synthesize invitedByTitle=_invitedByTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * invitedByFBID;                          //@synthesize invitedByFBID=_invitedByFBID - In the implementation block
@property (nonatomic,readonly) unsigned long long totalJoinedCount;                    //@synthesize totalJoinedCount=_totalJoinedCount - In the implementation block
@property (nonatomic,readonly) unsigned long long totalJoinedFriendCount;              //@synthesize totalJoinedFriendCount=_totalJoinedFriendCount - In the implementation block
@property (nonatomic,copy,readonly) NSArray * joinedFriendNames;                       //@synthesize joinedFriendNames=_joinedFriendNames - In the implementation block
@property (nonatomic,readonly) BOOL showGroupName;                                     //@synthesize showGroupName=_showGroupName - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupFBID;                              //@synthesize groupFBID=_groupFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupName;                              //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,readonly) BOOL showInvited;                                       //@synthesize showInvited=_showInvited - In the implementation block
@property (nonatomic,copy,readonly) NSString * locationSharingTitle;                   //@synthesize locationSharingTitle=_locationSharingTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * locationSharingSubtitle;                //@synthesize locationSharingSubtitle=_locationSharingSubtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventDescription;                       //@synthesize eventDescription=_eventDescription - In the implementation block
@property (nonatomic,readonly) BOOL descriptionExpanded;                               //@synthesize descriptionExpanded=_descriptionExpanded - In the implementation block
@property (nonatomic,readonly) BOOL isPastEvent;                                       //@synthesize isPastEvent=_isPastEvent - In the implementation block
@property (nonatomic,readonly) BOOL isInterestedConnectionStyle;                       //@synthesize isInterestedConnectionStyle=_isInterestedConnectionStyle - In the implementation block
-(NSString *)groupFBID;
-(NSAttributedString *)timeSubtitle;
-(NSString *)locationSubtitle;
-(NSString *)locationSharingTitle;
-(NSString *)locationSharingSubtitle;
-(NSString *)ticketItem;
-(NSString *)ticketItemSubtitle;
-(BOOL)showGroupName;
-(NSString *)eventDescription;
-(BOOL)descriptionExpanded;
-(BOOL)isInterestedConnectionStyle;
-(NSString *)invitedByFBID;
-(id)initWithCityTimeZone:(id)arg1 locationName:(id)arg2 locationSubtitle:(id)arg3 time:(id)arg4 timeSubtitle:(id)arg5 ticketItem:(id)arg6 ticketItemSubtitle:(id)arg7 invitedByTitle:(id)arg8 invitedByFBID:(id)arg9 totalJoinedCount:(unsigned long long)arg10 totalJoinedFriendCount:(unsigned long long)arg11 joinedFriendNames:(id)arg12 showGroupName:(BOOL)arg13 groupFBID:(id)arg14 groupName:(id)arg15 showInvited:(BOOL)arg16 locationSharingTitle:(id)arg17 locationSharingSubtitle:(id)arg18 eventDescription:(id)arg19 descriptionExpanded:(BOOL)arg20 isPastEvent:(BOOL)arg21 isInterestedConnectionStyle:(BOOL)arg22 ;
-(NSString *)cityTimeZone;
-(NSString *)invitedByTitle;
-(unsigned long long)totalJoinedCount;
-(unsigned long long)totalJoinedFriendCount;
-(NSArray *)joinedFriendNames;
-(BOOL)showInvited;
-(BOOL)isPastEvent;
-(NSString *)time;
-(NSString *)groupName;
-(NSString *)locationName;
@end

