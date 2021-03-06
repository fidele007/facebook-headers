/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBMemPage, NSArray;

@interface FBEventHostEventsViewModel : FBValueObject <NSCopying> {

	BOOL _eventsCalendarCanViewerSubscribe;
	NSString* _baseEventID;
	NSString* _eventsCalendarSubscriptionStatus;
	FBMemPage* _host;
	NSArray* _owned_events;

}

@property (nonatomic,copy,readonly) NSString * baseEventID;                                   //@synthesize baseEventID=_baseEventID - In the implementation block
@property (nonatomic,readonly) BOOL eventsCalendarCanViewerSubscribe;                         //@synthesize eventsCalendarCanViewerSubscribe=_eventsCalendarCanViewerSubscribe - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventsCalendarSubscriptionStatus;              //@synthesize eventsCalendarSubscriptionStatus=_eventsCalendarSubscriptionStatus - In the implementation block
@property (nonatomic,copy,readonly) FBMemPage * host;                                         //@synthesize host=_host - In the implementation block
@property (nonatomic,copy,readonly) NSArray * owned_events;                                   //@synthesize owned_events=_owned_events - In the implementation block
-(NSString *)eventsCalendarSubscriptionStatus;
-(BOOL)eventsCalendarCanViewerSubscribe;
-(id)initWithBaseEventID:(id)arg1 eventsCalendarCanViewerSubscribe:(BOOL)arg2 eventsCalendarSubscriptionStatus:(id)arg3 host:(id)arg4 owned_events:(id)arg5 ;
-(NSString *)baseEventID;
-(NSArray *)owned_events;
-(FBMemPage *)host;
@end

