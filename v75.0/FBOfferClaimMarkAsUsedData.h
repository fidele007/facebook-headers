/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString;

@interface FBOfferClaimMarkAsUsedData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _offerClaimId;
	NSString* _used;
	NSString* _usedStatus;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * offerClaimId;                  //@synthesize offerClaimId=_offerClaimId - In the implementation block
@property (nonatomic,copy) NSString * used;                          //@synthesize used=_used - In the implementation block
@property (nonatomic,copy) NSString * usedStatus;                    //@synthesize usedStatus=_usedStatus - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)actorId;
-(void)setOfferClaimId:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)offerClaimId;
-(NSString *)usedStatus;
-(void)setUsedStatus:(NSString *)arg1 ;
-(NSString *)used;
-(void)setUsed:(NSString *)arg1 ;
@end

