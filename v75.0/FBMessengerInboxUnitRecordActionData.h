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

@interface FBMessengerInboxUnitRecordActionData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _unitId;
	NSString* _actionType;
	NSString* _unitLoggingData;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * unitId;                        //@synthesize unitId=_unitId - In the implementation block
@property (nonatomic,copy) NSString * actionType;                    //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy) NSString * unitLoggingData;               //@synthesize unitLoggingData=_unitLoggingData - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(void)setUnitId:(NSString *)arg1 ;
-(NSString *)actorId;
-(NSString *)unitId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)unitLoggingData;
-(void)setUnitLoggingData:(NSString *)arg1 ;
-(void)setActionType:(NSString *)arg1 ;
-(NSString *)actionType;
@end

