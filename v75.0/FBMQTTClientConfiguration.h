/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBMQTTSocketConfig;

@interface FBMQTTClientConfiguration : FBValueObject <NSCoding, NSCopying> {

	NSString* _clientID;
	NSString* _regionPreference;
	FBMQTTSocketConfig* _socketConfig;
	NSString* _clientType;
	NSString* _connectionMergeHost;
	NSString* _connectionMergeHostCname;

}

@property (nonatomic,copy,readonly) NSString * clientID;                              //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,copy,readonly) NSString * regionPreference;                      //@synthesize regionPreference=_regionPreference - In the implementation block
@property (nonatomic,copy,readonly) FBMQTTSocketConfig * socketConfig;                //@synthesize socketConfig=_socketConfig - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientType;                            //@synthesize clientType=_clientType - In the implementation block
@property (nonatomic,copy,readonly) NSString * connectionMergeHost;                   //@synthesize connectionMergeHost=_connectionMergeHost - In the implementation block
@property (nonatomic,copy,readonly) NSString * connectionMergeHostCname;              //@synthesize connectionMergeHostCname=_connectionMergeHostCname - In the implementation block
-(id)initWithClientID:(id)arg1 regionPreference:(id)arg2 socketConfig:(id)arg3 clientType:(id)arg4 connectionMergeHost:(id)arg5 connectionMergeHostCname:(id)arg6 ;
-(NSString *)regionPreference;
-(FBMQTTSocketConfig *)socketConfig;
-(NSString *)connectionMergeHost;
-(NSString *)connectionMergeHostCname;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)clientID;
-(NSString *)clientType;
@end

