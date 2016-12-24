/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBIntentTarget.h>

@class NSString, FBMemNativeComponentFlowBookingRequest;

@interface FBPageOpenPageAppointmentDetailsIntentTarget : FBIntentTarget {

	NSString* _appointmentID;
	NSString* _pageID;

}

@property (nonatomic,readonly) FBMemNativeComponentFlowBookingRequest * componentFlowRequest; 
@property (nonatomic,copy,readonly) NSString * appointmentID;                                              //@synthesize appointmentID=_appointmentID - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageID;                                                     //@synthesize pageID=_pageID - In the implementation block
+(id)targetWithComponentFlowRequest:(id)arg1 ;
+(id)targetWithPageID:(id)arg1 appointmentID:(id)arg2 ;
-(id)fallbackURLs;
-(FBMemNativeComponentFlowBookingRequest *)componentFlowRequest;
-(id)initWithPageID:(id)arg1 appointmentID:(id)arg2 ;
-(NSString *)appointmentID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)pageID;
@end
