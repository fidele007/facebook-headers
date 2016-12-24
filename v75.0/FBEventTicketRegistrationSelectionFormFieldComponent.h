/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@protocol FBEventTicketingStringSelectionFormFieldFragment, FBEventTicketRegistrationDataUpdateListener;
@class NSArray;

@interface FBEventTicketRegistrationSelectionFormFieldComponent : CKCompositeComponent {

	id<FBEventTicketingStringSelectionFormFieldFragment> _model;
	id<FBEventTicketRegistrationDataUpdateListener> _dataListener;
	NSArray* _currentValue;

}
+(id)newWithScreenElement:(id)arg1 currentValue:(id)arg2 dataListener:(id)arg3 ;
-(void)didSelectItem:(id)arg1 withItemId:(id)arg2 ;
-(void)sendCurrentState;
@end
