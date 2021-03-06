/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkRequest.h>
#import <Facebook/FBDuplicatedFacebookAPIProperties.h>

@class NSString, FBGraphRequest;

@interface FBFacebookAPIRequest : FBNetworkRequest <FBDuplicatedFacebookAPIProperties> {

	BOOL _useZeroRatedHost;
	NSString* _actorFBID;
	NSString* _accessTokenOverride_DEPRECATED;

}

@property (assign,nonatomic) BOOL useZeroRatedHost;                                //@synthesize useZeroRatedHost=_useZeroRatedHost - In the implementation block
@property (nonatomic,readonly) FBGraphRequest * requestForUDPPriming; 
@property (nonatomic,copy) NSString * actorFBID;                                   //@synthesize actorFBID=_actorFBID - In the implementation block
@property (nonatomic,copy) NSString * accessTokenOverride_DEPRECATED;              //@synthesize accessTokenOverride_DEPRECATED=_accessTokenOverride_DEPRECATED - In the implementation block
+(void)configureWithLoginSecret:(id)arg1 appVersion:(id)arg2 ;
-(void)setActorFBID:(NSString *)arg1 ;
-(NSString *)actorFBID;
-(void)setAccessTokenOverride_DEPRECATED:(NSString *)arg1 ;
-(void)setUseZeroRatedHost:(BOOL)arg1 ;
-(NSString *)accessTokenOverride_DEPRECATED;
-(id)generateRequest;
-(FBGraphRequest *)requestForUDPPriming;
-(BOOL)useZeroRatedHost;
-(BOOL)useMultipartForm;
-(id)methodForSignature;
-(void)setRequestUUID:(id)arg1 ;
-(unsigned long long)compressionMethod;
-(id)init;
-(id)host;
-(id)parameters;
-(id)httpMethod;
-(id)relativePath;
@end

