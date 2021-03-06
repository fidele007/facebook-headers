/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBEventTicketingIndividualTicketRegistrationDataDelegate.h>

@protocol FBEventTicketingRegistrationDataDelegate;
@class NSMutableArray;

@interface FBEventTicketingRegistrationDataStore : NSObject <FBEventTicketingIndividualTicketRegistrationDataDelegate> {

	NSMutableArray* _registrationData;
	NSMutableArray* _registrationDataWithErrors;
	id<FBEventTicketingRegistrationDataDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBEventTicketingRegistrationDataDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithNumForms:(int)arg1 ;
-(id)registrationDataForForm:(int)arg1 ;
-(BOOL)doesHaveError;
-(void)ticketRegistrationData:(id)arg1 hasError:(BOOL)arg2 ;
-(void)setDelegate:(id<FBEventTicketingRegistrationDataDelegate>)arg1 ;
-(id<FBEventTicketingRegistrationDataDelegate>)delegate;
-(id)initWithData:(id)arg1 ;
@end

