/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, NSNumber, NSData, FBPoint2D;

@interface FBFundraiserEditData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _fundraiserId;
	NSString* _title;
	NSString* _descriptionText;
	NSString* _goalAmount;
	NSString* _currency;
	NSNumber* _endTime;
	NSData* _coverPhotoUpload;
	NSString* _coverPhotoId;
	FBPoint2D* _coverPhotoFocus;
	NSString* _source;
	NSString* _sessionId;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * fundraiserId;                  //@synthesize fundraiserId=_fundraiserId - In the implementation block
@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;               //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy) NSString * goalAmount;                    //@synthesize goalAmount=_goalAmount - In the implementation block
@property (nonatomic,copy) NSString * currency;                      //@synthesize currency=_currency - In the implementation block
@property (nonatomic,copy) NSNumber * endTime;                       //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,copy) NSData * coverPhotoUpload;                //@synthesize coverPhotoUpload=_coverPhotoUpload - In the implementation block
@property (nonatomic,copy) NSString * coverPhotoId;                  //@synthesize coverPhotoId=_coverPhotoId - In the implementation block
@property (nonatomic,copy) FBPoint2D * coverPhotoFocus;              //@synthesize coverPhotoFocus=_coverPhotoFocus - In the implementation block
@property (nonatomic,copy) NSString * source;                        //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * sessionId;                     //@synthesize sessionId=_sessionId - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(FBPoint2D *)coverPhotoFocus;
-(NSString *)clientMutationId;
-(void)setFundraiserId:(NSString *)arg1 ;
-(NSString *)goalAmount;
-(NSString *)actorId;
-(void)setGoalAmount:(NSString *)arg1 ;
-(void)setCoverPhotoId:(NSString *)arg1 ;
-(void)setCoverPhotoFocus:(FBPoint2D *)arg1 ;
-(NSData *)coverPhotoUpload;
-(void)setCoverPhotoUpload:(NSData *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)coverPhotoId;
-(NSString *)fundraiserId;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(NSString *)title;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(NSNumber *)endTime;
-(void)setEndTime:(NSNumber *)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)currency;
-(void)setCurrency:(NSString *)arg1 ;
@end

