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

@interface FBInstantArticleSubscriptionActionRejectedData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _subscriptionOptionId;
	NSString* _articleId;
	NSString* _surfaceType;

}

@property (nonatomic,copy) NSString * clientMutationId;                  //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                           //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * subscriptionOptionId;              //@synthesize subscriptionOptionId=_subscriptionOptionId - In the implementation block
@property (nonatomic,copy) NSString * articleId;                         //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,copy) NSString * surfaceType;                       //@synthesize surfaceType=_surfaceType - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(void)setSurfaceType:(NSString *)arg1 ;
-(NSString *)surfaceType;
-(NSString *)actorId;
-(void)setArticleId:(NSString *)arg1 ;
-(void)setSubscriptionOptionId:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)subscriptionOptionId;
-(NSString *)articleId;
@end
