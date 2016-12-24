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

@interface FBPageSavedResponseEditData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _savedResponseId;
	NSString* _title;
	NSString* _message;
	NSString* _imageId;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * savedResponseId;               //@synthesize savedResponseId=_savedResponseId - In the implementation block
@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                       //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * imageId;                       //@synthesize imageId=_imageId - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)actorId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)savedResponseId;
-(void)setSavedResponseId:(NSString *)arg1 ;
-(NSString *)imageId;
-(void)setImageId:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
@end

