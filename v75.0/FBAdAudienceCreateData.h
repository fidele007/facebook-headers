/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, FBAdCustomTargettingOptions;

@interface FBAdAudienceCreateData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _adAccountId;
	NSString* _name;
	FBAdCustomTargettingOptions* _targetSpec;
	NSString* _descriptionText;

}

@property (nonatomic,copy) NSString * clientMutationId;                           //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                                    //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * adAccountId;                                //@synthesize adAccountId=_adAccountId - In the implementation block
@property (nonatomic,copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) FBAdCustomTargettingOptions * targetSpec;              //@synthesize targetSpec=_targetSpec - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                            //@synthesize descriptionText=_descriptionText - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(FBAdCustomTargettingOptions *)targetSpec;
-(void)setAdAccountId:(NSString *)arg1 ;
-(void)setTargetSpec:(FBAdCustomTargettingOptions *)arg1 ;
-(NSString *)actorId;
-(NSString *)adAccountId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
@end

