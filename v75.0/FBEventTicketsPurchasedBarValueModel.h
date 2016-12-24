/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBEventTicketsPurchasedBarValueModel : FBValueObject <NSCopying> {

	BOOL _hasPrimaryCTA;
	long long _numTicketsPurchased;
	NSString* _eventFBID;

}

@property (nonatomic,readonly) long long numTicketsPurchased;              //@synthesize numTicketsPurchased=_numTicketsPurchased - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventFBID;                  //@synthesize eventFBID=_eventFBID - In the implementation block
@property (nonatomic,readonly) BOOL hasPrimaryCTA;                         //@synthesize hasPrimaryCTA=_hasPrimaryCTA - In the implementation block
-(NSString *)eventFBID;
-(long long)numTicketsPurchased;
-(id)initWithNumTicketsPurchased:(long long)arg1 eventFBID:(id)arg2 hasPrimaryCTA:(BOOL)arg3 ;
-(BOOL)hasPrimaryCTA;
@end

