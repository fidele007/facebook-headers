/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBServiceConfiguring.h>

@class FBServiceConfigurationCore, FBServiceConfigurationSecurity, FBServiceConfigurationTransport, FBServiceConfigurationRequest, NSString;

@interface FBServiceConfiguration : NSObject <FBServiceConfiguring> {

	FBServiceConfigurationCore* _core;
	FBServiceConfigurationSecurity* _security;
	FBServiceConfigurationTransport* _transport;
	FBServiceConfigurationRequest* _request;

}

@property (nonatomic,readonly) FBServiceConfigurationCore * core;                        //@synthesize core=_core - In the implementation block
@property (nonatomic,readonly) FBServiceConfigurationSecurity * security;                //@synthesize security=_security - In the implementation block
@property (nonatomic,readonly) FBServiceConfigurationTransport * transport;              //@synthesize transport=_transport - In the implementation block
@property (nonatomic,readonly) FBServiceConfigurationRequest * request;                  //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultConfiguration;
-(FBServiceConfigurationCore *)core;
-(id)initWithCore:(id)arg1 security:(id)arg2 transport:(id)arg3 request:(id)arg4 ;
-(NSString *)description;
-(FBServiceConfigurationRequest *)request;
-(FBServiceConfigurationSecurity *)security;
-(FBServiceConfigurationTransport *)transport;
@end

