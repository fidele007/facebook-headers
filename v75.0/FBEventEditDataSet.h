/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSArray, FBNearbyPlace, FBEventPrivacySetting;

@interface FBEventEditDataSet : NSObject {

	BOOL _allDay;
	BOOL _canGuestsInviteFriends;
	NSString* _eventID;
	NSString* _objectID;
	NSString* _name;
	NSString* _descriptionText;
	NSDate* _startTime;
	NSDate* _endTime;
	NSArray* _invitees;
	FBNearbyPlace* _location;
	NSString* _locationString;
	FBEventPrivacySetting* _privacy;
	NSString* _privacyUpdatePolicy;

}

@property (nonatomic,copy) NSString * eventID;                             //@synthesize eventID=_eventID - In the implementation block
@property (nonatomic,copy) NSString * objectID;                            //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,copy) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                     //@synthesize descriptionText=_descriptionText - In the implementation block
@property (assign,nonatomic) BOOL allDay;                                  //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                           //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                             //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,copy) NSArray * invitees;                             //@synthesize invitees=_invitees - In the implementation block
@property (nonatomic,retain) FBNearbyPlace * location;                     //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * locationString;                      //@synthesize locationString=_locationString - In the implementation block
@property (assign,nonatomic) BOOL canGuestsInviteFriends;                  //@synthesize canGuestsInviteFriends=_canGuestsInviteFriends - In the implementation block
@property (nonatomic,retain) FBEventPrivacySetting * privacy;              //@synthesize privacy=_privacy - In the implementation block
@property (nonatomic,copy) NSString * privacyUpdatePolicy;                 //@synthesize privacyUpdatePolicy=_privacyUpdatePolicy - In the implementation block
-(void)setPrivacy:(FBEventPrivacySetting *)arg1 ;
-(BOOL)canGuestsInviteFriends;
-(void)setCanGuestsInviteFriends:(BOOL)arg1 ;
-(FBEventPrivacySetting *)privacy;
-(id)apiParameters;
-(id)editInputDataForEvent:(id)arg1 ;
-(NSString *)privacyUpdatePolicy;
-(void)setPrivacyUpdatePolicy:(NSString *)arg1 ;
-(id)createInputData;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setStartTime:(NSDate *)arg1 ;
-(FBNearbyPlace *)location;
-(void)setLocation:(FBNearbyPlace *)arg1 ;
-(NSDate *)startTime;
-(NSDate *)endTime;
-(void)setLocationString:(NSString *)arg1 ;
-(NSString *)locationString;
-(void)setEndTime:(NSDate *)arg1 ;
-(BOOL)allDay;
-(void)setAllDay:(BOOL)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(void)setObjectID:(NSString *)arg1 ;
-(void)setEventID:(NSString *)arg1 ;
-(NSString *)eventID;
-(id)initWithEvent:(id)arg1 ;
-(NSString *)objectID;
-(NSArray *)invitees;
-(void)setInvitees:(NSArray *)arg1 ;
@end

