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

@interface FBProfileQuestionSaveData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _profileQuestionId;
	NSString* _session;
	FBPrivacyData* _privacy;
	NSString* _profileQuestionOptionId;

}

@property (nonatomic,copy) NSString * clientMutationId;                     //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                              //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * profileQuestionId;                    //@synthesize profileQuestionId=_profileQuestionId - In the implementation block
@property (nonatomic,copy) NSString * session;                              //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) FBPrivacyData * privacy;                         //@synthesize privacy=_privacy - In the implementation block
@property (nonatomic,copy) NSString * profileQuestionOptionId;              //@synthesize profileQuestionOptionId=_profileQuestionOptionId - In the implementation block
-(void)setPrivacy:(FBPrivacyData *)arg1 ;
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(FBPrivacyData *)privacy;
-(NSString *)actorId;
-(void)setProfileQuestionId:(NSString *)arg1 ;
-(void)setProfileQuestionOptionId:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)profileQuestionOptionId;
-(NSString *)profileQuestionId;
-(NSString *)session;
-(void)setSession:(NSString *)arg1 ;
@end

