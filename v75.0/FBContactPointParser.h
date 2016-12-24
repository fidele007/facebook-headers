/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBContactPointParser : NSObject

@property (nonatomic,readonly) long long maximumEmailUsernameLength; 
@property (nonatomic,readonly) long long maximumEmailDomainLength; 
-(id)parseParameters:(id)arg1 error:(id*)arg2 ;
-(id)maybeParse:(id)arg1 ;
-(id)parseEmailAddress:(id)arg1 error:(id*)arg2 ;
-(id)parsePhoneNumber:(id)arg1 countryCode:(id)arg2 error:(id*)arg3 ;
-(long long)maximumEmailUsernameLength;
-(long long)maximumEmailDomainLength;
-(id)_helperParsePhoneNumber:(id)arg1 countryCode:(id)arg2 error:(id*)arg3 ensureValidity:(BOOL)arg4 ;
-(id)parsePossiblePhoneNumber:(id)arg1 countryCode:(id)arg2 error:(id*)arg3 ;
@end

