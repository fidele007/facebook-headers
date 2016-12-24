/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, NSArray, FBEventContext, FBCoverPhotoInfo;

@interface FBEventEditData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _eventId;
	NSArray* _removeHostIds;
	NSString* _name;
	NSString* _startTime;
	NSString* _endTime;
	NSString* _descriptionText;
	NSString* _invitePolicy;
	NSString* _locationName;
	NSString* _locationId;
	NSString* _eventType;
	NSString* _eventVisibility;
	FBEventContext* _context;
	NSString* _objectId;
	NSArray* _inviteeIds;
	NSArray* _addHostIds;
	NSString* _canPostPolicy;
	NSString* _privacyUpdatePolicy;
	FBCoverPhotoInfo* _coverPhotoInfo;
	NSString* _eventBuyTicketURLString;
	NSString* _categoryName;
	NSString* _categoryNameV2;
	NSString* _formatName;
	NSString* _guestListEnabled;
	NSString* _postApprovalRequired;
	NSString* _eventPromotionId;

}

@property (nonatomic,copy) NSString * clientMutationId;                     //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                              //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * eventId;                              //@synthesize eventId=_eventId - In the implementation block
@property (nonatomic,copy) NSArray * removeHostIds;                         //@synthesize removeHostIds=_removeHostIds - In the implementation block
@property (nonatomic,copy) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * startTime;                            //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,copy) NSString * endTime;                              //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                      //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy) NSString * invitePolicy;                         //@synthesize invitePolicy=_invitePolicy - In the implementation block
@property (nonatomic,copy) NSString * locationName;                         //@synthesize locationName=_locationName - In the implementation block
@property (nonatomic,copy) NSString * locationId;                           //@synthesize locationId=_locationId - In the implementation block
@property (nonatomic,copy) NSString * eventType;                            //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy) NSString * eventVisibility;                      //@synthesize eventVisibility=_eventVisibility - In the implementation block
@property (nonatomic,copy) FBEventContext * context;                        //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * objectId;                             //@synthesize objectId=_objectId - In the implementation block
@property (nonatomic,copy) NSArray * inviteeIds;                            //@synthesize inviteeIds=_inviteeIds - In the implementation block
@property (nonatomic,copy) NSArray * addHostIds;                            //@synthesize addHostIds=_addHostIds - In the implementation block
@property (nonatomic,copy) NSString * canPostPolicy;                        //@synthesize canPostPolicy=_canPostPolicy - In the implementation block
@property (nonatomic,copy) NSString * privacyUpdatePolicy;                  //@synthesize privacyUpdatePolicy=_privacyUpdatePolicy - In the implementation block
@property (nonatomic,copy) FBCoverPhotoInfo * coverPhotoInfo;               //@synthesize coverPhotoInfo=_coverPhotoInfo - In the implementation block
@property (nonatomic,copy) NSString * eventBuyTicketURLString;              //@synthesize eventBuyTicketURLString=_eventBuyTicketURLString - In the implementation block
@property (nonatomic,copy) NSString * categoryName;                         //@synthesize categoryName=_categoryName - In the implementation block
@property (nonatomic,copy) NSString * categoryNameV2;                       //@synthesize categoryNameV2=_categoryNameV2 - In the implementation block
@property (nonatomic,copy) NSString * formatName;                           //@synthesize formatName=_formatName - In the implementation block
@property (nonatomic,copy) NSString * guestListEnabled;                     //@synthesize guestListEnabled=_guestListEnabled - In the implementation block
@property (nonatomic,copy) NSString * postApprovalRequired;                 //@synthesize postApprovalRequired=_postApprovalRequired - In the implementation block
@property (nonatomic,copy) NSString * eventPromotionId;                     //@synthesize eventPromotionId=_eventPromotionId - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(void)setInviteeIds:(NSArray *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)actorId;
-(NSString *)privacyUpdatePolicy;
-(void)setPrivacyUpdatePolicy:(NSString *)arg1 ;
-(void)setInvitePolicy:(NSString *)arg1 ;
-(void)setAddHostIds:(NSArray *)arg1 ;
-(void)setRemoveHostIds:(NSArray *)arg1 ;
-(NSString *)eventVisibility;
-(void)setEventVisibility:(NSString *)arg1 ;
-(void)setPostApprovalRequired:(NSString *)arg1 ;
-(void)setEventBuyTicketURLString:(NSString *)arg1 ;
-(void)setCoverPhotoInfo:(FBCoverPhotoInfo *)arg1 ;
-(NSArray *)inviteeIds;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)invitePolicy;
-(NSArray *)addHostIds;
-(NSString *)canPostPolicy;
-(void)setCanPostPolicy:(NSString *)arg1 ;
-(FBCoverPhotoInfo *)coverPhotoInfo;
-(NSString *)eventBuyTicketURLString;
-(NSString *)categoryNameV2;
-(void)setCategoryNameV2:(NSString *)arg1 ;
-(NSString *)guestListEnabled;
-(void)setGuestListEnabled:(NSString *)arg1 ;
-(NSString *)postApprovalRequired;
-(NSString *)eventPromotionId;
-(void)setEventPromotionId:(NSString *)arg1 ;
-(NSArray *)removeHostIds;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setStartTime:(NSString *)arg1 ;
-(FBEventContext *)context;
-(void)setContext:(FBEventContext *)arg1 ;
-(NSString *)startTime;
-(NSString *)endTime;
-(void)setEndTime:(NSString *)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)locationName;
-(NSString *)eventId;
-(void)setEventId:(NSString *)arg1 ;
-(NSString *)locationId;
-(void)setLocationId:(NSString *)arg1 ;
-(void)setLocationName:(NSString *)arg1 ;
-(void)setEventType:(NSString *)arg1 ;
-(NSString *)eventType;
-(NSString *)categoryName;
-(void)setCategoryName:(NSString *)arg1 ;
-(NSString *)objectId;
-(void)setObjectId:(NSString *)arg1 ;
-(NSString *)formatName;
-(void)setFormatName:(NSString *)arg1 ;
@end

