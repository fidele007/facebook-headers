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

@interface FBDailyDialogueUpdateData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _productName;
	NSString* _mutationType;
	NSString* _lightweightUnitType;
	NSString* _lightweightUnitId;
	NSString* _lightweightExtra;

}

@property (nonatomic,copy) NSString * clientMutationId;                 //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                          //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * productName;                      //@synthesize productName=_productName - In the implementation block
@property (nonatomic,copy) NSString * mutationType;                     //@synthesize mutationType=_mutationType - In the implementation block
@property (nonatomic,copy) NSString * lightweightUnitType;              //@synthesize lightweightUnitType=_lightweightUnitType - In the implementation block
@property (nonatomic,copy) NSString * lightweightUnitId;                //@synthesize lightweightUnitId=_lightweightUnitId - In the implementation block
@property (nonatomic,copy) NSString * lightweightExtra;                 //@synthesize lightweightExtra=_lightweightExtra - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(void)setMutationType:(NSString *)arg1 ;
-(NSString *)actorId;
-(void)setLightweightUnitType:(NSString *)arg1 ;
-(void)setLightweightUnitId:(NSString *)arg1 ;
-(void)setLightweightExtra:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)mutationType;
-(NSString *)lightweightUnitType;
-(NSString *)lightweightUnitId;
-(NSString *)lightweightExtra;
-(NSString *)productName;
-(void)setProductName:(NSString *)arg1 ;
@end

