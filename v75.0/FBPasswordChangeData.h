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

@interface FBPasswordChangeData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _oldPassword;
	NSString* _password;
	NSString* _confirmPassword;
	NSString* _securityCheckupSource;

}

@property (nonatomic,copy) NSString * clientMutationId;                   //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                            //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * oldPassword;                        //@synthesize oldPassword=_oldPassword - In the implementation block
@property (nonatomic,copy) NSString * password;                           //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * confirmPassword;                    //@synthesize confirmPassword=_confirmPassword - In the implementation block
@property (nonatomic,copy) NSString * securityCheckupSource;              //@synthesize securityCheckupSource=_securityCheckupSource - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)actorId;
-(void)setConfirmPassword:(NSString *)arg1 ;
-(void)setSecurityCheckupSource:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)oldPassword;
-(NSString *)confirmPassword;
-(NSString *)securityCheckupSource;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)setOldPassword:(NSString *)arg1 ;
@end
