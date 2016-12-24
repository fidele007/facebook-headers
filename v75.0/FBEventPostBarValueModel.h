/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface FBEventPostBarValueModel : FBValueObject <NSCopying> {

	BOOL _canViewerPost;
	NSString* _eventId;
	NSString* _eventCreatorGraphQLID;
	NSString* _viewerGuestStatus;
	NSString* _connectionStyle;
	NSString* _eventKind;
	NSDate* _eventStartDate;
	NSDate* _eventEndDate;
	double _eventLocationLatitude;
	double _eventLocationLongitude;

}

@property (nonatomic,copy,readonly) NSString * eventId;                            //@synthesize eventId=_eventId - In the implementation block
@property (nonatomic,readonly) BOOL canViewerPost;                                 //@synthesize canViewerPost=_canViewerPost - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventCreatorGraphQLID;              //@synthesize eventCreatorGraphQLID=_eventCreatorGraphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSString * viewerGuestStatus;                  //@synthesize viewerGuestStatus=_viewerGuestStatus - In the implementation block
@property (nonatomic,copy,readonly) NSString * connectionStyle;                    //@synthesize connectionStyle=_connectionStyle - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventKind;                          //@synthesize eventKind=_eventKind - In the implementation block
@property (nonatomic,copy,readonly) NSDate * eventStartDate;                       //@synthesize eventStartDate=_eventStartDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * eventEndDate;                         //@synthesize eventEndDate=_eventEndDate - In the implementation block
@property (nonatomic,readonly) double eventLocationLatitude;                       //@synthesize eventLocationLatitude=_eventLocationLatitude - In the implementation block
@property (nonatomic,readonly) double eventLocationLongitude;                      //@synthesize eventLocationLongitude=_eventLocationLongitude - In the implementation block
-(NSString *)viewerGuestStatus;
-(NSString *)eventKind;
-(BOOL)canViewerPost;
-(id)initWithEventId:(id)arg1 canViewerPost:(BOOL)arg2 eventCreatorGraphQLID:(id)arg3 viewerGuestStatus:(id)arg4 connectionStyle:(id)arg5 eventKind:(id)arg6 eventStartDate:(id)arg7 eventEndDate:(id)arg8 eventLocationLatitude:(double)arg9 eventLocationLongitude:(double)arg10 ;
-(NSString *)eventCreatorGraphQLID;
-(double)eventLocationLatitude;
-(double)eventLocationLongitude;
-(NSString *)eventId;
-(NSDate *)eventEndDate;
-(NSDate *)eventStartDate;
-(NSString *)connectionStyle;
@end

