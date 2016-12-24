/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequest.h>

@class NSString;

@interface FBDBLSetNonceRequest : FBNetworkerRequest {

	NSString* _accountID;
	NSString* _nonceValue;
	NSString* _providedPin;
	NSString* _machineID;
	NSString* _accessToken;

}

@property (nonatomic,copy) NSString * accountID;                //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy) NSString * nonceValue;               //@synthesize nonceValue=_nonceValue - In the implementation block
@property (nonatomic,copy) NSString * providedPin;              //@synthesize providedPin=_providedPin - In the implementation block
@property (nonatomic,copy) NSString * machineID;                //@synthesize machineID=_machineID - In the implementation block
@property (nonatomic,copy) NSString * accessToken;              //@synthesize accessToken=_accessToken - In the implementation block
-(id)networkRequest;
-(BOOL)allowRetry;
-(id)initWithAccountID:(id)arg1 nonceValue:(id)arg2 providedPin:(id)arg3 machineID:(id)arg4 accessToken:(id)arg5 callbackPerformer:(id)arg6 ;
-(void)setNonceValue:(NSString *)arg1 ;
-(NSString *)nonceValue;
-(void)setProvidedPin:(NSString *)arg1 ;
-(NSString *)providedPin;
-(void)setAccountID:(NSString *)arg1 ;
-(NSString *)machineID;
-(void)setMachineID:(NSString *)arg1 ;
-(void)setAccessToken:(NSString *)arg1 ;
-(NSString *)accountID;
-(NSString *)accessToken;
@end

