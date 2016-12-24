/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString;

@interface FBReviewMarkUsefulData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _reviewId;
	NSString* _surface;
	NSString* _mechanism;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * reviewId;                      //@synthesize reviewId=_reviewId - In the implementation block
@property (nonatomic,copy) NSString * surface;                       //@synthesize surface=_surface - In the implementation block
@property (nonatomic,copy) NSString * mechanism;                     //@synthesize mechanism=_mechanism - In the implementation block
-(void)setSurface:(NSString *)arg1 ;
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)actorId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setMechanism:(NSString *)arg1 ;
-(void)setReviewId:(NSString *)arg1 ;
-(NSString *)reviewId;
-(NSString *)mechanism;
-(NSString *)surface;
@end

