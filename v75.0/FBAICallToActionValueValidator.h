/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBAICallToActionPhoneNumberValidator, FBAdInterfacesWebsiteURLValidator, FBAICallToActionGetDirectionsAddressValidator, FBAICallToActionMessagePageValidator;

@interface FBAICallToActionValueValidator : NSObject {

	FBUserSession* _userSession;
	FBAICallToActionPhoneNumberValidator* _phoneNumberValidator;
	FBAdInterfacesWebsiteURLValidator* _websiteURLValidator;
	FBAICallToActionGetDirectionsAddressValidator* _getDirectionsValidator;
	FBAICallToActionMessagePageValidator* _messagePageValidator;

}
+(id)inconsistencyError;
-(void)_validatePhoneNumberFromOptionValue:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_validateAddressFromOptionValue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_validateURLStringFromOptionValue:(id)arg1 type:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_validateMessagingEnabledFromContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_phoneNumberValidator;
-(id)_getDirectionsValidator;
-(id)_websiteURLValidator;
-(id)_messagePageValidator;
-(void)validateValue:(id)arg1 optionType:(unsigned long long)arg2 context:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)cancel;
-(id)initWithSession:(id)arg1 ;
@end

