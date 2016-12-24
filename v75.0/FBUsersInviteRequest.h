/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequest.h>

@class NSString, FBCurrentCountryManager, FBUserSession;

@interface FBUsersInviteRequest : FBNetworkerRequest {

	NSString* _credentialString;
	FBCurrentCountryManager* _countryManager;
	long long _contactImporterFlow;
	FBUserSession* _session;

}
-(id)networkRequest;
-(id)initWithCredentials:(id)arg1 callbackPerformer:(id)arg2 contactImporterFlow:(long long)arg3 session:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

