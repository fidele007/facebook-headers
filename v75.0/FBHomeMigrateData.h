/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, FBPrivacyData;

@interface FBHomeMigrateData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _pageId;
	NSString* _residenceId;
	NSString* _name;
	NSString* _cityId;
	NSString* _neighborhoodName;
	NSString* _address;
	FBPrivacyData* _privacy;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * pageId;                        //@synthesize pageId=_pageId - In the implementation block
@property (nonatomic,copy) NSString * residenceId;                   //@synthesize residenceId=_residenceId - In the implementation block
@property (nonatomic,copy) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * cityId;                        //@synthesize cityId=_cityId - In the implementation block
@property (nonatomic,copy) NSString * neighborhoodName;              //@synthesize neighborhoodName=_neighborhoodName - In the implementation block
@property (nonatomic,copy) NSString * address;                       //@synthesize address=_address - In the implementation block
@property (nonatomic,copy) FBPrivacyData * privacy;                  //@synthesize privacy=_privacy - In the implementation block
-(void)setPrivacy:(FBPrivacyData *)arg1 ;
-(void)setActorId:(NSString *)arg1 ;
-(void)setPageId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)pageId;
-(NSString *)cityId;
-(void)setCityId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(FBPrivacyData *)privacy;
-(NSString *)actorId;
-(NSString *)neighborhoodName;
-(void)setNeighborhoodName:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)residenceId;
-(void)setResidenceId:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setAddress:(NSString *)arg1 ;
-(NSString *)address;
@end
