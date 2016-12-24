/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, NSArray;

@interface FBDirectMessageCreateData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _idempotenceToken;
	NSString* _unpublishedMedia;
	NSString* _mediaType;
	NSString* _backstagePostType;
	NSArray* _directSpaces;
	NSArray* _specificUsers;
	NSString* _isPrivate;

}

@property (nonatomic,copy) NSString * clientMutationId;               //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                        //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * idempotenceToken;               //@synthesize idempotenceToken=_idempotenceToken - In the implementation block
@property (nonatomic,copy) NSString * unpublishedMedia;               //@synthesize unpublishedMedia=_unpublishedMedia - In the implementation block
@property (nonatomic,copy) NSString * mediaType;                      //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,copy) NSString * backstagePostType;              //@synthesize backstagePostType=_backstagePostType - In the implementation block
@property (nonatomic,copy) NSArray * directSpaces;                    //@synthesize directSpaces=_directSpaces - In the implementation block
@property (nonatomic,copy) NSArray * specificUsers;                   //@synthesize specificUsers=_specificUsers - In the implementation block
@property (nonatomic,copy) NSString * isPrivate;                      //@synthesize isPrivate=_isPrivate - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(void)setBackstagePostType:(NSString *)arg1 ;
-(NSString *)backstagePostType;
-(NSString *)actorId;
-(NSArray *)directSpaces;
-(NSString *)unpublishedMedia;
-(void)setIdempotenceToken:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)idempotenceToken;
-(void)setUnpublishedMedia:(NSString *)arg1 ;
-(void)setDirectSpaces:(NSArray *)arg1 ;
-(NSArray *)specificUsers;
-(void)setSpecificUsers:(NSArray *)arg1 ;
-(void)setIsPrivate:(NSString *)arg1 ;
-(NSString *)mediaType;
-(void)setMediaType:(NSString *)arg1 ;
-(NSString *)isPrivate;
@end
