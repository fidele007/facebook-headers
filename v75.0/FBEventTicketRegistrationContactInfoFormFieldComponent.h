/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@protocol FBEventTicketingContactInfoFormFieldFragment, FBEventTicketRegistrationDataUpdateListener;
@class NSMutableDictionary;

@interface FBEventTicketRegistrationContactInfoFormFieldComponent : CKCompositeComponent {

	id<FBEventTicketingContactInfoFormFieldFragment> _model;
	id<FBEventTicketRegistrationDataUpdateListener> _dataListener;
	NSMutableDictionary* _currentValue;

}
+(id)newWithScreenElement:(id)arg1 currentValue:(id)arg2 dataListener:(id)arg3 ;
-(void)didChange:(id)arg1 withText:(id)arg2 ;
-(BOOL)hasValidEmail;
-(BOOL)hasValidPhone;
-(void)sendCurrentState;
-(BOOL)hasError;
-(BOOL)isValid:(id)arg1 ;
@end
