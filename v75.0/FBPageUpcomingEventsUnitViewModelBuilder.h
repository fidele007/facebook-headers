/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSDate;

@interface FBPageUpcomingEventsUnitViewModelBuilder : NSObject {

	NSString* _eventFBID;
	NSString* _eventName;
	NSString* _eventPlaceName;
	NSString* _timeAndPlaceDescription;
	NSString* _attendanceDescription;
	NSURL* _coverPhotoURL;
	NSDate* _startDate;
	BOOL _isAllDay;
	BOOL _isViewerGoing;
	BOOL _canViewerJoin;
	long long _membersCount;

}
+(id)pageUpcomingEventsUnitViewModel;
+(id)pageUpcomingEventsUnitViewModelFromExistingPageUpcomingEventsUnitViewModel:(id)arg1 ;
-(id)withEventFBID:(id)arg1 ;
-(id)withEventName:(id)arg1 ;
-(id)withEventPlaceName:(id)arg1 ;
-(id)withTimeAndPlaceDescription:(id)arg1 ;
-(id)withAttendanceDescription:(id)arg1 ;
-(id)withCoverPhotoURL:(id)arg1 ;
-(id)withStartDate:(id)arg1 ;
-(id)withIsAllDay:(BOOL)arg1 ;
-(id)withIsViewerGoing:(BOOL)arg1 ;
-(id)withCanViewerJoin:(BOOL)arg1 ;
-(id)withMembersCount:(long long)arg1 ;
-(id)build;
@end

