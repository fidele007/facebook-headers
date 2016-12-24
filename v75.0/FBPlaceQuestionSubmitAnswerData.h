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

@interface FBPlaceQuestionSubmitAnswerData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _surface;
	NSString* _placeQuestionId;
	NSString* _placeQuestionValue;
	NSString* _placeQuestionAnswerValue;

}

@property (nonatomic,copy) NSString * clientMutationId;                      //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                               //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * surface;                               //@synthesize surface=_surface - In the implementation block
@property (nonatomic,copy) NSString * placeQuestionId;                       //@synthesize placeQuestionId=_placeQuestionId - In the implementation block
@property (nonatomic,copy) NSString * placeQuestionValue;                    //@synthesize placeQuestionValue=_placeQuestionValue - In the implementation block
@property (nonatomic,copy) NSString * placeQuestionAnswerValue;              //@synthesize placeQuestionAnswerValue=_placeQuestionAnswerValue - In the implementation block
-(void)setSurface:(NSString *)arg1 ;
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)actorId;
-(void)setPlaceQuestionId:(NSString *)arg1 ;
-(void)setPlaceQuestionAnswerValue:(NSString *)arg1 ;
-(NSString *)placeQuestionAnswerValue;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)placeQuestionId;
-(NSString *)placeQuestionValue;
-(void)setPlaceQuestionValue:(NSString *)arg1 ;
-(NSString *)surface;
@end
