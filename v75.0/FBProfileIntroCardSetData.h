/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, NSArray, NSNumber;

@interface FBProfileIntroCardSetData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _bio;
	NSString* _publishBioFeedStory;
	NSArray* _photoIds;
	NSArray* _photoIdsToRemove;
	NSString* _discoverySessionReferrerType;
	NSString* _referrerId;
	NSNumber* _entityCardPosition;
	NSArray* _externalLinks;

}

@property (nonatomic,copy) NSString * clientMutationId;                          //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                                   //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * bio;                                       //@synthesize bio=_bio - In the implementation block
@property (nonatomic,copy) NSString * publishBioFeedStory;                       //@synthesize publishBioFeedStory=_publishBioFeedStory - In the implementation block
@property (nonatomic,copy) NSArray * photoIds;                                   //@synthesize photoIds=_photoIds - In the implementation block
@property (nonatomic,copy) NSArray * photoIdsToRemove;                           //@synthesize photoIdsToRemove=_photoIdsToRemove - In the implementation block
@property (nonatomic,copy) NSString * discoverySessionReferrerType;              //@synthesize discoverySessionReferrerType=_discoverySessionReferrerType - In the implementation block
@property (nonatomic,copy) NSString * referrerId;                                //@synthesize referrerId=_referrerId - In the implementation block
@property (nonatomic,copy) NSNumber * entityCardPosition;                        //@synthesize entityCardPosition=_entityCardPosition - In the implementation block
@property (nonatomic,copy) NSArray * externalLinks;                              //@synthesize externalLinks=_externalLinks - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)discoverySessionReferrerType;
-(void)setReferrerId:(NSString *)arg1 ;
-(NSArray *)externalLinks;
-(void)setPhotoIds:(NSArray *)arg1 ;
-(void)setPublishBioFeedStory:(NSString *)arg1 ;
-(void)setDiscoverySessionReferrerType:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)actorId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSArray *)photoIds;
-(NSString *)referrerId;
-(NSNumber *)entityCardPosition;
-(void)setEntityCardPosition:(NSNumber *)arg1 ;
-(NSString *)publishBioFeedStory;
-(NSArray *)photoIdsToRemove;
-(void)setPhotoIdsToRemove:(NSArray *)arg1 ;
-(void)setExternalLinks:(NSArray *)arg1 ;
-(void)setBio:(NSString *)arg1 ;
-(NSString *)bio;
@end

