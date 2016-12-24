/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBServiceAuthHelper.h>

@interface FBInstagramHelper : FBServiceAuthHelper
-(id)oAuthAuthorizeEndpointWithRequestToken:(id)arg1 consumer:(id)arg2 ;
-(id)extraParamsForOAuthAccessTokenRequestWithRedirectURLParameters:(id)arg1 consumer:(id)arg2 ;
-(long long)maxUsernameLength;
-(long long)maxPostLength;
-(long long)maxMediaPerUpload;
-(id)_oAuthAuthorizeEndpoint;
-(id)_oAuthRequestTokenEndpoint;
-(id)_oAuthCallbackURI;
-(id)_oAuthAccessTokenEndpoint;
-(id)_cookieURLString;
-(id)_parseResponseBody:(id)arg1 ;
-(id)serviceName;
-(unsigned long long)type;
-(id)logo;
-(id)serviceID;
-(unsigned long long)authType;
@end
