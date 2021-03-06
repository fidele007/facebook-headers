/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBPhoneNumber.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NBPhoneNumber, NBPhoneNumberUtil, NSError;

@interface LPPhoneNumber : NSObject <FBPhoneNumber, NSCopying> {

	NBPhoneNumber* _impl;
	NBPhoneNumberUtil* _phoneNumberUtil;
	NSString* _rawInput;
	NSString* _isoCountryCode;
	NSString* _rawCountryInput;
	int _callingCode;
	NSError* _error;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * isoCountryCode; 
@property (nonatomic,readonly) int callingCode; 
-(id)formatWithStyle:(int)arg1 ;
-(int)callingCode;
-(id)rawInput;
-(id)initWithNumber:(id)arg1 defaultCountry:(id)arg2 ;
-(id)formatForCallingFromCountry:(id)arg1 ;
-(id)asTelUrl;
-(id)initWithE164Number:(id)arg1 ;
-(BOOL)isPossible;
-(void)_initPhoneNumerUtilsIfNecessary;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)isoCountryCode;
@end

