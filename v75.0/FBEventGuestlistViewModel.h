/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSArray;

@interface FBEventGuestlistViewModel : FBValueObject <NSCopying> {

	BOOL _canShowMessageGuests;
	BOOL _canShowGuestlist;
	BOOL _isInterestedConnectionStyle;
	long long _viewerPositiveRSVPState;
	long long _maybePositiveRSVPState;
	NSURL* _viewerProfilePicURL;
	NSArray* _goingFriends;
	NSArray* _maybeFriends;
	unsigned long long _totalGoingFriendCount;
	unsigned long long _totalMaybeFriendCount;
	unsigned long long _totalGoing;
	unsigned long long _totalMaybe;
	unsigned long long _totalInvited;
	unsigned long long _totalWatched;
	unsigned long long _totalWatchedFriendCount;

}

@property (nonatomic,readonly) BOOL canShowMessageGuests;                               //@synthesize canShowMessageGuests=_canShowMessageGuests - In the implementation block
@property (nonatomic,readonly) BOOL canShowGuestlist;                                   //@synthesize canShowGuestlist=_canShowGuestlist - In the implementation block
@property (nonatomic,readonly) long long viewerPositiveRSVPState;                       //@synthesize viewerPositiveRSVPState=_viewerPositiveRSVPState - In the implementation block
@property (nonatomic,readonly) long long maybePositiveRSVPState;                        //@synthesize maybePositiveRSVPState=_maybePositiveRSVPState - In the implementation block
@property (nonatomic,copy,readonly) NSURL * viewerProfilePicURL;                        //@synthesize viewerProfilePicURL=_viewerProfilePicURL - In the implementation block
@property (nonatomic,copy,readonly) NSArray * goingFriends;                             //@synthesize goingFriends=_goingFriends - In the implementation block
@property (nonatomic,copy,readonly) NSArray * maybeFriends;                             //@synthesize maybeFriends=_maybeFriends - In the implementation block
@property (nonatomic,readonly) unsigned long long totalGoingFriendCount;                //@synthesize totalGoingFriendCount=_totalGoingFriendCount - In the implementation block
@property (nonatomic,readonly) unsigned long long totalMaybeFriendCount;                //@synthesize totalMaybeFriendCount=_totalMaybeFriendCount - In the implementation block
@property (nonatomic,readonly) unsigned long long totalGoing;                           //@synthesize totalGoing=_totalGoing - In the implementation block
@property (nonatomic,readonly) unsigned long long totalMaybe;                           //@synthesize totalMaybe=_totalMaybe - In the implementation block
@property (nonatomic,readonly) unsigned long long totalInvited;                         //@synthesize totalInvited=_totalInvited - In the implementation block
@property (nonatomic,readonly) unsigned long long totalWatched;                         //@synthesize totalWatched=_totalWatched - In the implementation block
@property (nonatomic,readonly) unsigned long long totalWatchedFriendCount;              //@synthesize totalWatchedFriendCount=_totalWatchedFriendCount - In the implementation block
@property (nonatomic,readonly) BOOL isInterestedConnectionStyle;                        //@synthesize isInterestedConnectionStyle=_isInterestedConnectionStyle - In the implementation block
-(BOOL)isInterestedConnectionStyle;
-(BOOL)canShowGuestlist;
-(BOOL)canShowMessageGuests;
-(NSURL *)viewerProfilePicURL;
-(long long)maybePositiveRSVPState;
-(unsigned long long)totalWatched;
-(unsigned long long)totalMaybe;
-(unsigned long long)totalGoing;
-(unsigned long long)totalInvited;
-(long long)viewerPositiveRSVPState;
-(NSArray *)goingFriends;
-(unsigned long long)totalGoingFriendCount;
-(NSArray *)maybeFriends;
-(unsigned long long)totalMaybeFriendCount;
-(unsigned long long)totalWatchedFriendCount;
-(id)initWithCanShowMessageGuests:(BOOL)arg1 canShowGuestlist:(BOOL)arg2 viewerPositiveRSVPState:(long long)arg3 maybePositiveRSVPState:(long long)arg4 viewerProfilePicURL:(id)arg5 goingFriends:(id)arg6 maybeFriends:(id)arg7 totalGoingFriendCount:(unsigned long long)arg8 totalMaybeFriendCount:(unsigned long long)arg9 totalGoing:(unsigned long long)arg10 totalMaybe:(unsigned long long)arg11 totalInvited:(unsigned long long)arg12 totalWatched:(unsigned long long)arg13 totalWatchedFriendCount:(unsigned long long)arg14 isInterestedConnectionStyle:(BOOL)arg15 ;
@end

